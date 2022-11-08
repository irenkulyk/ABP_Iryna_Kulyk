#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    int arraySize;

    cout << "Enter array size :" << endl;
    cin >> arraySize;
    int *arrayOne = new int(arraySize);
    int s[9][9];
    int size[81];
    srand(time(0));
    int  i, j, n = 9, m = 9;
    cout << "\n";
    for (i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            s[i][j] = rand() % 50;
    for (i = 0; i < n; i++){
        for(j = 0; j< n; j++)
            cout << s[i][j] << " ";
        cout << "\n";
    }
    for (i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i != j){
                s[i][j] = s[j][i];
            }
            cout << setw(5) << s[i][j];
        }
        cout << endl;
    }
    return 0;
}

