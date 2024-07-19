#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    gets(str);
    int len = strlen(str);
    printf("%d\n", len);
    for(int i=0; i<len; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i'){
            for(int x=i; x<=len; x++)
                str[x]=str[x+1];
            len--;
            i--;
        }
    }
    printf("%s", str);
}
