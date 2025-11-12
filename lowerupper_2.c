//Program to convert lowercase characters of a string to uppercase
#include <stdio.h>
#include <string.h>
int main(){
    char str[100],upper_str[100];
    int i=0,length;
    printf("Enter the string:\n");
    gets(str);
    while (str[i]!='\0')
    {
        if (str[i]>='a' && str[i]<='z')
        {
            upper_str[i]=str[i]-32;
        }else{
            upper_str[i] = str[i];
        }
        i++;
    }
    upper_str[i]= '\0';
    printf("\nThe string converted into upper case is:");
    puts(upper_str);
    return 0;
}