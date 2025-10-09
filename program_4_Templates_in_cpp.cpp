#include<iostream>
#include<typeinfo>
#include<string>

// std::cout<<"hi"<<std::endl;

template <typename T>
T add(T a,T b)
{
   return a+b;

}

// template <>
// std::string add(std::string str1,std::string str2)
// {
//     return str1+str2;

// }

// class temp{
//     public:
//     std::cout<<"Hello ther"<<std::endl;
// };

int main()
{
    int a = 10;
    // float b = 20;
    int b = 30;

    std::cout<<add(a,b)<<std::endl;
    auto x = add(a,b);
    std::cout<<typeid(x).name()<<std::endl;


    std::string str1 = "hi";
    std::string str2 = "bye";
    

    auto c = add(str1,str2);

    std::cout<<add(str1,str2)<<std::endl;
    // std::cout<<typeid(c).name()<<std::endl;
}

