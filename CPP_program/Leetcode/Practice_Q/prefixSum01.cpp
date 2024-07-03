#include<iostream>
using namespace std;
void prefixsum_01(int arr[],int &size){
    
    for(int i = 1; i < size; i++){
        arr[i] += arr[i-1];
    }
}
int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int Vec[size];
    cout<<"Enter element: ";
    for(int i = 0; i < size; i++){
        cin>>Vec[i];
    }
    prefixsum_01(Vec,size);
    cout<<"Prefix is of All numbers in array";
    for(int i = 0; i < size; i++){
        cout<<Vec[i]<<" ";
    }

    return 0; 
}