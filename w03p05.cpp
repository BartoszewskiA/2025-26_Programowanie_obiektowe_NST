#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int const ILE = 3;

class Osoba
{
private:
    string imie;
    string nazwisko;

public:
    Osoba() : imie("NN"), nazwisko("NN") {} // konstruktor domyślny
    Osoba(string imie, string nazwisko) : imie(imie), nazwisko(nazwisko) {}
    string getImie() const { return imie; }
    string getNazwisko() const { return nazwisko; }
    void setImie(string imie) { this->imie = imie; }
    void setNazwisko(string nazwisko) { this->nazwisko = nazwisko; }
    string toString()
    {
        stringstream bufor;
        bufor << "Imie= " << imie << ", Nazwisko= " << nazwisko << endl;
        return bufor.str();
    }
};

void wypisz(Osoba os[]);
void wczytaj(Osoba os[]);

    int main()
{
    Osoba tab[ILE]; // musi istnieć konstruktor domyślny
    wczytaj(tab);
    wypisz(tab);
    return 0;
}

void wypisz(Osoba os[])
{
    for (int i = 0; i < ILE; i++)
    {
        cout << os[i].toString();
    }
}

void wczytaj(Osoba os[])
{
    string imie, nazwisko;
    for (int i = 0; i < ILE; i++)
    {
        cout << "Podaj imie: ";
        getline(cin, imie);
        cout << "Podaj nazwisko: ";
        getline(cin, nazwisko);
        os[i].setImie(imie);
        os[i].setNazwisko(nazwisko);
    }
}