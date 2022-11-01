#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    srand( time(0) );
    int arr[100];
    int b[100];
    int k = -1;
    for(int i = 0; i < 100; i++)
        arr[i] = rand() % 100 - 50;
    for(int i = 0; i < 100; i++)
        cout << arr[i] << " ";
    cout << "\n\n";
    for (int i = 0; i < 100; i++){
        if (arr[i] < 0) {
            if (k != -1){
                for (int j = k; j >= 0; j--)
                    cout << b[j] << " ";
            }
            k = -1;
            cout << arr[i] << " ";
        }
        else {
            k++;
            b[k] = arr[i];
        }
    }
    return 0;
}