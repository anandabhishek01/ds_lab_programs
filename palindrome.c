/* To check that the given word is palindrome or not*/
#include<stdio.h>
#include<string.h>
#define MAX 25
char ST[MAX];
void push(int item,int *top,char ST[])
{
(*top)++;
ST[*top]=item;
}
int main()
{
    char s[50];
    int top=-1,bot,len,flag,i;
    printf("Enter a Word:\n");
    scanf("%s", s);
    len=strlen(s);
    if(len==0)
    printf("stack is empty\n");
for(i=0;s[i]!='\0';i++)
	push(s[i],&top,ST);

	bot=0;
	while(bot<=top)
	{
	    if(s[top]==s[bot])
	    {
		top=top-1;
		bot=bot+1;
		flag=1;
	    }
	else
	flag=0;
	break;
	}
	if(flag==1)
	printf("%s is a palindrome",s);
	else
	printf("%s is not a palindrome",s);
}
