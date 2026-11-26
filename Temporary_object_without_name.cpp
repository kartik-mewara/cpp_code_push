#include<iostream>
using namespace std;

class Demo {
    int id;
public:
    Demo(int i) : id(i) { cout << "C" << id << " "; }
    ~Demo()             { cout << "D" << id << " "; }
};

int main(){ 
    Demo(1); //here this is function call but it must say undefined reference // but in reality it will create temporary unnamed object that will live till the end of semicolon 
    Demo d(2); 
    cout<<"end "; 
    
}


// output->C1 D1 C2 end D2 