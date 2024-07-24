#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[20];
    gets(str);
    for(int i=0; i<strlen(str); i++)
    {
        if(islower(str[i])!=0)
            str[i]=toupper(str[i]);
    }
    printf("%s", str);
}
