#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
double R,L,C,X1,X2,W,Q,F;
double const pi=3.145;
printf("Enter the value of resistance in ohms\n");
scanf("%lf",&R);
printf("Enter the value of capacitance in Farad\n");
scanf("%lf",&C);
printf("Enter the value of inductance in Henrys\n");
scanf("%lf", &L);
printf("Enter the value of angular frequency\n");
scanf("%lf", &W);
X1=W*L;
X2=1/(W*C);
printf("The value of inductive reactance is %lf",X1);
printf("The value of capacitive reactance is %lf",X2);
if(X1==X2)
{
F=1/(2*pi*sqrt(L*C));
Q=(sqrt(L*1/C))/R;
printf("The circuit is at resonance and its resonance frequency is %lf", F);
printf("The quality factor of LCR circuit is %lf", Q);
}
else
printf("The circuit is not at resonance");
getch();
return 0;
}
