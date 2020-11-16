#include<stdio.h>
#include<math.h>
int main()
{
	float x=(0.3*22/7),t=1, sum=1, i,n, sign=1, diff;
	printf("enter value of n \n");
	scanf("%f", &n);
	for(i=0;i<n;i++)
	{
	sign=sign*(-1);
	t= sign*x*x/(2*i*(2*i-1));
	sum= sum+t;
    }
    printf("the sum is %f \n", sum);
	diff= sum-cos(x);
	printf("the difference is %f \n", diff);
	return 0;
}
