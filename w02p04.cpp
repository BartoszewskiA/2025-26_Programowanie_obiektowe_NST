#include <iostream>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;

public:
    // Osoba(string im, string nazw) : imie(im), nazwisko(nazw)
    // {
    // }

    Osoba(string imie, string nazwisko) : imie(imie), nazwisko(nazwisko) {}

    void setImie(string imie)
    {
        this->imie = imie;
    }
    string getImie()
    {
        return imie; // this->imie
    }
    void setNazwisko(string nazwisko)
    {
        this->nazwisko = nazwisko;
    }
    string getNazwisko()
    {
        return nazwisko;
    }
};

int main()
{
    Osoba o1("Jan", "Kowalski");
    cout << o1.getImie() << " " << o1.getNazwisko() << endl;
    return 0;
}