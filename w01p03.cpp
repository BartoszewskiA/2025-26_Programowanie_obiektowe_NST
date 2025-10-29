#include <iostream>

using namespace std;

class Student
{
private:
    string imie;
    string nazwisko;
    int ocena;

public:
    void setImie(string i) { imie = i; }
    void setNazwisko(string n) { nazwisko = n; }
    void setOcena(int o) { ocena = o; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getOcena() { return ocena; }
    void przedstaw_sie(); //nagłowek funkcji
}; // koniec ciła klasy

void Student::przedstaw_sie() //ciało funkcji
{
    cout << "Nazywam sie " << imie << " "
         << nazwisko << " i moja ocena to "
         << ocena << endl;
}

int main()
{
    Student s1;
    s1.setImie("Jan");
    s1.setNazwisko("Kowalski");
    s1.setOcena(5);
    return 0;
}