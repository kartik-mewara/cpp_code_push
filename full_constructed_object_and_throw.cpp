



#include<iostream>
using namespace std;

class Part{
    public:
        Part(){cout<<"Part"<<endl;}
        ~Part(){cout<<"~Part"<<endl;}
};

class Machine{
    Part P;
    public:
        Machine(){
            cout<<"Machine"<<endl;
            throw 1;
        }
        
        ~Machine(){
            cout<<"~Machine"<<endl;
        }
        
};


int main()
{
    try{
        Machine M;
    }
    catch(int){
        cout<<"Cought"<<endl;
    }
}

// output->
// Part
// Machine
// ~Part
// Cought