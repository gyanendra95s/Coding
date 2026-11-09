//multilevel inheritance
#include<bits/stdc++.h>
using namespace std;
class animals{
    public:
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathes\n";
    }
};
class mammals : public animals{
    public:
    void warms(){
        cout<<"warms\n";
    }
};
class dog : public mammals{
    public:
    void tailwag(){
        cout<<"A dog wags its tail\n";
    }
};
int main(){
    dog d1;
    d1.eat();
    d1.breathe();
    d1.warms();
    return 0;
}