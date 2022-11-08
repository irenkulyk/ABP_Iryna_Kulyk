#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int arraySize, counter, priorElement;

             cout << "Enter array size :" << endl;
             cin >> arraySize;
             int *arrayOne = new int(arraySize);
         srand(time(0));
         for(int i = 0; i < arraySize; i++){
             int cellValue = rand() % 101;
             *(arrayOne +i) = cellValue;


              if(cellValue >= priorElement && i != 0 ){
                  counter++;
              }
              priorElement = cellValue;
         }
         // array
         for(int i = 0; i < arraySize; i++){
             cout << *(arrayOne + i) << ' ';
         }
         cout << endl << counter;
         delete [] arrayOne;
         return 0;
}