#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>


using namespace std;
struct Data{
    string Spectralclass;
    string Weight;
    float Number;
    int Part;
    Data *nnew;
};
Data *active, *first;
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n < 1||n > 9)
        cout << "Error";
    else{
        active = new(Data);
        first = active;
         for(int i = 0; i < n; i++){
             cout << " . Enter: Spectralclass, Weight, Part, Number ";
             cin >> active->Spectralclass;
             if(active->Spectralclass == "***")break;
             else{
                 cin >> active->Weight;
                 cin >> active->Number;
                 cin >> active->Part;
                 active->nnew=new(Data);
                 active=active->nnew;
             }
         }
        cout << " -----------------------------------------------------------------------------\n ";
        cout << "|  Approximate number of stars of different spectral classes in Galaxy      |\n ";
        cout << "-----------------------------------------------------------------------------\n ";
        cout << "|      Spectral class      |    Weight        |     Part    |     Number    |\n ";
        cout << "-----------------------------------------------------------------------------\n ";
        active=first;
        for(int i = 0; i < n; i++){
            cout << "|" << setw(25) << left << active->Spectralclass;
            cout << " | " << setw(16) << left << active->Weight;
            cout << " | " << setw(11) << left << active->Number;
            cout << " | " << setw(13) << left << active->Part << "|\n";
            active=active->nnew;
        }
        cout << " ----------------------------------------------------------------------------\n ";
        cout << "|               Note: data not shown for classes: B, A, G, K                |\n ";
        cout << "-----------------------------------------------------------------------------\n ";

    }
    return 0;
}
/*
  M 50 3.2 2930
  F 15 2.9 1200
  R 37 0.4 5138
 */