#include<stdio.h>
#define F(x,y) (x*x-y*y)
#define Y1(x) (1+(x*x*x)/3-x)
#define Y2(x) (1-x-((x*x*x*x*x*x*x)/63)-((x*x*x*x)/6)+((2*x*x*x*x*x)/15)+(x*x))

void main()
{
  float x0,y0,xn,yn,h;
  printf("enter the initial value of x: ");
  scanf("%f",&x0);
  printf("enter the initial value of y: ");
  scanf("%f",&y0);
   printf("enter the final value of x: ");
  scanf("%f",&xn);
   printf("enter the size of subinterval: ");
  scanf("%f",&h);
  printf("\nthe value of y when x: %f is %f",xn,Y2(xn));
}
