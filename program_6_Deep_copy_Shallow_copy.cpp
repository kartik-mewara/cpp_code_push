#include<iostream>


class test{
    public:
        int* data;
    test(int x){
        
        data = new int(x);
    }
    
    // Till here this code is shallow copy to make this program into deep copy enable below code which will make deep copy for creating saperate memory address.
    
    // test(const test& obj){
    //     data = new int(*obj.data);
        
    // }
    
    // test& operator=(const test& obj){
    //     if(this != &obj){
    //         delete data;
    //         data = new int(*obj.data);
            
    //     }
    //     return *this;
    // }
    
    // test(test&& obj){
    //     data = obj.data;
    //     obj.data = nullptr;
        
    // }
        
    // test& operator=(test&& obj){
        
    //     if(this!=&obj){
    //         delete data;
    //         data = obj.data;
    //         obj.data = nullptr;
    //     }
        
    //     return *this;
    // }
    
    
};

int main(){
    test obj1(10);
    test obj2 = obj1;
    *obj2.data = 30;
    
    std::cout<<*obj1.data<<std::endl;
    
}