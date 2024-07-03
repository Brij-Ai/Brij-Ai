#include<iostream>
using namespace std;
int lastAccurence(int arr[],int size,int key){
    int accurence = -1;
    for (int i = 0; i < size; i++)
    {
        if(key==arr[i]){
            accurence = i;
        }
    }
    return accurence;
}
int main(){
    int size;cout<<"enter size of array: ";cin>>size;
    int key;     //this is the search elememnt
    int arr[size];
    cout<<"elements of Array :";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];      /* code */
    }
    cout<<"Enter the search element: ";cin>>key;
    cout<<"Last accurence of the element in the Array: "<<lastAccurence(arr,size,key);
    return 0;
}