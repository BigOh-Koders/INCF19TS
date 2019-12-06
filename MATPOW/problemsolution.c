#include<stdio.h>
int main()
{
int num;
scanf("%d/n",&num);
int first=0;
int last=1;
int fibnum;
for(int i=1;i<=(num+1);i++)
{
fibnum=last+first;//Generating the num fibonacci number.
last=fibnum;
first=last;
if(i==(num-1))//printing the n-1 th fibonacci number
printf("%d\n",fibnum);
if(i==num)
printf("%d\n",fibnum);//printing the nth fibonacci number
if(i==(num+1))
printf("%d\n",fibnum);//printing the n+1th fibonacci number
}
}
