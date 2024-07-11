#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int checkforbinary(char *str)
{
    int flag = 0;
    for(int i=0; i<strlen(str); i++){
    if(str[i]=='1' || str[i] =='0')
        flag = 1;
    else{
        flag = 0;
        break;
        }
    }
    if(flag == 1)
        return 1;
    else
        return 0;
}

int main()
{
    char str[20];
    gets(str);
    printf("%d", checkforbinary(str));
}
