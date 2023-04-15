#include<stdio.h>

struct Students
{
	int roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks;
	float percentage;
};
main()
{
	int i;
	struct Students s[5];
	
	//printf("Enter size=");
	//scanf("%d",&n);
	for (i=0;i<5;i++)
	{
		printf("Enter Roll No.=");
		scanf("%d",&s[i].roll_no);
		printf("Enter Name=");
		scanf("%s",&s[i].name);
		printf("Enter Chemistry Marks=");
		scanf("%d",&s[i].chem_marks);
		printf("Enter Maths Marks=");
		scanf("%d",&s[i].maths_marks);
		printf("Enter Physics Marks=");
		scanf("%d",&s[i].phy_marks);
	}
	printf("\n............................");
	for (i=0;i<5;i++)
	{
		s[i].percentage = ((s[i].chem_marks + s[i].maths_marks + s[i].phy_marks)*100)/300;
        
		printf("\nroll_no=%d\nName=%s\nchem_marks=%d\nmaths_marks=%d\nphy_marks=%d\n",s[i].roll_no,s[i].name,s[i].chem_marks,s[i].maths_marks,s[i].phy_marks);
                printf("Percentage=%.2f",s[i].percentage);
	}
	
	
	
}
