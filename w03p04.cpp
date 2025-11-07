#include <iostream>

using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Konstruktor Test()" << endl;
    }
    ~Test()
    {
        cout << "Destruktor ~Test()" << endl;
    }
};

void funkcja(Test &t);
void funkcja_2(Test const &t);

    int main()
{
    Test obj; // obiekt lokalny
    funkcja(obj); // przekazanie obiektu do funkcji
    Test *wsk = new Test(); // obiekt dynamiczny
    delete wsk;
    return 0;
}

void funkcja(Test &t)
{
    cout << "Funkcja przyjela obiekt Test" << endl;
}

void funkcja_2(Test const &t)
{
    cout << "Funkcja 2 przyjela obiekt Test" << endl;
}