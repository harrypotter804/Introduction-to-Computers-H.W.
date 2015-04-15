#include<stdio.h>
#include<math.h>

float main()
{

float a,b,c,x_1,x_2;

a = 1.5;
b = 9.3;
c = 0.5;

x_1 = ( -b + sqrt(pow(b,2) - 4*a*c) ) / (2*a);
x_2 = ( -b - sqrt(pow(b,2) - 4*a*c) ) / (2*a);

printf("Solve the pole if function is 1.5x^2 + Bx + C \n");
printf("X_1 = %.2f\n",x_1);
printf("X_2 = %.2f\n",x_2);

return 0;

}