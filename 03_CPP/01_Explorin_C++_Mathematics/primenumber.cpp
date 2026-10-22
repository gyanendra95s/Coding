/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int fact=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            fact++;
        }
    }
    if(fact==2){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}*/
//OR
#include<iostream>
using namespace std;
bool fn(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int ans=fn(n);
   // cout<<ans;
   if(ans){
    cout<<"Prime";
   }
   else{
    cout<<"Not Prime";
   }
    return 0;
}                           