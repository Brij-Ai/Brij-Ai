#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    int idx = -1;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            idx = i;
        }
    }

     return idx;
    
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
    cout<<"element found at this index: "<<linearSearch(arr,size,key);
    return 0;
}