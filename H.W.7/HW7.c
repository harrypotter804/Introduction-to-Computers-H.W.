#include<stdio.h>
#include<math.h>

main()
{

int i,j,k,num;
float sum,sum2,x,factorial,rad,value,value2,abserror;

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

	value2 = pow(value,2);
	sum2 = pow(sum,2);

	if (num == 0)
	{

		printf("      %d            %.5f      %.5f              %.5f \n",i ,sum2 ,value2 ,abserror);

	}

	}

return 0;	

}