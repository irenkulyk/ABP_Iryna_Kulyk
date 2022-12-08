#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstring>
using namespace std;
class lin{
private:
    char brand[15];
    int year;
    char color[15];
public:
    void set(char brand[15], int year, char color[15]){
        strcpy(this->brand, brand);
        this->year=year;
        strcpy(this->color, color);
    }
    void get_rec (char b[15], int y,char c[15]){
        strcpy(b, brand);
        y=year;
        strcpy(c, color);
    }
    void show(){
        cout << "|"<< setw(15) << brand << "|" << setw(28) << year << "|" << setw(14)<< color << "|\n";

    }
};
int main(){
    char b[14];
    char c[15];


    int y;
    int n;
    cout << "Lines:";
    cin >> n;
    lin wee[n];
    for (int i = 0; i < n; i++) {
        cout << ". Brand of the car:\t";
        cin >> b;
        cout << ".Year of manufacture:\t";
        cin >> y;
        cout << ".Color:\t";
        cin >> c;
        wee[i].set(b, y, c);
    }
        cout << endl;
        cout << " ----------------------------------------------------------\n ";
        cout << "|                      Car Packages                       |\n ";
        cout << "-----------------------------------------------------------\n ";
        cout << "|    Brand     |    Year of manufacture     |    Color    |\n ";
        cout << "-----------------------------------------------------------\n ";
    for(int i = 0; i < n; i++){
        wee[i].get_rec(b, y, c);
        wee[i].show();
    }
    cout << " ----------------------------------------------------------\n ";
    cout << "| Note: You can call in our office for detail information |\n ";
    cout << "----------------------------------------------------------\n ";
}
