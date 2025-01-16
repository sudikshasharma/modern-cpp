// Pointers practice questions

#include<iostream>

int Add(int *a, int *b) ;    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b) ;  //Swap the value of two integers
void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument


int main()
{
	int n1{7}, n2{3},n3{} ;
	std::cout<<Add(&n1,&n2)<<std::endl;
	AddVal(&n1,&n2,&n3);
	std::cout<<n3<<std::endl;
	Swap(&n1,&n2);
	std::cout<<n1<<" "<<n2<<std::endl;
	Factorial(&n1,&n3);
	std::cout<<n3<<std::endl;
	return 0;
}

int Add(int *a, int *b)
{
	return *a+*b;
}

void AddVal(int *a, int *b, int *result)
{
	*result = *a+*b;
}

void Swap(int *a, int *b)
{
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
}

void Factorial(int *a, int *result)
{
	*result = 1;
	for(int i=*a;i>1;i--)
	{
		(*result)*=i;
	}
}