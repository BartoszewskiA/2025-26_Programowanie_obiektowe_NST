#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;

public:
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
}; // koniec klasy Osoba

//nagłowki funkcji
void RODO(Osoba &ktos);

int main()
{
    Osoba osoba1("Jan", "Kowalski");
    cout << "Przed RODO: " << osoba1.toString();
    RODO(osoba1);
    cout << "Po RODO: " << osoba1.toString();
    return 0;
}

void RODO(Osoba &ktos)
{
    string imie = ktos.getImie();
    string nazwisko = ktos.getNazwisko();
    for (int i = 1; i < imie.length(); i++) // pozostawiamy pierwszą literę
        imie[i] = '*';
    for (int i = 1; i < nazwisko.length(); i++) // pozostawiamy pierwszą literę
        nazwisko[i] = '*';
    ktos.setImie(imie);
    ktos.setNazwisko(nazwisko);
}