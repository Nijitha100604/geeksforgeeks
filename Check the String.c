#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20];
    gets(str);
    char x = str[0];
    int flag = 1;
    for(int i=1; i<strlen(str); i++)
    {
        if(str[i] != x){
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("True");
    else
        printf("False");
}
