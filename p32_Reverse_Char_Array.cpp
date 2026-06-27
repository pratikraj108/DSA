#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

void reverseString(vector<char>& s){
    int st= 0, end = s.size()-1;
    while(st<end){
        swap(s[st++], s[end--]);
    }
}
int main(){
    vector<char> s = {'H','E','L','L','O'};
    reverseString(s);
    cout << "Reverse String is : ";
    for(char c: s) cout << c;
    return 0;
}