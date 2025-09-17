#include<stdio.h>
int main()
{
switch(25)
{
case 25L:
printf("25L");
break;
case 25.0:
printf("25.0");
break;
default:
printf("Nothing");
break;
}
printf("\n\n");
return 0;
}