#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double factorial(int n);
int main()

{
 int i,n;
 double sum,e, rel_error, abs_error;
 printf("enter n\n");
 scanf("%d", &n);
 e=exp(1);
 printf("the true value of e is %f", e);


     for(i=0;i<=n;i++)
    {
		sum= sum * ( 1/i);
    }
  printf("value of sum is %f", sum);
  rel_error= (sum-e)/e;
  printf("relative error is %f", rel_error);
  abs_error= (sum-e);
  printf(" absolute error is %f", abs_error);
  return 0;
}

