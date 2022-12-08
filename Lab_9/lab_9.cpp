#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

string path = "lab9";
fstream fout;
bool mycomp_9(string a, string b){
    return a<b;
}
vector <string> alphabaticallySort_main(vector<string> a) {
    sort(a.begin(),a.end(), mycomp_9);
    return a;
}
vector <string> Spectralclass_main;
void insize(){
    int size;
    cout << "Enter the number of rows: \t";
    cin >> size;

}
void initf(string s){
    fout.open(s, ios_base::in | ios_base::out | ios_base::trunc);
}
void commit(){
    fout.close();
}
void initff(string s){
    fout.open(s, ios_base::in | ios_base::out);
}
void f_add(){
    string Spectralclass;
    string Weight;
    string Number;
    string Part;
    cout << ". Enter: Spectralclass, Weight, Number, Part";
    cin >> Spectralclass; Spectralclass_main.push_back(Spectralclass);
    fout << Spectralclass << '\n';
    cin >> Weight;
    fout << Weight << '\n';
    cin >> Number;
    fout << Number << '\n';
    cin >> Part;
    fout << Part << '\n';
}
void f_add_all(int size_main){
    for (int i = 0; i < size_main; i++){
        f_add();
    }

}
void fdel_item(){
    string cache;
    for(int del = 0; del < 5; del++){
        getline(fout, cache,'\n');
    }
}
void f_show(int i, int size_main){
    initff(path);
    string Spectralclass;
    string Weight;
    string Number;
    string Part;
    for(int j = 1; j < 1; j++){
        fdel_item();
    }
    getline(fout,Spectralclass,'\n');
    getline(fout,Weight,'\n');
    getline(fout,Number,'\n');
    getline(fout,Part,'\n');
    Spectralclass.resize(25);
    Weight.resize(16);
    cout << "| " << Spectralclass << " | " << Weight << " | \t\t " << setw(11) << Number << " | " << setw(13) << Part << " | \n";
    for (int j = i; j <= size_main; j++){
        fdel_item();
    }
    commit();
}
void fshow_all(int size_main){
    cout << " -----------------------------------------------------------------------------\n ";
    cout << "|  Approximate number of stars of different spectral classes in Galaxy      |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|      Spectral class      |    Weight        |     Part    |     Number    |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
 for(int j = 1; j <= size_main; j++){
     f_show(j, size_main);
 }
    cout << " ----------------------------------------------------------------------------\n ";
    cout << "|               Note: data not shown for classes: B, A, G, K                |\n ";
    cout << "-----------------------------------------------------------------------------\n ";

}
void algorithm(int size_main) {
    string Spectralclass[size_main];
    string Weight[size_main];
    string Number[size_main];
    string Part[size_main];
    string Spectralclass_D[size_main];
    string Weight_D[size_main];
    string Number_D[size_main];
    string Part_D[size_main];
    for (int i = 0; i < size_main; i++) {
        initff(path);
        for (j = 0; j < size_main; j++) {
            getline(fout, Spectralclass[j], '\n');
            getline(fout, Weight[j], '\n');
            getline(fout, Number[j], '\n');
            getline(fout, Part[j], '\n');
            if (Spectralclass_main[i] == Spectralclass_main[j]) {
                Spectralclass[i] = Spectralclass[j];
                Weight[i] = Weight[j];
                Number[i] = Weight[j];
                Part[i] = Part[j];
            }
        }
        commit();
    }
    initf(path);
    for (int j = 0; j < size_main; j++) {
        fout << Spectralclass_D << '\n';
        fout << Weight_D << '\n';
        fout << Number_D << '\n';
        fout << Part_D << '\n';

    }
    commit();
}
int main(){
    int size =  insize();
    initf(path);
    commit();
    Spectralclass_main = alphabaticallySort_main(Spectralclass_main);
    algorithm(size);
    commit();
    fshow_all(size);
}



/*
  R 32 0.1 5500
  F 15 2.9 1200
  M 50 3.2 2930
 */