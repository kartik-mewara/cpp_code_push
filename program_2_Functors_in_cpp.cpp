#include<iostream>


//functors are object to function or in class we overload () operator so when we call object it looks like function call and it saves data also for perticualar instance 

class add
{
    public:
        int inc;

        add(int n) : inc(n){}
        int operator()(int x) const { return x + inc; }        
};

int main(){
    add add5(5);
    std::cout<<add5(10)<<std::endl;

}