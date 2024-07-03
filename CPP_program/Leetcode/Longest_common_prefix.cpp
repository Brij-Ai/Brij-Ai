#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if (strs.empty()) return "";
       string prefix = strs[0];
       for(size_t i = 1;i<strs.size();++i){
            while(strs[i].find(prefix) != 0){
                prefix.substr(0,prefix.length()-1);
                if(prefix.empty()) return "";
            }
       }
        return prefix;
    }
};
int main(){
    vector<string>strs= {"flower","flow","flight"};
    Solution s;
    cout<<s.longestCommonPrefix(strs);
    return 0;
}