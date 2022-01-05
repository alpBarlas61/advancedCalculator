#include <stdio.h>
#include <stdlib.h>

main()
{
	double num1;
	double num2;
	double rslt;
	char op;
	char cont_;
	char result;
	
	cont_ = 'Y';
	result = 'N';
	
	while(cont_ == 'Y')
	{
			
		if(result=='N')
		{
			printf("Enter the first number :");
			scanf("%lf",&num1);
		}
	
		printf("Enter the operator :");
		scanf(" %c",&op);
		printf("%lf %c \n",num1,op);
		
		printf("Enter the second number :");
		scanf("%lf",&num2);
		printf("%lf %c %lf = \n",num1,op,num2);
		
		if(op == '+'){
			printf("%f\n",num1+num2);
			rslt = num1+num2;
		}
		else if (op=='-')
		{
			printf("%f\n",num1-num2);
			rslt = num1-num2;
		}
		else if (op=='/')
		{
			printf("%f\n",num1/num2);
			rslt = num1/num2;
		}
		else if(op=='*')
		{
			printf("%f\n",num1*num2);
			rslt = num1*num2;
		}
		else
		{
			printf("Invalid operator.\n");
		}
		
		printf("Would you like to continue ?(Y/N) \n");
		scanf(" %c",&cont_);
		
		if(cont_ == 'Y')
		{
			printf("Do you need the result ? (Y/N) \n");
			scanf(" %c",&result);
			
			if(result=='Y')
			{
				num1=rslt;
			}
		}
		else
		{
			printf("Calculator is going to closed...\n");
		}
		
	}
	printf("Program is finished...");
		
	
	return 0;
}
