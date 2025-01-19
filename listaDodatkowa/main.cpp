#include <iostream>

class Singleton
{
    private:
    Singleton()
    {
        std::cout << "Tworzenie instancji adres: " << this << " +\n";
    };

    
    public:
    static int callsCounter;
    
    ~Singleton()
    {
        std::cout << "Usuwanie instancji klasy adres: " << this << " -\n";
    }
    
    static Singleton& instance()
    {
        static Singleton ref;
        return ref;
    }
    
    void calls()
    {
        std::cout << "Adres: " << this << "\t Wywołan calls: " << ++callsCounter << "\n";
    }
    
};

int Singleton::callsCounter = 0;

int main()
{
    Singleton& sing = Singleton::instance();
    sing.calls();
    sing.calls();
    Singleton& sing1 = Singleton::instance();
    sing1.calls();
    return 0;
}
