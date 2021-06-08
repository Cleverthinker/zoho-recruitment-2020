#include<stdio.h>
int main()
{
char str[1000];
int len,row,col,val,spc;
scanf("%s",str);
for(len=0;str[len];len++);
for(row=1;row<=len;row++,printf("\n"))
{
     val=len/2;
    for(spc=1;spc<=len-row;spc++)
       printf("  ");
    for(col=1;col<=row;col++,val++)
       printf("%c ",str[val%len]);
}
return 0;
}
