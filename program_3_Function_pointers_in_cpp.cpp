#include<iostream>

int add(int a,int b){
    return a+b;
}

int main(){
    using p = int (*)(int,int);  //here we have created the alias for writing int (*)(int,int) as p we dont need to write it multiple times
    p obj = &add;  //here we have assigned address of function add to obj

    std::cout<<obj(10,20)<<std::endl; //here we are calling it 



}