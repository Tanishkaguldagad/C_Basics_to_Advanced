#include<stdio.h>
int main()
{
	int Marathi,Hindi,English,History,Science;
	
	printf("Enter marks of 5 Subjects:");
	scanf("%d%d%d%d%d",&Marathi,&Hindi,&English,&History,&Science);
	
	int Total_Marks;
	float Percentage;
	Total_Marks=Marathi+Hindi+English+History+Science;
	Percentage=Total_Marks/5.0;
	
	printf("Total marks of subjects=%d\nPercentage=%.2f",Total_Marks,Percentage);
}