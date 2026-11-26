
// Then answer: what changes if you remove explicit?

#include<iostream>
using namespace std;

class Meter { 
    public: 
    explicit Meter(int v){} 
    
};
void print(Meter m)
{
    
}
int main()
{ 
    print(5); 
    
}
//output->error