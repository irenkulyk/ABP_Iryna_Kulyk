#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;
class O_P{
    string Spectralclass;
    string Weight;
    int Number;
    float Part;
public:
    O_P(){};

        O_P(string Spectralclass1, string Weight1, int Number1, float Part1){
           Spectralclass = Spectralclass1;
           Weight = Weight1;
           Number = Number1;
           Part =  Part1;
        }
        void operator=(const O_P &other){
            Spectralclass = other.Spectralclass;
            Weight = other.Weight;
            Number= other.Number;
            Part = other.Part;
        };
        int operator==(O_P &other){
            if(this->Number == other.Number){
                cout << "1\n";
            } else{
                cout << "0\n";
            }
        }
        O_P operator+(O_P &other){
            int temp;
            temp = this->Number+other.Number;
            cout <<temp<<endl;
        };
        void set(string sp, string wg, int nm, float pr);
        void get(string sp, string wg, int &nm, float &pr);
        void show(string sp,string wg, int nm, float pr);
        friend void head();
        friend void note();

        friend ostream &operator<<(ostream &stream, O_P &other) {
            stream << "|" << setw(25)<<left<<other.Spectralclass;
            stream << "|" << setw(16)<<left<<other.Weight<<"|"<<setw(11)<<left<<other.Number<< "|"<<setw(13)<<left<<other.Part<<"|"<<endl;
            return stream;
        };
        friend istream &operator>>(istream &stream, O_P &other){
            stream>>other.Spectralclass>>other.Weight>>other.Number>>other.Part;
            return stream;
        };
};
void O_P::set(string sp, string wg, int nm, float pr){
    Spectralclass = sp;
    Weight = wg;
    Number = nm;
    Part = pr;
}
void O_P::get(string sp, string wg, int &nm, float &pr){
    Spectralclass = sp;
    Weight = wg;
    Number = nm;
    Part = pr;
}
void O_P::show(string sp, string wg, int nm, float pr){
    cout << "|" << setw(15)<<left<<Spectralclass<< "|" << setw(16)<<left<<Weight<<"|"<<setw(11)<<left<<Number<< "|"<<setw(13)<<left<<Part<<"|"<<endl;
}
void head() {
    cout << " -----------------------------------------------------------------------------\n ";
    cout << "|  Approximate number of stars of different spectral classes in Galaxy      |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|      Spectral class      |    Weight        |    Number   |    Part       |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
}
void note(){
    cout << " ----------------------------------------------------------------------------\n ";
    cout << "|               Note: data not shown for classes: B, A, G, K                |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
}
int main(){
    string m;
    int nm;
    float p;
    O_P op1;
    cout << ". Enter: Brand, Year of manufacture, Color \n";
    cin >> op1;
    head();
    cout << op1;
    note();
    return 0;
}
/*
  M 50 3 2930
  F 15 2 1200
  R 37 4 5138
 */