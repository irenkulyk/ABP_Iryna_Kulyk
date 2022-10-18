
#include <iostream>
#include <cmath>
using namespace std;

int lab_2_1() {

    long i;
    double sum = 0;
    const double eps = 0.000001;
    while(true) {
        double a = pow(-1, i) * ((1 + 3 * i) / pow(3, i));
        if (abs(a) < eps && a != 0){
            cout << " The total sum of the series is: " << sum << endl;
            break;
        }
        sum = sum + a;
        if (i == 9) {
            cout << " The sum of 10 numbers of the series is " << sum << endl;
        }
        i+=1;
    }
    return 0;
}