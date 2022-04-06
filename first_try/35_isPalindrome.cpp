#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0){
         return false;
     }else if(x<10){
         return true;
     }else{
       int size=log10(x)+1;//位数
       int str[size];
       for(int i=0;i<size;i++){
           str[i]=x%10;
           cout<<str[i]<<endl;
           x=x/10;
           } 
        for(int i=0;i<=size/2;i++){
           if(str[i]!=str[size-i-1]){
               return false;
           }
       }
       return true;
     }
    }
    };
int main (){
    int x=123021;
    Solution pali;
    bool ans=pali.isPalindrome(23321);
     if(ans=false){
            cout<<"not a Palindrome"<<endl;
               return false;
           }else{
        cout<<"Palindrome"<<endl;
       }
}