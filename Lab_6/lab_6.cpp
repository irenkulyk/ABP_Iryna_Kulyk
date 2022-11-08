#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int x[9][9], i, j, n = 9, m = 9;
    cout << "\n";
    for (i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            x[i][j] = rand() % 50;
    for (i = 0; i < n; i++){
        for(j = 0; j< n; j++)
            cout << x[i][j] << " ";
        cout << "\n";
    }
    for (i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i != j){
                x[i][j] = x[j][i];
            }
            cout << setw(5) << x[i][j];
        }
        cout << endl;
    }
    return 0;
}

