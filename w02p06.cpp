#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

class Kontroler
{
private:
    fstream plik;
    time_t teraz;
    tm *czas;

public:
    Kontroler()
    {
        // cout << "Konstruktor Kontroler" << endl;
        teraz = time(NULL);
        czas = localtime(&teraz);
        plik.open("log.txt", ios::app);
        plik << "Start: "
             << czas->tm_mday << "."
             << czas->tm_mon + 1 << "."
             << czas->tm_year + 1900 << " "
             << czas->tm_hour << ":"
             << czas->tm_min << ":"
             << czas->tm_sec
             << endl;
        plik.close();
    }

    ~Kontroler()
    {
        // cout << "Destruktor Kontroler" << endl;
        teraz = time(NULL);
        czas = localtime(&teraz);
        plik.open("log.txt", ios::app);
        plik << "Stop: "
             << czas->tm_mday << "."
             << czas->tm_mon + 1 << "."
             << czas->tm_year + 1900 << " "
             << czas->tm_hour << ":"
             << czas->tm_min << ":"
             << czas->tm_sec
             << endl;
        plik.close();
    }
};

int main()
{
    Kontroler *k = new Kontroler();
    cout << "rozpoczoles prace;" << endl;
    cout << "czy juz konczymy? ";
    string s;
    getline(cin, s);
    cout << "Do zobaczenia!" << endl;
    delete k;
    return 0;
}