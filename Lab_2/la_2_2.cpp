#include <iostream>
#include <iomanip>
 using namespace std;

int lab2_2(void) {
    char spect1[10], spect2[10], spect3[10];
    char wei1[5], wei2[5], wei3[5];
    unsigned short par1, par2, par3;
    float siz1, siz2, siz3;


    cout << "1. Enter: Spectral class, Weight, Part, Number\n  ";
    cin >> spect1 >> wei1 >> par1 >> siz1;
    cout << "2. Enter: Spectral class, Weight, Part, Number\n  ";
    cin >> spect2 >> wei2 >> par2 >> siz2;
    cout << "3. Enter: Spectral class, Weight, Part, Number\n  ";
    cin >> spect3 >> wei3 >> par3 >> siz3;

    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|  Approximate number of stars of different spectral classes in Galakticia  |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|      Spectral class     |      Weight     |     Part     |     Number     |\n ";
    cout << "-----------------------------------------------------------------------------\n ";

    cout << "| " <<setw(12) << spect1 << " | " << setw(8) << wei1 << " | " <<setw(10) << par1 << " | " << setw(6) << siz1 << " | " << endl;
    cout << "| " <<setw(12) << spect2 << " | " << setw(8) << wei2 << " | " <<setw(10) << par2 << " | " << setw(6) << siz2 << " | " << endl;
    cout << "| " <<setw(12) << spect3 << " | " << setw(8) << wei3 << " | " <<setw(10) << par3 << " | " << setw(6) << siz3 << " | " << endl;

    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|               Note: data not shown for classes: B, A, G, K                |\n ";
    cout << "-----------------------------------------------------------------------------\n ";

    return 0;
}


