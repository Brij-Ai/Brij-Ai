//checking if suffix sum and prefix sum is equal or not equal then return true flase result
#include<iostream>
using namespace std;

bool runningSum(int arr[],int & size){
    int totalSum , prefixSum , suffixSum = 0;
    for(int i = 0; i < size ; i++){
        totalSum += arr[i+1];
    }
    for(int i = 0; i< size; i++){
        prefixSum += arr[i];
        suffixSum = totalSum - prefixSum;
        if (prefixSum == suffixSum)
        {
            return true;
        }
        
    }
    return false;

}
int main(){
    int size;cout<<"enter size of array: ";cin>>size;
    
    int arr[size];
    cout<<"elements of Array :";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];      /* code */
    }
    cout<<runningSum(arr,size);
    return 0;
}