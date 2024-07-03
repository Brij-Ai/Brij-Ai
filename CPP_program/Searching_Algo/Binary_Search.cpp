#include<iostream>
using namespace std;

int binarySearch(int arr[], int size,int key){
    int start = 0;
    int end = size -1;
    int mid = (start + end)/2;

    while (start <= end)
    {
       if(arr[mid]==key){
        return mid;
       }
       if (key> arr[mid])
       {
        start = mid+1;
       }
       else{
        end = mid-1;
       }
       
    mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int size ; cout<<"Enter Size:";
    cin>>size;

    int arr[size];
    cout<<"Enter ELe";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;cout<<"Enter search element: ";
    cin>>key;
    cout<<binarySearch(arr,size,key);
    return 0;
}