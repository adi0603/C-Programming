#include <stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char word[100];
    bool flag=true;
    int x=0;
    printf("Enter a word\n");
    scanf("%[^\n]%*c",word);
    int length=strlen(word);
    int y=length-1;
    while(x<=length/2)
    {
        if((toupper(word[x]))!=(toupper(word[y])))
        {
            flag=false;
            break;
        }
        x++;
        y--;
    }
    if(flag)
    {
        printf("%s is Palindrome",word);
    }
    else
    {
        printf("%s is not Palindrome",word);
    }
    return 0;
}
