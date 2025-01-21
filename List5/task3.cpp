#include <algorithm>
#include <format>
#include <iostream>
#include <vector>
#include <algorithm>

class Skarb
{
  public:
	Skarb (int cena, int ciezar) : cena (cena), ciezar (ciezar)
	{
	}

	unsigned int getCena () const
	{
		return cena;
	}
	unsigned int getCiezar () const
	{
		return ciezar;
	}
	void print () const
	{
		std::cout << std::format ("Cena = {}, Ciezar = {}", getCena (), getCiezar ()) << "\n";
	}

  private:
	unsigned int cena{0};
	unsigned int ciezar{0};
};

int algorytm (int skarbId, int miejscePlecak, const std::vector<Skarb> &skarbiec, std::vector<std::vector<int>> &memory)
{
	if (skarbId == 0 || miejscePlecak == 0)
		return 0;
	if (memory[ skarbId ][ miejscePlecak ] != -1)
		return memory[ skarbId ][ miejscePlecak ];
	if (skarbiec[ skarbId - 1 ].getCiezar () > miejscePlecak)
		memory[ skarbId ][ miejscePlecak ] = algorytm (skarbId - 1, miejscePlecak, skarbiec, memory);
	else
	{
memory[skarbId][miejscePlecak] = std::max(
    algorytm(skarbId - 1, miejscePlecak, skarbiec, memory),
    algorytm(skarbId - 1, miejscePlecak - skarbiec[skarbId - 1].getCiezar(), skarbiec, memory) + static_cast<int>(skarbiec[skarbId - 1].getCena())
);

	}
	return memory[ skarbId ][ miejscePlecak ];
}

int main ()
{
  int plecak = 10;
	int rozmiarSkarbca = 10;

	std::vector<Skarb> skarbiec{};

  for (int i = 0; i < rozmiarSkarbca; ++i)
  {
    skarbiec.push_back({std::rand() % 5 + 1, std::rand() % 10 + 1});
  }

	std::cout << "Zawartość skarbca:\n";
	for (const auto &el: skarbiec)
		el.print ();

	std::vector<std::vector<int>> memory (rozmiarSkarbca + 1, std::vector<int> (plecak + 1, -1));
	int wynik = algorytm (rozmiarSkarbca, plecak, skarbiec, memory);
	std::cout << "Największa możliwa wartość skarbów: " << wynik << std::endl;

	return 0;
}