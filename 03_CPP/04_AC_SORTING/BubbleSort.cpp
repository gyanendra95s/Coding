//Descending order
/*#include <bits/stdc++.h>
using namespace std;
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void bubblesort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){//u can use j<n-1(it is also correct)
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
}
printarr(arr,n);
}
int main(){
    int arr[]={5,6,3,5,7,5};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    return 0;
}*/
//Ascending Order
#include <bits/stdc++.h>
using namespace std;
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
void bubblesort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){//or j<n-1(it is also correct)
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
}
printarr(arr,n);
}
int main(){
    int arr[]={9,5,7,6,3,2};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    return 0;
}