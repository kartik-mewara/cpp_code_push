// Question 9. Object versus pointer memory
// Advanced
// Create a class:
// class Employee
// {
// public:
//     int id;
//     double salary;
// };


// Inside main():
// 1. Create an Employee object.
// 2. Create an Employee pointer pointing to it.
// 3. Access its members using ->.
// 4. Print sizeof(object).
// 5. Print sizeof(pointer).
// 6. Print sizeof(*pointer).
// Explain why these three values are not necessarily equal.

// Concept being tested: Object storage versus pointer storage.



#include<iostream>

using namespace std;

class Employee{
    public:
        int id;
        double salary;
};




int main()
{

    Employee e1;
    e1.id = 10;
    e1.salary = 30000;
    Employee* obj1 = &e1;
    std::cout<<obj1->id<<std::endl;
    std::cout<<obj1->salary<<std::endl;
    
    
    std::cout<<"size of object = "<<sizeof(e1)<<std::endl;
    std::cout<<"size of pointer = "<<sizeof(obj1)<<std::endl;
}