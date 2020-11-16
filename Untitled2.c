#include<stdio.h>
#include<math.h>
int main()
{
	// variables definations
	short int i,input;
	float fact=1;
    double sum=1, rel_error, abs_error; 
	const double e=exp(1);
	
	// take input
	printf("enter n: ");
	scanf("%d", &input);
	
	// default value of e
	printf("The value of e is %.20f \n", e);
	
	// forloop to calculate factorial and summation for value of e
	for(i=1; i<=input; i++)
	{
		// calculate factorial
		fact = fact * i;
		
		// calculate sigma 1/n!
		sum = sum + 1/fact;
    } 
    
    // value of e from for loop
	printf("the value of sum is %.20f \n", sum);
    
    // relative error
    rel_error = ((e-sum)/e);
	printf("The relative error is %5.15f \n", rel_error);
    
    // absolute error
    abs_error = (e-sum);
	printf("The absolute arror is %.20f \n", abs_error);
	
    return 0;
}
