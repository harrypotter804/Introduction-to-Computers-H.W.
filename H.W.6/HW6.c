#include<stdio.h>
#include<math.h>

main()
{

float H,t;

H = 0;
t = 0;

printf("Time(sec)    Height(ft)");
printf("-----------------------");

	while(1)
	{

		t = t + 0.0025;

		H = 60 + 2.13*pow(t,2) - 0.0013*pow(t,4) + \
			0.000034*pow(t,4.751);


		if (t<100 && H > 0)
		{

			printf("    %.2f     %.2f\n",t,H);

		}

		if (H < 0)
		{

			printf("The mission is successful!\n");
			break;

		}

		if (t>=100)
		{

			printf("The mission is failed!\n");
			break;

		}

	}

return 0;

}