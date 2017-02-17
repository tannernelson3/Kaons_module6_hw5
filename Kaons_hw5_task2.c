#include <stdio.h>

double MakeMilesKmTable(int startmiles, int endmiles, int inc);

int main(void)
{
	int startmiles, endmiles;
	int inc;
	
	printf("Enter the starting miles: ");
	scanf("%d", &startmiles);
	printf("Enter the ending miles: ");
	scanf("%d", &endmiles);
	printf("Enter the increments: ");
	scanf("%d", &inc);



	MakeMilesKmTable(startmiles,endmiles,inc);

return 0;
}

double MakeMilesKmTable(int startmiles, int endmiles, int inc)
{

	double k;
	int x;
	printf("Miles    =    Kilometers\n");
	for(x = startmiles; x <= endmiles; x += inc)
	{
		k = x * 1.61;
		printf(" %d		%5.2f\n", x, k);
	}

return k;
}
