#include<stdio.h>

struct distance
{
	float feet;
	float inch;
	
};

main()
{
	struct distance d;
	printf("Enter Distance:-\n");
	printf("Distance in feet=");
	scanf("%f",&d.feet);
	printf("Distance in inch=");
	scanf("%f",&d.inch);
	
	while ((d.inch)>=12)
	{
		d.inch= d.inch-12;
		d.feet++;
	}
	
	printf("The Distance in Feet-Inch Are=%.1f . %.1f",d.feet,d.inch);
	
}
