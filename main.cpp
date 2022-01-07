#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string text;

    cout << "Wpisz swoje imie i nazwisko: ";
    getline(cin, text);

    ofstream moj_plik("dane.txt");
    moj_plik << text;

    moj_plik.close();

    return 0;
}
