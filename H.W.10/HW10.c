#include<stdio.h>
#include<math.h>

float a,b,deg,A,sum;
float rad,factorial;
int i,j;

sinusoid(float rad)
{

	sum = 0;

	for(i = 0 ; i <=14 ; i++)
	{

	factorial = 1;

		for (j = 1 ; j <= 2*i + 1 ; j++)
		{

		factorial = factorial*j;

		}

	sum = sum + ( pow(-1,i)*pow(rad,2*i+1) )/(factorial);

	}

	return sum;

}

dtor(float deg)
{

rad = deg*M_PI/180;

return rad;

}

area(float a,float b,float sum)
{

A = (a*b*sum)/2;

return A;

}

main()
{

printf("The area function of the triangle is A = (1/2)*a*b*sin(theta) \n");
printf("(a) a = 5.3, b = 4.8, theta = 35.0 (degree)\n");
printf("(a) a = 120.5, b = 46.0, theta = 78.0 (degree)\n");
printf("(a) a = 22.5, b = 15.5, theta = 90.0 (degree)\n");

printf("      Side1      Side2      Angle      Area    \n");
printf("                         (in degree)         \n");
printf("---------------------------------------\n");

a = 5.3;
b = 4.8;
deg = 35;
dtor(deg);
sinusoid(rad);
area(a,b,sum);

printf("      %06.1f     %06.1f     %06.1f   %010.3f \n", a ,b ,deg ,A);

a = 120.5;
b = 46.0;
deg = 78;
dtor(deg);
sinusoid(rad);
area(a,b,sum);

printf("      %06.1f     %06.1f     %06.1f   %010.3f \n", a ,b ,deg ,A);

a = 22.5;
b = 15.5;
deg = 90;
dtor(deg);
sinusoid(rad);
area(a,b,sum);

printf("      %06.1f     %06.1f     %06.1f   %010.3f \n", a ,b ,deg ,A);

return 0;

}
