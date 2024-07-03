#include<iostream>
using namespace std;
 bool isPalindrome(int x) {
        int org=x;
        long reverse = 0;
        if (x<0) return false;
        while(x!=0){
           long digit = x%10;
            reverse = reverse*10 + digit;
            x/=10;
        }
    return reverse==org;
 }
int main(){
    int x;cout<<"enter NUMBER :";
    cin>>x;
    if(true ==isPalindrome(x)){
         cout<<"number is palindrme"<<endl;
    }else{
       cout<<"number is palindrme"<<endl; 
    }
   
   return 0; 
}