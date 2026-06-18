// Leet : 50
// Power(x, n )
//Binary Exponentiation
#include <iostream>
using namespace std;

double myPow(double x, int n){
    // corner cases
    if (n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x==1) return 1.0;
    if(x==1 && n%2 == 0) return 1.0;
    if(x==-1 && n%2 != 0) return -1.0;

    long binForm= n;
    if(n<0){
        x= 1/x;
        binForm = -binForm;
    }
    double ans =1;
    while (binForm > 0){
        if(binForm %2 ==1 ){
            ans*=x;
        }
        x*=x;
        binForm /=2;  
    }
    return ans;
}
int main(){
    float n = 2.1000;
    double x = 3;
    cout <<myPow(n,x); 
    return 0;
}