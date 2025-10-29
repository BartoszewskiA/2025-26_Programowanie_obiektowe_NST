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

    Liczba(int wartosc)
    {
        this->wartosc = wartosc;
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
    Liczba l1(34);
    cout << "Wartosc: " << l1.getWartosc() << endl;
    return 0;
}