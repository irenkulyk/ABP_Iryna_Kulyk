#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char spс1[5], spс2[5], spс3[5];
    char wei1[5], wei2[5], wei3[5];

    unsigned short par1, par2, par3;
    float siz1, siz2, siz3;


    cout << "1. Enter: Spectral class, Weight, Part, Number\n  ";
    cin >> spс1 >> wei1 >> par1 >> siz1;
    cout << "2. Enter: Spectral class, Weight, Part, Number\n  ";
    cin >> spс2 >> wei2 >> par2 >> siz2;
    cout << "3. Enter: Spectral class, Weight, Part, Number\n  ";
    cin >> spс3 >> wei3 >> par3 >> siz3;
    cout << " -----------------------------------------------------------------------------\n ";
    cout << "|  Approximate number of stars of different spectral classes in Galaxy      |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|      Spectral class      |    Weight        |     Part    |     Number    |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|" <<setw(25) << spс1 << " | " << setw(16) << wei1 << " | " <<setw(11) << par1 << " | " << setw(13) << siz1 << " | " << endl;
    cout << " |" <<setw(25) << spс2 << " | " << setw(16) << wei2 << " | " <<setw(11) << par2 << " | " << setw(13) << siz2 << " | " << endl;
    cout << " |" <<setw(25) << spс3 << " | " << setw(16) << wei3 << " | " <<setw(11) << par3 << " | " << setw(13) << siz3 << " | " << endl;
    cout << " ----------------------------------------------------------------------------\n ";
    cout << "|               Note: data not shown for classes: B, A, G, K                |\n ";
    cout << "-----------------------------------------------------------------------------\n ";

    return 0;
}


