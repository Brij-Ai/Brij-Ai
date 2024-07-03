#include<iostream>
using namespace std;
void Marge(int arr[],int l,int mid,int r){
    int an = mid -l+1;
    int bn = r-mid;
    int a[an],b[bn];
    for(int i=0;i<=an;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<=an;i++){
        b[i]=arr[mid+l+i];   
    }
    int i=0,j=0;
    int k=l;
    while(i<an && j<an){
        if(a[i]<b[j]){
            arr[k++] = a[j++];
        }else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(i<bn){
        arr[k++]=b[j++];
    }
}
 
 void Marge_sort(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    int mid = (l+r)/2;
    Marge_sort(arr,l,mid);
    Marge_sort(arr,mid+1,r);
    Marge(arr,l,mid,r);
}
int main(){
    int n;cout<<"Enter size of element: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];   
    }
    Marge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";   
    }cout<<endl;
    return 0;
}