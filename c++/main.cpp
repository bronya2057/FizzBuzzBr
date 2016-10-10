#include<iostream>
using namespace std;
#include <cstdlib>
#include<string>
int main(int argc, char* argv[])
{
    int c=stoa(argv[1]);
    
    cout<<c;
	int a=atoi(argv[1]);
	cout<<a<<endl;
	if(a<0 || a>100 || a!=a)
		a=100;
    std::string b;
	for(int i=1; i<a;i++)
    {
        b="";
		/*if(i%5==0 && i%3==0)cout<<"FizzBuzz\n";
		else if(i%3==0)cout<<"Fizz\n";
		else if(i%5==0)cout<<"Buzz\n";	
		else cout<<i<<endl;*/
        if(i%3==0) b=b+ "Fizz ";
        if(i%5==0) b=b+"Buzz";
        if(b!=""){cout<<b<<std::endl;}
        else {cout<<i<<endl;}
    }
	return 0;
}
