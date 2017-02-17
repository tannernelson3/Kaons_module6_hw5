#include <stdio.h>

double AnnulusMoment(double outr, double inr);

int main(void)
{
	double outr, inr;

	printf("Enter the value for the outer radius (r2): ");
	scanf("%lf", &outr);
	printf("Enter the value for the inner radius (r1): ");
	scanf("%lf", &inr);
	
	AnnulusMoment(outr, inr);


	return 0;
}

double AnnulusMoment(double outr,double inr)
{
	double I;
	I = (3.14159265359/4)*((outr*outr*outr*outr)-(inr*inr*inr*inr));
	printf("The second moment of inertia is %5.2f\n", I);

	return I;
	
}
