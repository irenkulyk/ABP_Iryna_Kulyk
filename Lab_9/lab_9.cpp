#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

string s = "lab9";
fstream file;
bool mycomp_9(string a, string b){
    return a<b;
}
vector <string> alphabaticallySort_main(vector<string> a) {
    sort(a.begin(),a.end(), mycomp_9);
    return a;
}
vector <string> Spectralclass_main;
void enterData(int size) {
    file.open(s, ios_base::in | ios_base::out | ios_base::trunc);
    string Spectralclass[size];
    string Weight[size];
    float Number[size];
    int Part[size];

    for (int i = 0; i < size; i++) {
        cout << "\n" << i + 1 << ". Enter: Spectralclass, Weight, Number, Part";
        cin >> Spectralclass[i];
        Spectralclass_main.push_back(Spectralclass[i]);
        file << Spectralclass[i] << '\n';
        cin >> Weight[i];
        file << Weight[i] << '\n';
        cin >> Number[i];
        file << Number[i] << '\n';
        cin >> Part[i];
        file << Part[i] << '\n';
    }
    file.close();
}
    void showTab(int size){
        string Spectralclass [size] ;
        string Weight[size];
        string Number[size];
        string Part[size];
        file.open(s, ios_base::in | ios_base::out);
        cout << " -----------------------------------------------------------------------------\n ";
        cout << "|  Approximate number of stars of different spectral classes in Galaxy      |\n ";
        cout << "-----------------------------------------------------------------------------\n ";
        cout << "|      Spectral class      |    Weight        |     Part    |     Number    |\n ";
        cout << "-----------------------------------------------------------------------------\n ";
        for(int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++){
                getline(file, Spectralclass[j], '\n');
                getline(file, Weight[j], '\n');
                getline(file, Number[j], '\n');
                getline(file, Part[j], '\n');
                if (Spectralclass_main[i] == Spectralclass[j] ) {
                    Spectralclass[j].resize(25);
                    Weight[j].resize(16);
                    Number[j].resize(11);
                    Part[j].resize(13);
                    cout << "| " << Spectralclass[j] << " | " << Weight[j] << " | " << Number[j] << " |" << fixed << setprecision(5) <<stod(Part[j]) << " |\n";

                }

            }

        }
        cout << " ----------------------------------------------------------------------------\n ";
        cout << "|               Note: data not shown for classes: B, A, G, K                |\n ";
        cout << "-----------------------------------------------------------------------------\n ";


    }
    int main(){
    string path = "lab9";
    ofstream file;
    file.open(path);
    if (!file.is_open()){
        cout << " Error opening the file" << endl;
    }


}




/*
  R 32 0.1 5500
  F 15 2.9 1200
  M 50 3.2 2930
 */