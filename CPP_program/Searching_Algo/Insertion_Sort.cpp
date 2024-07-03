#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &v){
    int n = v.size();
    for(int i=1;i<n;i++){
        int curt_ele = v[i];
        int j = i-1;
        while(j>=0 && v[j]>curt_ele){
            v[j+1]==v[j];
            j--;
        }
        v[j+1]=curt_ele;
    }
}
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of Ele:";cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];  
    }
    insertionSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";   
    }
    return 0;
}