#include<stdio.h>

main()
{

float a,b;

printf("Please input the two number:\n");

scanf("%f %f", &a, &b);

printf("A = %.2f\n",a );
printf("B = %.2f\n",b );

	if (a>b)
	{

		printf("\nThe larger one is \n %.2f\n",a);

	}

	if (b>a)
	{

		printf("\nThe larger one is %.2f\n",b);

	}

return 0;

}