#include<stdio.h>
#include<math.h>

main()
{

int i,j,k,num;
float sum,x,factorial,rad,value,abserror;

sum = 0;
x = 60;
rad = x*M_PI/180;

printf("Terms of series  Series Sum  Exact Value  Absolute Error\n");
printf("--------------------------------------------------------\n");

value = sin(rad);

	for(i = 0 ; i <=14 ; i++)
	{

	factorial = 1;

		for (j = 1 ; j <= 2*i + 1 ; j++)
		{

		factorial = factorial*j;

		}

	sum = sum + ( pow(-1,i)*pow(rad,2*i+1) )/(factorial);

	abserror = sum - value;

	num = i%2;

	if (num == 0)
	{

		printf("      %d            %.5f      %.5f              %.5f \n",i ,sum ,value ,abserror);

	}

	}

return 0;	

}