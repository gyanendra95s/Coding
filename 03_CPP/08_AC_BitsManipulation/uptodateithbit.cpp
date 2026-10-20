#include<bits/stdc++.h>
using namespace std;
int updateithbit(int nums,int i){
    int masks=1<<i;
    return ((masks^nums));//XOR Operator
}
int main(){
    cout<<updateithbit(7,2)<<endl;
    cout<<updateithbit(7,3)<<endl;
    return 0;
}