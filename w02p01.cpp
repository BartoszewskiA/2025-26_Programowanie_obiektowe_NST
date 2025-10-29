#include <iostream>

using namespace std;

class Osoba
{
    private:
        string imie;
        string nazwisko;
        public:
        Osoba(string imie, string nazwisko)
        {
            this->imie = imie;
            this->nazwisko = nazwisko;
        }
        void setImie(string imie)
        {
            this->imie = imie;
        }
        string getImie()
        {
            return imie;  //this->imie
        }
        void setNazwisko(string nazwisko)
        {
            this->nazwisko = nazwisko;
        }
        string getNazwisko()
        {
            return nazwisko;
};


int main()
{

    return 0;
}