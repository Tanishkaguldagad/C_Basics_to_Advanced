#include<stdio.h>

int AgeCategory()
{
	int age;
	
	printf("Enter age: ");
    scanf("%d", &age);
    
    if(age < 12)
    {
        return 1;
    }
    else if(age >= 12 && age <= 19)
    {
        return 2;
    }
    else if(age >= 20 && age <= 59)
    {
       return 3;
    }
    else
    {
       return 4;
    }
}

int main()
{
	int age;
    age=AgeCategory();
    
    if(age==1)
    {
    	printf("Person is child");
	}
	else if(age==2)
	{
		printf("Person is Teenager");
	}
	else if(age==3)
	{
		printf("Person is Adult");
	}
	else{
		printf("Person is Senior");
		}
    return 0;
}