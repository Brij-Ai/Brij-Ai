#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;



class Solution {
public:
    bool check(int x, std::vector<int>& a, int m) {
        int placed = 1, last_pos = a[0];
        for (int i = 1; i < a.size(); i++) {
            if ((a[i] - last_pos) >= x) {
                placed++;
                last_pos = a[i]; // Update last_pos whenever a new object is placed
                if (placed == m) {
                    return true;
                }
            }
        }
        return false;
    }

    int maxDistance(std::vector<int>& a, int m) {
        std::sort(a.begin(), a.end());
        long long low = 1, high = a.back() - a.front(), mid, ans = 0;
        while (high >= low) {
            mid = (high + low) / 2;
            if (check(mid, a, m)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }    
};
int main(){
    int n;cout<<"enter size";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;cout<<"enter";
    cin>>m;
    Solution s;
    cout<<s.maxDistance(a,m);
    return 0;
}