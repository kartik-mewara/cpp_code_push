// Question 8. Automatic, static and global storage
// Advanced
// Write a program containing:
// - A global variable.
// - A normal local variable inside a function.
// - A static local variable inside the same function.
// Call that function three times.

// Increment all three variables during every call.

// Display their values after each call.

// Concept being tested: Storage duration and variable lifetime.


#include<iostream>

using namespace std;

int gloabl_variable=10;
// int st_local_variable = 30;

void incement(){
    
    int local_variable=10;
    static int st_local_variable=30;
    
    local_variable++;
    st_local_variable++;
    gloabl_variable++;
    
    std::cout<<"local varible = "<<local_variable<<std::endl;
    std::cout<<"static variable = "<<st_local_variable<<std::endl;
    std::cout<<"global variable = "<<gloabl_variable<<std::endl;
    
}



int main()
{
 incement();
 incement();
 incement();
 
 
 cout<<sizeof(incement)<<endl;
}