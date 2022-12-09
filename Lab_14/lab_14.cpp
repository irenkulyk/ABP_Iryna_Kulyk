#include <iostream>
using namespace std;
class Abstract{
public:
    Abstract(){}
    Abstract(const Abstract &f){}
    Abstract(int a, int b){}
    Abstract(int a){}
    virtual void show()=0;
    virtual void search(int a)=0;
};
class Array:Abstract{
private:
    int **arr;
    int s_column,s_line;
public:
    Array(){
        s_column = 3;
        s_line = 3;
        arr = new int *[s_column];
        for(int i = 0; i < s_column; i++){
            arr[i]= new int[s_line];
        }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                arr[i][j] = rand()%10;
            }
        }
    }
    Array(int siz){
        s_column = siz;
        s_line = siz;
        arr = new int *[s_column];
        for (int i = 0; i < s_column; i++){
            arr[i] = new int[s_line];
        }
        for (int i = 0; i < s_column; i++){
            for( int j = 0; j < s_line; j++){
                arr[i][j] = rand()%10;
            }
        }
    }
    Array(int line, int column){
        for (int i = 0; i < s_column; i++)
            delete[] arr[i];
            delete[] arr;
            s_column = column;
            s_line = line;
            arr = new int *[s_column];
            for(int i = 0; i < s_column; i++){
            arr[i] = new int[s_line];
        }
        for(int i = 0; i < s_column; i++){
            for(int j = 0; j < s_line; j++){
                arr[i][j] = rand()%10;
            }
        }
        }
    ~Array() {
        for (int i = 0; i < s_column; i++)
            delete[] arr[i];
        delete[] arr;
    }

        void show()override{
            for(int i = 0; i < s_column; i++){
                for (int j = 0; j < 3; j++){
                    cout <<arr[i][j]<<"\t";
                    }
                }
            }
            void search(int b)override{
        bool a = false;
        for(int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
              if(arr[i][j] == b){
                  a = true;
              }
        }
    }
            if(a){
                cout << "Which number";
            }
            else{
                cout << "There is no";
            }
        }
        void clear(){
            for (int i= 0; i < s_column; i++)
                delete[] arr[i];
                delete[] arr;
        }
    };
int main(){
 cout <<   "default mas:";
 Array mas;
 mas.show();
 mas.clear();
 int a;
 cout << "Input size mas:\n";
 cin >>a;
 Array ar(a);
 ar.show();
 cout << "Input search number\n";
cin >> a;
ar.search(a);
}

