#include <iostream>
#include <sstream>

using namespace std;

class Przyklad
{
private:
    int x;

public:
    Przyklad() : x(0) {}
    Przyklad(int x) : x(x) {}
    int getX() const { return x; }
    void setX(int x) { this->x = x; }
    string toString()
    {
        stringstream bufor;
        bufor << "Przyklad(x=" << x << ")";
        return bufor.str();
    }
};

int main()
{
    Przyklad obj1;                     // Domyślny konstruktor
    Przyklad obj2(42);                 // Konstruktor z argumentem
    Przyklad *wsk = new Przyklad(100); // Dynamiczne tworzenie obiektu
    cout << obj1.toString();

    delete wsk;                        // Zwolnienie pamięci
    return 0;
}