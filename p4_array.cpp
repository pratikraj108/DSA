#include <iostream>
using namespace std;

int main(){
    int size= 5;
    int marks[size];

    cout <<"please enter 5 marks:" ;
    for (int i=0;i<size;i++){
        cin >> marks[i];
    }

    for(int i=0; i< size ; i++){
        cout << marks[i]<<" ";
    }
    // double price[] = {98.99,87.4,65.9}; //3
    return 0;
}