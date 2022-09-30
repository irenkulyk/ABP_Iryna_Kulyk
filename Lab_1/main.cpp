#include <iostream>

using namespace std;
int main() {
    float x, y;
    int choice;
    //cin >> choice;
    switch (choice)
    {
     case 1:
            cout << "x =" << endl;
            cin >>x;
            cout << "y=" << endl ;
            cin >>y;
            break;
        case 2:
            if (x >= -1 && x <= 1 && y >= -1 && y <= 1 && ! (x > 0 && y < 0))
                cout << "This point falls into the area";

        case 3: exit(0);
    }
    cout << "Enter x:  \n";
    cin >> x;

    cout << "Enter y:  \n";
    cin >> y;
    if (x >= -1 && x <= 1 && y >= -1 && y <= 1)
        cout << "This point falls into the area";
    else
        cout << "The point doesn't fall into the area";
    return 0;
}


