#include<stdio.h>
void main()
{
int n,i,s=0;
printf("Enter  limit:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
s=s+i;
}
printf("%d",s);
}
