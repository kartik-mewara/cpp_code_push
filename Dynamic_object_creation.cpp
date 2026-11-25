// Question 10. Dynamic object creation
// Interview-level
// Create an Employee object dynamically.

// Requirements:
// 1. Allocate it using new.
// 2. Set its data members through a pointer.
// 3. Access its members using ->.
// 4. Display the data.
// 5. Release the allocated object using delete.
// 6. Set the pointer to nullptr.
// 7. Verify that the pointer is null.
// Also explain the difference between the lifetime of the pointer and the lifetime of the dynamically allocated object.

// Concept being tested: Dynamic storage duration and pointer ownership.






#include<iostream>

using namespace std;


class Employee{
    public:
        int data;
        
    
};

int main()
{
    Employee* obj = new Employee();
    
    obj->data = 20;
    std::cout<<"data = "<<obj->data<<std::endl;
    
    delete obj;
    obj = nullptr;
    
    if(obj==nullptr)
    {
        cout<<"Object is null"<<endl;
    }
    
}