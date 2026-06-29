#include<iostream>
#include<vector>
#include<string>
using namespace std;
// only for a atring ( easy )
bool isPalindrome(string s){
    int st = 0, end = s.length()-1;
    while(st<end){
        if(s[st++] != s[end--]){
            return false;
        }
    }
    return true;
}

int main(){
    string s = "madam";
    cout<< isPalindrome(s);
    return 0;
}