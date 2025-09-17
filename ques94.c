#include<stdio.h>
int main()
{
int i=0;
while(i<2)
switch(i)
{
i=2;
case 0:
printf("Hai. This is case 0");
i++;
case 1:
printf("Hai. THis is case 1");
i++;
break;
case 2:
printf("Hai. THis is case 2");
i++;
break;
default:
printf("Hai.This is default");
i++;
break;
}
printf("\n\n");
return 0;
}
