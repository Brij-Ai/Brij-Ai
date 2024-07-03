#include<iostream>
#include<math.h>
using namespace std;
void sortedInSquaredArray(int array[],int size){
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if(abs(array[left]) < abs(array[right])){
            powf(array[right--],2);
        }
        else{
            powf(array[left++],2);
        }
    }
    
}
int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int array[size];
    cout<<"Enter element: ";
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }
    sortedInSquaredArray(array,size);
    cout<<"Sorted Array in Even and Odd Number: ";
    for(int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}