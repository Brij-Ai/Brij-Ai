#include<iostream>
using namespace std;
int mostOccurence(int arr[],int size,int ele){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==ele){
            count++;
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
    int key;cout<<"enter Occurence element: ";cin>>key;
    cout<<"Most occurence in the Array :"<<mostOccurence(arr,size,key);
    return 0;
}