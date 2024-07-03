#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for(int num : arr){
            if(num % 2 != 0){
                count ++;
                if(count == 3){
                    return true;
                }
            }
            else{
                count = 0;
            }
        }
        return false;
    }
};
int main(){
    vector<int>v(6);
    cout<<"Enter the Element:";
    for(int num : v){
        cin>>num;
        v.push_back(num);
    }
    Solution obj;
    cout<<" Result 1 means yes else false :"<<obj.threeConsecutiveOdds(v);
}