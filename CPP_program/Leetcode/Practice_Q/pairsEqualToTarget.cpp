#include<iostream>
using namespace std;
int equalsPairToTarget(int arr[],int size,int key){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for(int m = i+1;m<size;m++){
            if(arr[i] + arr[m] == key){
            count++;
            }
       }
    }

    return count;
    
}
int main(){
    int size;cout<<"enter size of Array: ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int key;cout<<"enter search element: ";cin>>key;
    cout<<"Num of pairs present in the array is equals to Target: "<<equalsPairToTarget(arr,size,key);
    return 0;
}