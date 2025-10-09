#include<iostream>
#include<thread>
#include<mutex>

std::mutex cout_mutex;

void task1(){
    std::lock_guard<std::mutex> lock(cout_mutex);

    std::cout<<"Task1 is getting executed\n"<<std::endl;

}

void task2(){

    std::lock_guard<std::mutex> lock(cout_mutex);

    std::cout<<"Task2 is getting executed "<<std::endl;
}

int main()
{
    std::thread t1(task1);
    std::thread t2(task2);
    t1.join();
    std::cout<<std::endl;
    t2.join();

}