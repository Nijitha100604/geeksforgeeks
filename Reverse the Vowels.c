#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[50];
    gets(str);
    char ltr[20], ctr[20];
    int k=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i')
            ltr[k++]=str[i];
    }
    ltr[k]='\0';
    printf("%s\n", ltr);
    int y=0;
    for(int i=k-1; i>=0; i--)
        ctr[y++]=ltr[i];
    ctr[y]='\0';
    printf("%s", ctr);

}
