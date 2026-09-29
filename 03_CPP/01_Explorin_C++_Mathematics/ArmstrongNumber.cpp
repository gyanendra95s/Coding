#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     int temp=n;
     int cnt=0;
     int last;
     while(n!=0){
        last=n%10;
        n=n/10;
        cnt++;
     }
     n=temp;
     int sum=0;
     while(n!=0){
        last=n%10;
        n=n/10;
        int prod=1;
        for(int i=1;i<=cnt;i++){
            prod=prod*last;
        }
        sum=sum+prod;
     }
     if(sum==temp){
        cout<<"Armstrong";
     }
     else{
        cout<<"not";
     }
     
    return 0;
}