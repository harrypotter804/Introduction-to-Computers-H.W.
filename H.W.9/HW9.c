#include<stdio.h>
#include<math.h>
#include<complex.h>

float a,b,c,x_1_real,x_2_real,x_1_imag,x_2_imag;
double complex x_1,x_2;

quadeq(float a , float b , float c)
{

x_1 = ( -b + csqrt( pow(b,2) - 4*a*c) )/( 2*a );
x_2 = ( -b - csqrt( pow(b,2) - 4*a*c) )/( 2*a );

x_1_real = creal(x_1);
x_1_imag = cimag(x_1);
x_2_real = creal(x_2);
x_2_imag = cimag(x_2);

return x_1_real,x_1_imag,x_2_real,x_2_imag;

}

print(float a,float b,float c,float x_1_real,float x_1_imag,float x_2_real,float x_2_imag)
{

printf("When a = %03.1f,b = %03.1f,c = %03.1f ,the equation has root\n",a ,b ,c );
printf("There are : \n");
printf("x1 = (%.3f) + (%.3f)i ,x2 = (%.3f) + (%.3f)i \n",x_1_real , x_1_imag , x_2_real , x_2_imag );

}

main()
{

printf("The equation is ax^2 + bx + c = 0\n");
printf("(a) a = 1 ,b = 1 ,c = 1\n");
printf("(b) a = 1 ,b = 0 ,c = 16\n");
printf("(c) a = 3 ,b = 5 ,c = -3\n");
printf("Please solve the answer\n");

a = 1;
b = 1;
c = 1;
quadeq(a,b,c);
print(a,b,c,x_1_real,x_1_imag,x_2_real,x_2_imag);

a = 1;
b = 0;
c = 16;
quadeq(a,b,c);
print(a,b,c,x_1_real,x_1_imag,x_2_real,x_2_imag);

a = 3;
b = 5;
c = -3;
quadeq(a,b,c);
print(a,b,c,x_1_real,x_1_imag,x_2_real,x_2_imag);

return 0;
	
}

