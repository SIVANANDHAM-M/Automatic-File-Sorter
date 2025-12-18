#include<stdio.h>
#include<string.h>
int  main()
{
    char html[100]="<html><body>body</body><center>center</center></html>";
    char stack[10];char* token;
    int top=0;
    token=strtok(html,"<>/");
    while(token!=NULL)
    {
    printf("\t%s",token);
    push(stack,top,token);
    token=strtok(NULL,"<>");
    }
    return 0;

}
void push(char stack[],int top,const char* token)
{int i,bool found=true;
    top++;
    stack[top]=token;
    if(top==1){continue;}
    else
    {
        for(i=1;i<=top;i++)
        {
            if(strcmp(stack[i],stack[top])==0)
            {
                    pop()
            }
        }
    }



}