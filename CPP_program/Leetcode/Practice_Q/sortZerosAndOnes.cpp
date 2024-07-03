#include<iostream>
using namespace std;

void sortZerosAndOnes(int arr[],int size){
    int countZeros = 0;
    for(int i = 0; i < size ; i++){
        if(arr[i]==0){
            countZeros++;
        }
        {
            if(i , countZeros){
                arr[i]=0;
            }
            else{
                arr[i] = 1;
            }
        }
    }

}

int main(){

    int size ;
    cout<<"Enter the size Array: ";cin>>size;
    int arr[size];
    cout<<"Enter Element:";
    for(int i = 0;i<size; i++){
        cin>>arr[i];
    }
    sortZerosAndOnes(arr,size);
    cout<<"Array in Zero And ONEs";
    for(int i = 0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}