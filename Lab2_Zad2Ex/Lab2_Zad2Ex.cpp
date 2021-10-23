#include <iostream>

using namespace std;

int main()
{
    int KawalkiPizzy, Uczestnicy;

    cout << "Liczba kawalkow pizzy: ";
    cin >> KawalkiPizzy;

    cout << "Liczba uczestnikow: ";
    cin >> Uczestnicy;

    int IleKawalkow = KawalkiPizzy / Uczestnicy;

    cout << Uczestnicy << "uczestników otrzyma po " << IleKawalkow << "kawalkow" << endl;
    cout << "Dla organizatora gospodarza " << IleKawalkow % Uczestnicy << "kawalkow" << endl;
}