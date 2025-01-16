// Initializations basics

#include<iostream>

int main()
{
	// Copy initialization (avoid it for user defined datatypes as it creates unnecessary copies)
	int n1 = 1,a1; //a1 is uninitiaized (have garbage value)
	// Direct initialization
	int n2(1);
	// int n2() => This is nothing, just a function returning int
	int n3{}; // Value initialization, defaut value = 0. Pro : Forces initialization
	int n4{5};
	char str[100]{"string"};
	char str1[100]{}; //  array initialized to default values
	char *p = new char[30]{"Stringsss"}; // doesn't work in some compilers
	char *p1 = new char[30]{};
	int *n5 = new int{6}; 
	int n6[10]={0}; //all values to 0
	int n7[10] = {1,2}; //first 2 values as 1,2. all other values to 0
	int n8[] = {1,2,3}; //array with 3 elements
	return 0;
}