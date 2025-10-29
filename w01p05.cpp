#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string imie;
    string nazwisko;
    int ocena;

public:
    //Konstruktory z parametrami
    Student(string i, string n, int o) {
        imie = i;
        nazwisko = n;
        ocena = o;
    }


    void setImie(string i) { imie = i; }
    void setNazwisko(string n) { nazwisko = n; }
    void setOcena(int o) { ocena = o; }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getOcena() { return ocena; }
    void przedstaw_sie(); // nagłowek funkcji
}; // koniec ciła klasy

void Student::przedstaw_sie() // ciało funkcji
{
    cout << "Nazywam sie " << imie << " "
         << nazwisko << " i moja ocena to "
         << ocena << endl;
}

int main()
{
    Student s1("Jan", "Kowalski", 5);

    s1.przedstaw_sie();
    return 0;
}