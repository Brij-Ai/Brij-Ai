#include<iostream>
using namespace std;

void sumOfElement(int a[],int &size,int &key){
    for(int i = 0; i < size; i++){
        if(a[i] + a[i+1] == key){
            cout<<"Found at index : "<<"["<<i<<","<<i+1<<"]";
        }
    }
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
    sumOfElement(arr,size,key);
    return 0;
}