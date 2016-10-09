#include<iostream>
using namespace std;
#include <cstdlib>
int main(int argc, char* argv[])
{
	int a=atoi(argv[1]);
	cout<<a<<endl;
	if(a<0 || a>100 || a!=a)
		a=100;
	for(int i=0; i<a;i++)
		if(i%5==0 && i%3==0)cout<<"FizzBuzz\n";
		else if(i%3==0)cout<<"Fizz\n";
		else if(i%5==0)cout<<"Buzz\n";	
		else cout<<i<<endl;
	return 0;
}
