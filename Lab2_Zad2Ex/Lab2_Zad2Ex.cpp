#include <iostream>

using namespace std;

int main()
{
    int KawalkiPizzy, Uczestnicy;

    cout << "Liczba kawalkow pizzy: ";
    cin >> KawalkiPizzy;

    cout << "Liczba uczestnikow: ";
    cin >> Uczestnicy;

    cout << Uczestnicy << " uczestnikow otrzyma po " << KawalkiPizzy / Uczestnicy << " kawalkow" << endl;
    cout << "Dla gospodarza pozostanie " << KawalkiPizzy % Uczestnicy << " kawalkow" << endl;
}