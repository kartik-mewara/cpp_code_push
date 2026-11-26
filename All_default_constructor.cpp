#include<iostream>
using namespace std;

class Demo{
    public:
        Demo() = default;
        Demo(const Demo& obj) = default;
        ~Demo() = default;
        
        Demo& operator=(const Demo& obj) = default;
        
        Demo(Demo&&) = default;
        
        Demo& operator=(Demo&&) = default;
    
};

int main()
{
 Demo d;   
}