#include<stdio.h>
#include<math.h>

float rad,ans,sum2,sum4,h;
int i;

main()
{
	sum2 = 0;
	sum4 = 0;
	rad = 0;
	h = 0.01;

for (i = 0 ; i <=100 ; i++)
{

	rad = rad + 0.01;

	if (i%2 == 1)
	{

		sum4 = sum4 + 4*sin(rad);

	}

	if (i%2 == 0)
	{

		sum2 = sum2 + 2*sin(rad);

	}

}

ans = (sin(0) + sum2 + sum4)*h/3;

printf("The integration of f(x) = sin(x) over [0,1] is :%07.4f\n", ans);

return 0;

}