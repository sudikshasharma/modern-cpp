// Pointers basics

#include<iostream>

int main()
{
	int num{10};
	int *ptr1 = &num;
	std::cout<<ptr1<<" "<<*ptr1<<" "<<&ptr1<<std::endl;
	// Void is special data type which is used for functions and pointers.
	// A pointer of a type can hold address of same variable type only
	// A pointer of void type can hold address of any data type
	// nullptr is typesafe introduced in C++11. Earlier, it was NULL to declare a null pointer
	void *ptr2 = &num;
	// We can't derefrence void ptr directly, we need to cast it first to appropriate data type. cout<<*ptr2 will give error
	std::cout<<ptr2<<" "<<*(int*)ptr2<<" "<<&ptr2<<std::endl;
	float num2{10.10};
	float *ptr3 = &num2;
	//float *ptr4 = &num; // Will give error as ptr4 and num are of different types
	return 0;
}