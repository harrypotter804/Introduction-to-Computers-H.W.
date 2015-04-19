#include<stdio.h>

float max,a,b,c;

main()
{

printf("Please input the three number:\n");

scanf("%f %f %f", &a, &b ,&c);
printf("\n");

printf("A = %06.2f\n", a);
printf("B = %06.2f\n", b);
printf("C = %06.2f\n", c);

if (a>b)
{

max = a;

	if (max>c)
	{

		printf("\nThe larger one is %06.2f\n", max);

	}

	if (max<c)
	{
		max = c;
		printf("\nThe larger one is  %06.2f\n", max);

	}

}

else
{

max = b;

	if (max>c)
	{

		printf("\nThe larger one is  %06.2f\n", max);

	}

	if (max<c)
	{
		max = c;
		printf("\nThe larger one is  %06.2f\n", max);

	}

}

return 0;

}