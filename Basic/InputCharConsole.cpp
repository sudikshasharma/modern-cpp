#include<iostream>

int main()
{
	char word[40], word2[40];
	// A delimiter is a character or sequence of characters used to separate or mark the boundaries between distinct elements or sections within a larger body of data
	// word = char array, 8 = chars to read upto,\n = delimiter which says to stop reading char when this delimiter is reached, can be replaced by other 
	std::cin.getline(word,8,'\0');
	std::cout<<word;

	//getline reads whole text until mentioned delimiter is reached or char count is finished
	// with regular cin, it reads single word and stops when whitespaces are met(nextlin\n, tab\t, space' ' or eol'\0')
	std::cin>>word2;
	std::cout<<std::endl<<word2;
	return 0;
}