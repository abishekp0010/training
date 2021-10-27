#include<stdio.h>
void main()
{
int i;
scanf("%d",&i);
if(i<10)
{
printf("motor is on");
}
else if(10<i&&i<90)
{
printf("motor is running");
}
else if(i>90)
{
printf("motor is off");
}
getch();
clrscr();
}