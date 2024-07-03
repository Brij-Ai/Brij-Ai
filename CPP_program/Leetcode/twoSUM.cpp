#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=n;j>=i+1;j--){
                if(nums[i]+nums[j]==target){
                    cout<<'['<<i<<j<<']'<<endl;
                }
            }
        }
    }
};
int main(){
    int n=5;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    int target = 6;
    s.twoSum(nums,6);
    return 0;
}