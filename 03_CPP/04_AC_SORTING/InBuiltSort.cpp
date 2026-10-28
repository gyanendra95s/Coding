#include<bits/stdc++.h>
using namespace std;
//DESCENDING ORDER
void descendingorder(int *arr,int n){
    sort(arr,arr+n,greater<int>());//👍
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//ASCENDING ORDER
void ascendingorder(int *arr,int n){
    sort(arr,arr+n);//👍
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
     int n=sizeof(arr)/sizeof(int);
    ascendingorder(arr,n);
    descendingorder(arr,n);
    return 0;
}
