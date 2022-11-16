#include <stdio.h>

#include <cs50.h>  //required to use the 'string' identifier

int main(void)
{
    string name = get_string("What is your name?\n");  // saves string in variable name, get_string used to prompt user
    printf("hello, %s\n", name);  // %s is the string place holder needed to concatinate the string with the variable
}
