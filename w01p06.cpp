#include <iostream>

using namespace std;

class Klasa {
    public:
        Klasa() {
            cout << "Konstruktor" << endl;
        }
        ~Klasa() {
            cout << "Destruktor" << endl;
        }
};

int main()
{
    //Klasa k1;
    Klasa *k2 = new Klasa;
    delete k2;
    return 0;
}