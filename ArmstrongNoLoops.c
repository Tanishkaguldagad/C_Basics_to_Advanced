#include<stdio.h>
void main()
{
	int no;
	int digit=0;
	
	printf("Enter a no:");
	scanf("%d",&no);
	
		for(int i=1;i<= no;i++)
    	{
         	int temp=i;
         	int count=0;
        	int sum=0;
	
     	while(temp>0)
    	{
		    count++;
            temp = temp / 10;
        }

            temp = i;

               while(temp > 0)
            {
               int digit = temp % 10;
               sum += pow(digit, count);
               temp = temp / 10;
           }

             if(sum == i)
           {
            printf("%d ", i);
          }
      }
  }


