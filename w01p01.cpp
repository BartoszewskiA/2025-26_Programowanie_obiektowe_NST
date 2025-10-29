#include <iostream>

using namespace std;

class Student
{
public:
    string imie;
    int ocena;
    void przedstawSie()
    {
        cout << "Nazywam sie " << imie << " i moja ocena to " << ocena << endl;
    }
};

int main()
{
    Student s1;
    s1.imie = "Jan";
    s1.ocena = 5;
    // cout << s1.imie << " " << s1.ocena << endl;
    s1.przedstawSie();

    //DYNAMICZNIE
    Student *s2 = new Student;
    s2->imie = "Anna";
    s2->ocena = 4;
    delete s2;
    return 0;
}