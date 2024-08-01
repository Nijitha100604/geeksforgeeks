#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    gets(str);
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        if(isdigit(str[i])==0)
        {
            for(int j=i; j<=len; j++)
                str[j]=str[j+1];
            len--;
            i--;
        }
    }
    printf("%s", str);
}
