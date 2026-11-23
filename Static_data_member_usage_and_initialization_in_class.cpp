// question 2. Static data members
// Easy
// Create a class called Employee having:
// int id;
// static int companyCode;


// Requirements:
// 1. Initialize companyCode outside the class.
// 2. Create three Employee objects.
// 3. Change companyCode using the first object.
// 4. Access it using the second and third objects.
// 5. Display the value using the class name.



#include<iostream>

using namespace std;

class employee{
    public:
        int id;
        static int companyCode;
};


int employee::companyCode = 20;

int main()
{
    employee e1,e2,e3;
    e1.companyCode = 30;
    
    std::cout<<e2.companyCode<<std::endl;
    std::cout<<e3.companyCode<<std::endl;
    
    std::cout<<employee::companyCode<<std::endl;
    
    
    
}