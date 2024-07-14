#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[20];
    gets(str);
    int med = strlen(str)/2;
    int last = strlen(str)-1;
    for(int i=0; i<med; i++){
        char x = str[i];
        str[i]=str[last];
        str[last]=x;
        last--;
    }
    printf("%s", str);
}
