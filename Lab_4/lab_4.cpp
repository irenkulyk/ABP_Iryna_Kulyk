#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int a[9][9], b[9][9], i, j, n = 9, m = 9;
    cout << "\n";
    for (i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            a[i][j] = rand() % 10;
    for (i = 0; i < n; i++){
        for(j = 0; j< n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    for (i = 0; i < n; i++)
        for(j =0; j< m; j++)
            b[i][j] = a[i][j];
    cout << "\n";
    for (i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            cout <<b[i][j] << " ";
        cout << "\n";

return 0;
}