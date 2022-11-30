#include <iostream>
#include <iomanip>
#include <algorithm>


using namespace std;
 struck Srat1 {
     long int Number;
     double Weight;
     double Part;
     char Class;
     bool operator <(const Star1 & other) const {
         return Class < other.Class;
     }

 };
 struct Stack {
     Star1 star;
     Stack *next;
 };
 Stack *elem ,*stack;
 void cinStack(Stack *stack);
 void coutArray(Star1* array, int *size);
 void StackToArray(Stack *stack, Star1* array, int* size);

 int main(){
     SetConcoleOutCP(CP_UTF8);//
     stack = NULL;
     Star1 starArray [10];
     int sizeValue = 0;
     int *size = &sizeValue;

     cinStack(stack);
     StackToArray(stack, starArray, size);
     coutArray(starArray, size);
     return 0;
 }
void cinStack(Stack *stack) {
    string answer = "";
    do {
        char Class;
        double Weight, Part;
        long long int Number;

        elem = new(Stack);
        elem->next = stack;
        stack = elem;

        cout << "Enter: Class, Weight, Part, Number " << endl;
        cin >> Class >> Weight >> Part >> Number;
        cout << "One more?(+/-)" << endl;

        Star1 currentStar;
        currentStar.Class = Class;
        currentStar.Weight = Weight;
        currentStar.Part = Part;
        currentStar.Number = Number;

        elem->star = currentStar;

        cin >> answer;
    } while (answer == "+");


    Star1 currentStar = array[i];

    cout << "|" << setw(5) << left << currentStar.Class << "|" << setw(14) << left << currentStar.Weight << "   |"
         << setw(7) << left << currentStar.Part << "   |"
    setw(9) << left << currentStar.Number << "|"
    setw(6) << endl;
}
cout << "-----------------------------------------------------------------------------\n ";
}
void StrackToArray(Strack* stack, Star1* array, int* size) {
    int i = 0;
    do{
        Star1 currentStar = elem->star;
        array[i] = currentStar;
        i++;
        stack = elem->next;
        elem = stack;
        *size = i;
    }while (stack != NUll);
}