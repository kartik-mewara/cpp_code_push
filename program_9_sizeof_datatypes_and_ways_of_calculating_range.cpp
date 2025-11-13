#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	int a;
	double b;
	long c;
	long long d;
	signed int e;
	signed char f;
	unsigned char g;
	float h;
	short i;
	
	std::cout<<sizeof(a)<<std::endl;
	std::cout<<sizeof(b)<<std::endl;
	std::cout<<sizeof(c)<<std::endl;
	std::cout<<sizeof(d)<<std::endl;
	std::cout<<sizeof(e)<<std::endl;
	std::cout<<sizeof(f)<<std::endl;
	std::cout<<sizeof(g)<<std::endl;
	std::cout<<sizeof(h)<<std::endl;
	std::cout<<sizeof(i)<<std::endl;
	
	std::cout<<sizeof("Hello0")<<std::endl;
	std::cout<<sizeof(1234567474748)<<std::endl;
	
	
	//for finding range of any data type it is very simple like for example if we talk about integer -> size is 4 bytes -> 4x8=32bits->
	
	//so now think if data type is singed or unsigned-> as of now int will be singed so 1 bit will go for keeping sign so total=8*4=32-1=31
	// range->(-2^31 to 2^31-1) -1 because as it starts from 0
	
	//lets take this for char->size=1*8=4 
	// is character singed 
	

}
