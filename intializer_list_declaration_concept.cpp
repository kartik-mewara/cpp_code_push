// P5. What is wrong with this code, and how do you fix it?

// cpp
// class X { int a; int b;
// public:
//     X(int v) : b(v), a(b*2) {}
//     void show(){ cout<<a<<" "<<b; }
// };




#include<iostream>
using namespace std;

class x{
    
    int b;
    int a;
    public:
        x(int v):b(v),a(b*2){}
        //by below code we can solve this 
        // x(int v)
        // {
            
        //     b = v;
        //     a = b*2;
        // }
        void show(){
            cout<<a<<" "<<b;
        }
};

int main()
{
    x obj(10);
    obj.show();
}