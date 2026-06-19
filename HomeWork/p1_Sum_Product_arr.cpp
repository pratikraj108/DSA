#include <iostream>
using namespace std;

int SumProduct(int arr[],int sz){
    int sum=0;
    int product= 1;
    for(int i=0; i<sz; i++){
        sum =sum+ arr[i];
        product = product* arr[i];
    }
    cout <<"sum is:"<<sum<<endl;
    cout <<"product is:"<<product<<endl;
}

int main(){
    int arr[]= {1,2,3,4,5};
    int sz= 5;
    SumProduct(arr,sz);
    return 0;
}