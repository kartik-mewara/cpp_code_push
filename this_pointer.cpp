// Question 4. Understand the this pointer
// Medium
// Create a class called Box.
// int length;
// int width;
// int height;


// Requirements:
// 1. Write a function setDimensions(int length, int width, int height).
// 2. Use this to differentiate member variables from function parameters.
// 3. Write a function that calculates volume.
// 4. Create two Box objects with different dimensions.
// Concept being tested: The implicit this pointer and object-specific member access.




#include<iostream>
using namespace std;



class box{
    
    private:
        int length;
        int width;
        int height;
    public:
        void setDimensions(int l, int w, int h)
        {
            length = l;
            width = w;
            height = h;
        }
        
        int boxVolume()
        {
            int a = length*width*height; 
            return a;
        }
        
        
        
};

int main()
{
    box e1,e2;
    e1.setDimensions(10,20,30);
    e2.setDimensions(50,60,70);
    
    std::cout<<e1.boxVolume()<<std::endl;
    std::cout<<e2.boxVolume()<<std::endl;
    
}