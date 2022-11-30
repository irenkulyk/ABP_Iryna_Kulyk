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

    for (i = 0; i < n; i++){
        for(j = 0; j < m; j++)
            cout <<b[i][j] << " ";
        cout << "\n";
    }
    void masSum(int array[9][9], int mas[9]) {
    int Sum;
        for (int i = 0; i < n; i++) {		// зовнішній цикл по рядкам
            Sum = 0;
            for (int j = 0; j < m; j++) {	// внутрішній цикл по стовпцям
                Sum += a[i][j];			// шукаємо суму елементів рядка
            }
            mas [i] = Sum;					// додаємо в одновимірний масив суму відповідного рядка
            cout << mas[i] << " ";
        }
    }
    return 0;
}






