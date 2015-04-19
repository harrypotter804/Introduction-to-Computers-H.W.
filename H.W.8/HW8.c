#include<stdio.h>

main()
{

int i,j,numbpoint,maxvalue;

int A[7][9] = {{17,36,3,23,7,9,12,15,24},\
				{28,15,7,8,1,10,41,15,52},\
				{10,39,19,15,8,3,30,1,18},\
				{3,32,39,7,40,20,22,11,11},\
				{26,4,1,8,3,21,8,2,30},\
				{14,16,7,19,17,5,4,0,2},\
				{10,8,5,2,19,32,11,17,18}};

printf("A = \n");

for (i = 0 ; i <=6 ;i++)
{

	for (j = 0 ;j <=8 ;j++)
	{

	printf("%d ",A[i][j] );

	}

	printf("\n");
}

printf("\n");
numbpoint = sizeof(A)/sizeof(A[0][0]);
printf("The number of points : %d\n", numbpoint);

maxvalue = A[0][0];

for (i = 0 ; i <= 6 ; i++)
{

	for (j = 0 ; j <= 8 ; j++)
	{

	if (maxvalue < A[i][j])
	{

		maxvalue = A[i][j];

	}

	}

}

printf("The number of peaks : %d\n", maxvalue);

return 0;

}