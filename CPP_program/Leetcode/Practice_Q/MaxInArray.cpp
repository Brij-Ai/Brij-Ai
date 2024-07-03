#include<iostream>
using namespace std;

int maximumInArray(int arr[],int size){
    int max = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;cout<<"Enter size of array :";cin>>n;
    int arr[n];
    cout<<"Enter array element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Max is :"<<maximumInArray(arr,n);

    return 0;
}