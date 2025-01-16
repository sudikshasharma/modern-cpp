// Reference practice questions



// Reference cannot be null
// Reference should always be initailized
// Initialized value should be lvalue (a variable with storage in memory and not a number sortof thing) unlike pointers
// Reference can't become to some other variable's reference
// Reference doesn't take up memory (unlike pointers)
#include<iostream>

void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b) ;            //Swap two numbers through reference arguments

int main()
{
	int n1{7}, n2{3},result{} ;
	Add(n1,n2,result);
	std::cout<<result<<std::endl;
	Swap(n1,n2);
	std::cout<<n1<<" "<<n2<<std::endl;
	Factorial(n1,result);
	std::cout<<result<<std::endl;
	return 0;
}

void Add(int a, int b, int &result)
{
	result = a+b;
}
void Swap(int &a, int &b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}

void Factorial(int a, int &result)
{
	result = 1;
	for(int i=a;i>1;i--)
	{
		result*=i;
	}
}