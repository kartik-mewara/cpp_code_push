#include<iostream>
using namespace std;

int main()
{
    int a;
    int* b=&a;
    std::cout<<"Value of b is "<<b<<std::endl;
    a=10;
    std::cout<<"Value of a is "<<*b<<std::endl;

}