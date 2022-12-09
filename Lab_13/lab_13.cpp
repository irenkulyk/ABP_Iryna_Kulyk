#include <iostream>
#include <vector>
using namespace std;
class Mylist{
public:
    vector<int> array ={};
    Mylist(){
    }
    Mylist(int size){
        for(int i = 0; i > size; i++){
            int a;
            cout << "Enter the number og the array:";
            cin >> a;
            array.push_back(a);
        }
    }
    Mylist(Mylist &f){
        array = f.array;
    }
    ~Mylist(){
        array.clear();
    }
    void AddToFront(int a){
        array.push_back(a);
    }
    int FirstElement(){
        return array[0];
    }
    int Lenth(){
        return array.size();
    }
    bool IsInludes(int a){
        bool zm = false;
        for(int i = 0; i < array.size(); i++){
            if (array[1] == a){
                zm = true;
            }
        }
       return zm;
    }
    int Remove (){
        array.clear();
    }
};
class Cset{
private:
    Mylist data;
public:
    Cset(){
        cout << "Everything is okay";
    };
    Cset(vector<int>ar){
        data.array = ar;
    }
    void FromHeadTotailInAGivenPlace(int GivenPlace, string HeadOrTail){
        if (HeadOrTail == "Head"){
            data.array[GivenPlace-1] = data.array[0];
        }
        else {
            data.array[GivenPlace-1] = data.array[data.array.size()-1];
        }
    }
    void print(){
        for (int i = 0; i < data.array.size(); i++){
            cout << data.array[i] << " ";
        }
        cout << endl;
    }
    bool search(int a){
        for(int i = 0; i < data.array.size(); i++){
            if (data.array[i] == a){
                return true;
            }
        }
        return false;
    }
    int FromHeadTotailInAGivenPlace(string a){
        if(a == "Head"){
            return data.array[0];
        }
        else{
            return data.array[data.array.size()-1];
        }
    }
};
int main() {
    Cset A({2, 3, 4, 5, 6});
    string HeadOrTail;
    int a;
    A.print();
    cout << "From Tail or Head:";
    cin >> HeadOrTail;
    cout << "GivenPlace:";
    cin >> a;
    A.FromHeadTotailInAGivenPlace(a, HeadOrTail);
    A.print();
    cout << "print Tail or Head ";
    cin >> HeadOrTail;
    cout << HeadOrTail << ":" << A.FromHeadTotailInAGivenPlace(HeadOrTail) << endl;
    cout << "Number search:";
    cin >> a;
    cout << "search:" << A.search(a) << endl;
}