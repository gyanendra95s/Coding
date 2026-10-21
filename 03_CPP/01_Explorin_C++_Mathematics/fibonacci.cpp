#include<bits/stdc++.h>
using namespace std;
void bintodec(int binnum){
    int n=binnum;
    int decnum=0;
    int pow=1;
    while(n){
        int last=n%10;
        decnum+=last*pow;
        pow*=2;
        n=n/10;
    }
    cout<<decnum<<endl;
}
int main(){
    bintodec(101);
    return 0;
}