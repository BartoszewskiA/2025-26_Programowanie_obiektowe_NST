#include <iostream>

using namespace std;

class Liczba
{
private:
    int wartosc;

public:
    Liczba(int wartosc = 0)
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
    Liczba l1;
    cout << "Wartosc: " << l1.getWartosc() << endl;
    return 0;
}