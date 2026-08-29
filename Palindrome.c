#include <stdio.h> 
#include <string.h> 
  
// A function to check if a string string is palindrome 
void isPalindrome(char str[]) 
{ 
    // Start from leftmost and rightmost corners of str 
    int l = 0; 
    int h = strlen(str) - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            printf("%s is Not Palindrome", str); 
            return; 
        } 
    } 
    printf("%s is palindrome", str); 
} 
  
// Driver program to test above function 
int main() 
{ 
    //function calling along with parameter passing

    isPalindrome("abba"); 
    isPalindrome("abbccbba"); 
    isPalindrome("geeks"); 
    return 0; 
}
