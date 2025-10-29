#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int wartosc;

public:
    Liczba()
    {
        wartosc = rand() % 100; // losowa wartosc od 0 do 99
    }
    void setWartosc(int wartosc)
    {
        this->wartosc = wartosc;
    }
    int getWartosc()
    {
        return wartosc;
    }
};

int main()
{
   srand(time(NULL)); // inicjalizacja generatora liczb losowych
    Liczba tab[100];
    for (int i = 0; i < 100; i++)
    {
        cout<< tab[i].getWartosc() << " ";
    }
    return 0;
}