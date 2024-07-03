#include<iostream>
using namespace std;
 bool judgeSquareSum(int c) {
        long a,b;
        while(c>0){
             a=(c/2);
             b=c%2;
            if(a*a+b*b==c){
               
                return true;
            }
           return false;
        }
        
    }
int main(){
    int c;
    cin>>c;
    cout<<judgeSquareSum(c);
}