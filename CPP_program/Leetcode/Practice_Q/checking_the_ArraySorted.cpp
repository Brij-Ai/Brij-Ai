#include<iostream>
using namespace std;
// checking the array is sorted or not
bool checkSortedArray(int arr[],int &size){
    bool flag = false;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>arr[i-1]){
            flag = true;
        }
    }
    return flag;
}
int main(){
    int size;cout<<"enter size of array: ";cin>>size;
    
    int arr[size];
    cout<<"elements of Array :";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];      /* code */
    }
    cout<<"array is if 1 then array is sorted either not sorted:"<<checkSortedArray(arr,size);
    return 0;
}