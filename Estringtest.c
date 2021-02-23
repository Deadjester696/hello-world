
#include <stdio.h>
#include <string.h>

#define MAXLINE 100

void getAString(char str[]);
void encryptString(char str[], int shift);

int main()
{
    char str[MAXLINE];
    printf("Whta would you like to say? \n");
    getAString(str);
    printf("%s", str);


return 0;
}

void getAString(char str[])
{
    fgets(str, MAXLINE, stdin);
}

void encryptString(char str[], int shift)
{
    char str[MAXLINE];
//  int shift;






