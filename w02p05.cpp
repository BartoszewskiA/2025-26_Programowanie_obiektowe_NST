#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "czas: " << time(NULL) << endl;
    time_t teraz = time(NULL);
    tm *czas = localtime(&teraz);

    cout << "rok: " << czas->tm_year + 1900 << endl;
    cout << "miesiac: " << czas->tm_mon +1<< endl;
    cout << "dzien: " << czas->tm_mday << endl;
    cout << "dzien tygodnia: " << czas->tm_wday << endl;
    cout << "godzina: " << czas->tm_hour << endl;
    cout << "minuta: " << czas->tm_min << endl;
    cout << "sekunda: " << czas->tm_sec << endl;
    return 0;
}