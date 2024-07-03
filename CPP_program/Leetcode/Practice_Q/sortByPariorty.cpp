#include<iostream>
#include<vector>

using namespace std;
void sortByPriority(int Vec[],int size){
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if(Vec[left]%2==1 && Vec[right]%2 == 0){
            swap(Vec[left++],Vec[right--]);
        }
        if(Vec[left]%2==0 && Vec[right]%2 == 1){
            left++,right--;
        }
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
    sortByPriority(Vec,size);
    cout<<"Sorted Array in Even and Odd Number: ";
    for(int i = 0; i < size; i++){
        cout<<Vec[i]<<" ";
    }
    
    return 0;
}