#include <iostream>
#include <iomanip>
#include <vector>
using namespace  std;

bool mycomp(string a, string b){
    return a<b;
}
vector <string> alphabaticallySort(vector<string> a){
    sort(a.begin(), a.end(), mycomp);
    return a;
}
int main() {
    int size;
    cout << "Enter the number of lines: \t";
    cin >> size;
    struct {
        string  Spectralclass;
        string  Weight;
        int  Part;
        float Number;
    } tabN[size];
    vector <string> Spectralclasses;
    for (int i = 0; i < size; i++) {
        cout << "\n" << i + i << ". Enter: Spectral class, Weight, Part, Number ";
        cin >> tabN[i].Spectralclass >> tabN[i].Weight >> tabN[i].Part >> tabN[i].Number;
        Spectralclasses.push_back(tabN[i].Spectralclass);
    }
    Spectralclasses=alphabaticallySort( Spectralclasses);
   struct {
    string  Spectralclass;
    string  Weight;
    int Number;
    float Part;
    } newtabN[size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if((tabN[i].Spectralclass == Spectralclasses[j])) {
                newtabN[j].Weight = tabN[i].Weight;
                newtabN[j].Part = tabN[i].Part;
                newtabN[j].Number = tabN[i].Number;
            }
        }
    }
    cout << " -----------------------------------------------------------------------------\n ";
    cout << "|  Approximate number of stars of different spectral classes in Galaxy      |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|      Spectral class      |    Weight        |     Part    |     Number    |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    for (int j = 0; j < size; j++) {
        Spectralclasses[j].resize(5);
        tabN[j].Weight.resize(2);
        cout << "| " << Spectralclasses[j] << " | " << newtabN[j].Weight << " | \t\t   " << setprecision(3)
             << newtabN[j].Part << " | " << fixed << setprecision(4) << newtabN[j].Number << " |\n";
    }
        cout << " ----------------------------------------------------------------------------\n ";
        cout << "|               Note: data not shown for classes: B, A, G, K                |\n ";
        cout << "-----------------------------------------------------------------------------\n ";
        cout << "\n\n";
}
/*
  R 32 0.1 5500
  F 15 2.9 1200
  M 50 3.2 2930
 */
