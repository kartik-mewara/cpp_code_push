// Question 5. Structure padding and alignment
// Advanced
// Create two classes:
// class A
// {
//     char a;
//     int b;
//     double c;
// };

// class B
// {
//     double c;
//     int b;
//     char a;
// };


// Write a program that displays:
// sizeof(A)
// sizeof(B)

// alignof(A)
// alignof(B)


// Also use:
// offsetof(A, a)
// offsetof(A, b)
// offsetof(A, c)


// Repeat for B.

// Requirements:
// - Explain why the sizes might differ.
// - Identify where padding is inserted.
// - Try different member orders.
// - Explain why the exact layout is platform-dependent.
// Use <cstddef> for offsetof.

// Concept being tested: Memory layout, padding and alignment.





#include<iostream>
#include<cstddef>
using namespace std;

class A{
  public:
    char a; //1
    int b;  //4
    double c;  //8
};


class B{
    public:
    double c;
    int b;
    char a;
};


int main()
{
    
    // a e1;
    // b e2;
    
    
    // int a = sizeof(e1);
    // int b = sizeof(e2);
    // int c = alignof(e1);
    // int d = alignof(e2);
    
    
    std::cout<<sizeof(A)<<std::endl;
    
    std::cout<<sizeof(B)<<std::endl;
    
    std::cout<<alignof(A)<<std::endl;
    
    std::cout<<alignof(B)<<std::endl;
    
    std::cout<<offsetof(A,a)<<std::endl;
    
    std::cout<<offsetof(A,b)<<std::endl;
    
    std::cout<<offsetof(A,c)<<std::endl;
    
}