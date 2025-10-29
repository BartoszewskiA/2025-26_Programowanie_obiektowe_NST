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
//Konstruktory bez parametrów
    // Student() {
    //     imie = "Brak";
    //     nazwisko = "Brak";
    //     ocena = 0;
    // }
    Student() {
        string temp;
        cout<<"Imie: ";
        getline(cin, temp);
        imie = temp;
        cout<<"Nazwisko: ";
        getline(cin, temp);
        nazwisko = temp;
        cout<<"Ocena: ";
        getline(cin, temp);
        ocena = stoi(temp);
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
    Student s1;

    s1.przedstaw_sie();
    return 0;
}