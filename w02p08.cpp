#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int wartosc;
    int maksimum;

public:
    Liczba(int maksimum=100) : maksimum(maksimum)
    {
        wartosc = rand() % maksimum; // losowa wartosc od 0 do 99
    }
    void setMaksimum(int maksimum)
    {
        this->maksimum = maksimum;
        wartosc = rand() % maksimum; // losowa wartosc od 0 do 99
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
    // Liczba l1(500);
    // cout << "Wartosc: " << l1.getWartosc() << endl;
    Liczba tab[100];
    for (int i = 0; i < 100; i++)
    {
        cout << tab[i].getWartosc() << " ";
    }
    cout <<"-----------------------------------" << endl;
    for (int i = 0; i < 100; i++)
    {
        tab[i].setMaksimum(500);
    }
    for (int i = 0; i < 100; i++)
    {
        cout << tab[i].getWartosc() << " ";
    }
    return 0;
}