#include<iostream>


class MyClass{
    public:
        int* data;
    public:
        MyClass(int val){ data = new int(val); }
        
        ~MyClass(){
            delete data;
        }
        
        MyClass(const MyClass& other){
            data = new int(*other.data);
        }
        
        MyClass& operator=(const MyClass& other){
            if(this!=&other){
                delete data;
                data = new int(*other.data);
            }
            
            return *this;
        }
        MyClass(MyClass&& other) noexcept{
            data = other.data;
            other.data = nullptr;
        }
        
        MyClass& operator = (MyClass&& other) noexcept{
            if(this!=&other){
                delete data;
                data = other.data;
                other.data = nullptr;
            }
            return *this;
            
        }
    
};

int main()
{
    
    MyClass obj(10);
    MyClass obj2 = obj;
    
    std::cout<<*obj2.data<<std::endl;
    std::cout<<*obj.data<<std::endl;
    
    *obj2.data = 30;
    
    std::cout<<*obj2.data<<std::endl;
    std::cout<<*obj.data<<std::endl;
    
    
}