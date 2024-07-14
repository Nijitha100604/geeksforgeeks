#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* string(char*s)
{
    for(int i=0; i<strlen(s); i++)
    {
        if(i==0)
            s[i]=toupper(s[i]);
        else if(s[i]==' ' && isalpha(s[i+1])!=0)
            s[i+1] = toupper(s[i+1]);
    }
    return s;
}

int main()
{
    char str[30];
    gets(str);
    printf("%s", string(str));
}
