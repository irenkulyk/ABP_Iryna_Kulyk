#include <iostream>
#include <iomanip>
#include <string.h>
#include <algorithm>


using namespace std;
typedef struct{
   char Part[5];
   char Weight[4];
   int Number;
   float Spectralclass;
}DATA;
typedef struct tag_obj{
    DATA d;
    struct tag_obj* next;
}OBJ;
tag_obj* top = NULL;
tag_obj* push(DATA d){
    OBJ* ptr = new OBJ;
    ptr->d = d;
    ptr->next = top;
    top = ptr;
    return ptr;
}
void pop() {
    if (top != NULL) {
        OBJ *ptr = top->next;
        cout << "Delete is " << top->d.Part<< endl;
        delete top;
        top = ptr;
    }
}
void show(){
    OBJ* a = top;
    cout << " -----------------------------------------------------------------------------\n ";
    cout << "|  Approximate number of stars of different spectral classes in Galaxy      |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    cout << "|      Spectral class      |    Weight        |     Part    |     Number    |\n ";
    cout << "-----------------------------------------------------------------------------\n ";
    while (a!= NULL){
        cout << "|"<<setw(25)<<left<<a->d.Spectralclass<<"|"<<setw(16)<<left<<a->d.Weight<<setw(11)<<left<<a->d.Part<<setw(13)<<left<<a->d.Number<<"|"<< endl;
        cout << endl;
        a = a->next;
    }
    cout << " ----------------------------------------------------------------------------\n ";
    cout << "|               Note: data not shown for classes: B, A, G, K                |\n ";
    cout << "-----------------------------------------------------------------------------\n ";

}
int main() {
    DATA a;
    for (int i = 0; i < 2; i++) {
    cout << i + 1 << ".Enter: Spectral class, Weight, Part, Number \n";
    cin >> a.Spectralclass >> a.Weight >> a.Number >> a.Part;
    push(a);
    }
show ();
}
/*
  R 32 0.1 5500
  F 15 2.9 1200
  M 50 3.2 2930
 */