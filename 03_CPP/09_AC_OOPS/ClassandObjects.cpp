#include<bits/stdc++.h>
using namespace std;
class student{
    string name;
    int age;
    float cgpa;
    void getpercentage(){
        cout<<(cgpa*10)<<endl;
    }
};
int main(){
    student s1;
    cout<<sizeof(s1);
    return 0;
}