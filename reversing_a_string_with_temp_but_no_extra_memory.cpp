#include<iostream>
#include<string>
using namespace std;

void reverse_str(string& str)
{
    
    for(int i=0;i<str.length()/2;i++)
    {
        char c;
        c = str[i];
        str[i] = str[str.length()-1-i];
        str[str.length()-1-i] = c;
        // std::cout<<i;
    }
    
}



int main()
{
    string str;
    str = "abcdwe";
    reverse_str(str);
    std::cout<<str<<std::endl;
    
    
}