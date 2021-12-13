#include<stdio.h>
#include<math.h>

int main()
{
float Principle,Time,Rate,SI,CI;
printf("\n Enter the principle: ");
scanf("%f",& Principle);
printf("\n Time: ");
scanf("%f",& Time);
printf("\n Rate: ");
scanf("%f",& Rate );
SI= Principle*(1+Rate*Time);
printf("\n SI=%f",SI);
return 0;
}