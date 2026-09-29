#include<bits/stdc++.h>
using namespace std;
//single level inheritance
class animals{
    public:
    string color;
    void eat(){
        cout<<"eats\n";
    }
    void breathe(){
        cout<<"breathe\n";
    }
};
class fish : public animals{
    public:
    int fins;
    void swim(){
        cout<<"swim\n";
    }
};
int main(){
    fish f1;
    f1.fins=5;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.breathe();
    f1.eat();
    return 0;
}