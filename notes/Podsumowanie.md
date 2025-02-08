## 1. Wyrażenia lambda

### a) Notacja
Wyrażenia lambda w C++ pozwalają na definiowanie anonimowych funkcji w miejscu ich użycia. Składnia wygląda następująco:
\[ capture-list ] ( parameters ) -> return-type { body }

### b) Zapis `[=]`, `[&]`, `[a=b]`
- `[=]`: Przechwytuje wszystkie zmienne z otaczającego zakresu przez wartość.
- `[&]`: Przechwytuje wszystkie zmienne z otaczającego zakresu przez referencję.
- `[a=b]`: Przechwytuje zmienną `a` przez wartość, ale inicjalizuje ją wartością `b`.

### c) Prosty przykład użycia, np. w `std::sort`
```cpp
std::vector<int> v = {4, 1, 3, 5, 2};
std::sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
```

### d) Związek z obiektami funkcyjnymi
Wyrażenia lambda są w rzeczywistości obiektami funkcyjnymi. Kompilator generuje klasę z przeciążonym operatorem `()`, który implementuje ciało lambda.

## 2. Move semantics

### a) `r-value`, `x-value` i `l-value`
- `l-value`: Wartość, która ma nazwę i adres w pamięci.
- `r-value`: Tymczasowa wartość, która nie ma nazwy ani adresu.
- `x-value`: Wartość, która jest "przenoszona" (może być zarówno `l-value`, jak i `r-value`).

### b) Referencje `&`, `&&`
- `&`: Referencja do `l-value`.
- `&&`: Referencja do `r-value`.

### c) „Reguła trzech” i „Reguła pięciu”
- **Reguła trzech**: Jeśli klasa definiuje destruktor, konstruktor kopiujący lub operator przypisania kopiującego, powinna zdefiniować wszystkie trzy.
- **Reguła pięciu**: Dodaje do reguły trzech konstruktor przenoszący i operator przypisania przenoszącego.

### d) `std::move`
`std::move` konwertuje `l-value` na `r-value`, umożliwiając przenoszenie zasobów.

### e) Copy elision, Named Return Value Optimisation (NRVO)
- **Copy elision**: Optymalizacja kompilatora, która eliminuje niepotrzebne kopiowanie obiektów.
- **NRVO**: Optymalizacja, która eliminuje kopiowanie obiektów zwracanych z funkcji.

### f) Dlaczego move semantics ma znaczenie dla klas typu `std::vector`, ale nie np. dla `std::complex`
`std::vector` zarządza dynamicznie alokowaną pamięcią, więc przenoszenie jest efektywne. `std::complex` przechowuje dane bezpośrednio, więc przenoszenie nie przynosi korzyści.

### g) Kiedy wywoływany jest konstruktor przenoszący (i co to jest)?
Konstruktor przenoszący jest wywoływany, gdy obiekt jest inicjalizowany z innego obiektu, który jest `r-value`. Pozwala na przeniesienie zasobów z jednego obiektu do drugiego.

### h) Co to jest referencja uniwersalna?
Referencja uniwersalna to referencja, która może wiązać się zarówno z `l-value`, jak i `r-value`. Jest używana w szablonach z dedukcją typu.

## 3. Szablony

### a) Co to są specjalizacje częściowe i specjalizacje pełne? Podaj prosty przykład.
- **Specjalizacja pełna**: Definiuje szablon dla konkretnego typu.
- **Specjalizacja częściowa**: Definiuje szablon dla częściowego zestawu typów.

Przykład:
```cpp
template <typename T>
class MyClass {}; // Szablon ogólny

template <>
class MyClass<int> {}; // Specjalizacja pełna dla int

template <typename T>
class MyClass<T*> {}; // Specjalizacja częściowa dla wskaźników
```

### b) Jaki jest związek między specjalizacjami szablonu a szablonem ogólnym?
Specjalizacje szablonu są bardziej szczegółowymi wersjami szablonu ogólnego. Kompilator wybiera najbardziej specyficzną wersję szablonu pasującą do danego typu.

## 4. Programowanie równoległe

### a) Modele pamięci: współdzielonej i rozproszonej
- **Pamięć współdzielona**: Wszystkie wątki mają dostęp do tej samej pamięci.
- **Pamięć rozproszona**: Każdy proces ma swoją własną pamięć.

### b) Wyścig i zakleszczenie
- **Wyścig**: Gdy wiele wątków próbuje jednocześnie modyfikować te same dane.
- **Zakleszczenie**: Gdy wątki blokują się wzajemnie, czekając na zasoby.

### c) OpenMP
- **Zrównoleglanie**: Dyrektywy `#pragma omp` pozwalają na łatwe zrównoleglanie kodu.
- **Zalety**: Łatwość użycia, przenośność.
- **Wady**: Ograniczone do pamięci współdzielonej.

### d) MPI
- **Zrównoleglanie**: Komunikacja między procesami za pomocą wysyłania i odbierania wiadomości.
- **Różnica od OpenMP**: MPI działa w pamięci rozproszonej.
- **Kompilacja i uruchamianie**: Używa się `mpicc` do kompilacji i `mpirun` do uruchamiania.

### e) Klasy `std::thread`, `std::mutex`, `std::lock_guard`, `std::unique_lock`
- `std::thread`: Reprezentuje wątek.
- `std::mutex`: Służy do synchronizacji wątków.
- `std::lock_guard`: Automatycznie zarządza blokadą.
- `std::unique_lock`: Bardziej elastyczna wersja `std::lock_guard`.

### f) `promise / future`
- `promise`: Obiekt, który może przechowywać wartość, która będzie dostępna w przyszłości.
- `future`: Obiekt, który pozwala na odczytanie wartości z `promise`.

### g) Zrównoleglanie kodu przy pomocy `std::async`
`std::async` uruchamia funkcję asynchronicznie i zwraca `std::future`, który pozwala na odczytanie wyniku.

### h) `std::condition_variable`
Służy do synchronizacji wątków. Wymaga użycia `std::mutex`, `std::unique_lock` i współdzielonej zmiennej.

### i) Execution policy
Określa sposób wykonania algorytmu równoległego, np. `std::execution::seq`, `std::execution::par`.

### j) Operacje atomowe
Operacje, które są wykonywane jako niepodzielne, np. `std::atomic`.

### k) Muteksy i sekcje krytyczne
- **Muteksy**: Służą do synchronizacji dostępu do współdzielonych zasobów.
- **Sekcje krytyczne**: Fragmenty kodu, które mogą być wykonywane tylko przez jeden wątek naraz.

## 5. RAII

### a) Co to jest RAII, dlaczego tego powszechnie używa się w C++, jaki ta technika ma związek z wyjątkami i przykłady jej użycia
- **RAII**: Resource Acquisition Is Initialization. Zasoby są zarządzane przez obiekty, które są niszczone, gdy wychodzą poza zakres.
- **Związek z wyjątkami**: RAII zapewnia, że zasoby są zwalniane nawet w przypadku wyjątków.
- **Przykłady**: Pliki (`std::fstream`), muteksy (`std::mutex`), kontenery (`std::vector`).

## 6. Programowanie dynamiczne

### a) Podaj podstawowe cechy programowania dynamicznego
- Rozwiązanie problemu przez podział na mniejsze podproblemy.
- Użycie spamiętywania do uniknięcia powtarzania obliczeń.

### b) Co to jest spamiętywanie (ang. memoization) w kontekście programowania dynamicznego?
Spamiętywanie to technika polegająca na zapisywaniu wyników podproblemów, aby uniknąć ich ponownego obliczania.

### c) Prosty przykład, np. symbol Newtona metodą programowania dynamicznego
```cpp
int binomialCoeff(int n, int k) {
    int C[n+1][k+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= std::min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
    return C[n][k];
}
```
