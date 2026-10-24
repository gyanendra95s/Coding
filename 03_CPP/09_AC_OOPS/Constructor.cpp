/*#include<bits/stdc++.h>
using namespace std;
class car{
    string name;
    string color;
    public:
    //Constructor
    car(string namevalue,string colorvalue){
        cout<<"constructor is called.object is created...\n";
        name=namevalue;
        color=colorvalue;
    }
    void start(){
        cout<<"car has started..\n";
    }
    void stop(){
        cout<<"car has stoped..";
    }
    //getter
    string getname(){
        return name;
    }
};
int main(){
    car c1("Maruti 800","white");
    cout<<"car name:"<<c1.getname()<<endl;
    return 0;
}*/




//using this pointer
#include<bits/stdc++.h>
using namespace std;
class car{
    string name;
    string color;
    public:
    //Constructor
    //Non parameterised Constructor
    car(){
        cout<<"Non parameterised constructor\n";
    }

    //Parameterised Constructor
    car(string name,string color){//else writing namevalue and colorvalue we can write name and color also because it indicate the parameter
        cout<<"parameterised constructor\n";
        this->name=name;//this is pointing the parameterised name
        this->color=color;
    }
    void start(){
        cout<<"car has started..\n";
    }
    void stop(){
        cout<<"car has stoped..\n";
    }
    //getter
    string getname(){
        return name;
    }
};
int main(){
    car c0;
    car c1("Maruti 800","white");
    car c2("hundai","grey");
    cout<<"car name:"<<c1.getname()<<endl;
    cout<<"car name:"<<c2.getname()<<endl;
    return 0;
}