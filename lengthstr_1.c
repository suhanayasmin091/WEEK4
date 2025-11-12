//Program to find the length of a string
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i=0,length;
    printf("Enter the string:\n");
    gets(str);
    while (str[i]!='\0')
    {
        i++;
    }
    length = i;
    printf("The length of the string is: %d", length);
    return 0;
}