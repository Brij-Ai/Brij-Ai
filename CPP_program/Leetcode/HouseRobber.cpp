#include<iostream>
#include<vector>
using namespace std;
//House robber problem of leetcode problem Number 158
class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0;
        int norob = 0;
        for (int i = 0; i < nums.size(); i++) {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
    }
};

int main(){
    int n;
    cout<<"Enter:House Number: "<<endl;cin>>n;
    vector<int>arr(n);
    cout<<"ENTER MONEY of each HOUSE:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Solution s;
    cout<<"Toatal money Robbed by Robbber :"<<s.rob(arr);
    return 0;
}