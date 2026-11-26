#include<iostream>
using namespace std;

class Config { 
    const int id; 
    public: 
    Config(int v): id(v)
    { 
        // id = v; 
    } 
    
};
int main(){ 
    Config c(1); 
}