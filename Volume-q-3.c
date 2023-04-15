#include<stdio.h>

enum Week_Days
{
	mon,tue=2,wed,thu,fri,sat=15,sun
};
main()
{
    int i;
	for (i=mon;i<=sun;i++)
	{
		printf("%d",i);
	}	
}
