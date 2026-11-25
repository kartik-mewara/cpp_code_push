// Question 7. Member functions and multiple objects
// Medium
// Create a class called Calculator.

// Include:
// int value;


// And these member functions:
// void increment();
// void decrement();
// void display();


// Requirements:
// 1. Create five objects.
// 2. Assign different initial values.
// 3. Call the same member function on all five objects.
// 4. Demonstrate that each object's data changes independently.
// 5. Explain whether five separate copies of the member function's machine code are required.
// Concept being tested: Object state versus member function implementation.

//only one copy is required for the function 




#include<iostream>
using namespace std;
class calculator{
        
    public:
        int value;
        
        void increment(){
            value++;
        }
        
        void decrement(){
            value--;
        }
        
        void display(){
            std::cout<<value<<std::endl;
        }
};


int main()
{
    calculator e1,e2,e3,e4,e5;
    
    e1.value = 10;
    e2.value = 20;
    e3.value = 30;
    e4.value = 40;
    e5.value = 50;
    
    e1.increment();
    e2.increment();
    e3.increment();
    e4.increment();
    
    e5.increment();
    e5.increment();
    e5.increment();
    
    e5.decrement();
    
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
    
    
    
}