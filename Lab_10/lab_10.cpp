#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>

using namespace std;
class My_class {
public:
    char Spectralclass[5];
    char Weight[4];
    int Number;
    float Part;

    void show() {
        cout << "|" << setw(25) << left << Spectralclass << "|" << setw(16) << left << Weight << "|" << setw(11) << left
             << Number << "|" << setw(13) << left << Part << "|" << endl;
    }
    void set(char a[],char b[], unsigned int c, float d){
        strcpy(Spectralclass,a);
        strcpy(Weight,b);
        Number = c;
        Part = d;
    }
    void get(char a[],char b[], unsigned int c, float d){
        a = new char [strlen(Spectralclass)+1];
        b = new char [strlen(Weight)+1];
        c = Number;
        d = Part;
    }
};
void Print(My_class cl[]){
    char a[5];char b[4];unsigned int c; float d;
    cout << " -----------------------------------------------------------------------------\n ";
    cout << "|  Approximate number of stars of different spectral classes in Galaxy      |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|      Spectral class      |    Weight        |     Part    |     Number    |\n ";
    cout << "-----------------------------------------------------------------------------\n ";

    for(int i = 0; i < 3; i++){
        cl[i].show();
        cl[i].get(a,b,c,d);
    }
    cout << " ----------------------------------------------------------------------------\n ";
    cout << "|               Note: data not shown for classes: B, A, G, K                |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
}
My_class cl[3];
int main() {
    char Spectralclass[5];
    char Weight[4];
    int Number;
    float Part;
    cout << " . Enter: Spectralclass, Weight, Part, Number ";
    for (int i = 0; i < 1; i++) {
        cin >> Spectralclass >> Weight >> Number >> Part;
        cl[0].set(Spectralclass, Weight, Number, Part);

    }
    Print(cl);

}
/*
  M 50 3.2 2930
  F 15 2.9 1200
  R 37 0.4 5138
 */
