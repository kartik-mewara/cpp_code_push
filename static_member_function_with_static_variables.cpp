// Question 3. Static member functions
// Medium
// Create a class called Configuration with:
// static int logLevel;
// int applicationId;
// Requirements:
// 1. Create a static member function setLogLevel().
// 2. Create a static member function getLogLevel().
// 3. Access and modify logLevel without creating an object.
// 4. Try accessing applicationId directly inside a static function.
// Observe what the compiler tells you and understand why.

// Concept being tested: Static versus non-static member functions.

#include<iostream>

using namespace std;


class configuration{
    public:
        static int loglevel;
        int applicationId;
        
    static void setLoglevel(int value){
        loglevel = value;
    }
    
    static int getLoglevel(){
        return loglevel;
    }
};

int configuration::loglevel = 0;


int main()
{
    std::cout<<configuration::getLoglevel()<<std::endl;
    configuration::setLoglevel(20);
    int a = configuration::getLoglevel();
    std::cout<<a<<std::endl;
    
    configuration::setLoglevel(30);
    std::cout<<configuration::getLoglevel()<<std::endl;
}