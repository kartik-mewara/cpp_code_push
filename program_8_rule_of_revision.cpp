#include<iostream>


class test{
    public:
    int* data;
    test(int x){
        data = new int(x);
    }
    
    test(const test& obj){
        data = new int(*obj.data);
    }
    
    test& operator=(const test& obj){
        if(this!=&obj){
            delete data;
            data = new int(*obj.data);
        }
        return *this;
    }
    
    test(test&& obj){
        data = obj.data;
        obj.data = nullptr;
        
    }
    
    test& operator=(test&& obj){
        if(this!=&obj){
            
            delete data;
            data = obj.data;
            obj.data = nullptr;
        }
    }
    
    ~test(){
        delete data;
    }
    
    
};


int main(){
    
    test obj1(10);
    
    test obj2=obj1;
    *obj1.data = 30;
    std::cout<<*obj2.data<<std::endl;
    
}