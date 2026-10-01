#include<stdio.h>
#include<string.h>
//A function to check if a string is a palindrome
void isPalindrome (char str[])
{
	//start from leftmost and rightmost corners of str 
	int l = 0;
	int h = strlen(str) - 1;
	//Keep comparing character while they are same
	while (h > l)
	{
		if(str[l++] != str[h--]);
		{
			printf("%s is not palindrome", str);
			return;
		}
	}
	printf("%s is palindrome", str);
}
//Drive program to test above function 
int main()
{
	//function calling along with parameter passing
	isPalindrome("abba");
	isPalindrome("\nabbccbba ");
	isPalindrome("\ngeeks ");
	return 0;
}
