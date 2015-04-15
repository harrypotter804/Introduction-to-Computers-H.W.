#include<stdio.h>

main()
{

float Math,Statics,Thermo,Total,Ave;

Math = 90;
Statics = 85;
Thermo = 66;

Total = Math + Statics + Thermo;
Ave = (Math + Statics + Thermo)/3;

printf("\n Math = %.2f",Math );
printf("\n Statics = %.2f",Statics );
printf("\n Thermo = %.2f",Thermo );
printf("\n--------------------------");
printf("\n Total = %.2f",Total );
printf("\n Ave = %.2f\n",Ave);

return 0;

}