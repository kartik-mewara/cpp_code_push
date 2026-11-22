#include<iostream>
#include<string>
using namespace std;


void rev(string& str)
{
    
    for(int i = 0;i<str.length()/2;i++)
    {
        str[i] = str[i] ^ str[str.length() - 1 - i];
        str[str.length() - 1 - i] = str[i] ^ str[str.length() - 1 - i];
        str[i] = str[i] ^ str[str.length() - 1 - i];
    }
}


int main()
{
    string str = "abcda";
    rev(str);
    
    std::cout<<str<<std::endl;
}