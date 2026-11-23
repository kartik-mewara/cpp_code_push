// Create a class called Employee with the following members:
// int id;
// double salary;


// Requirements:
// 1. Create two objects: e1 and e2.
// 2. Assign different IDs and salaries.
// 3. Display their details using a member function.
// 4. Change the salary of e1.
// 5. Display both objects again.




#include<iostream>
using namespace std;

class employee{
        public:
        int id;
        double salary;
        
        void display(){
            std::cout<<id<<std::endl;
            std::cout<<salary<<std::endl;
        }
};


int main()
{
    employee emp1;
    employee emp2;
    
    emp1.id = 12;
    emp2.id = 13;
    
    emp1.salary = 21000;
    emp2.salary = 22000;
    
    emp1.display();
    
    emp2.display();
    
       
    
}