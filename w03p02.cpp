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
    void setNazwisko(string nazwisko) { this->nazwisko = nazwisko;}
    string toString()
    {
        stringstream bufor;
        bufor << "Imie= " << imie << ", Nazwisko= " << nazwisko << endl;
        return bufor.str();
    }
};

int main()
{
    
    return 0;
}