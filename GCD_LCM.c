#include <stdio.h>
#include <ctype.h> // for tolower
// Function declaration
int getLCM(int a,int b);
int getGCD(int a,int b);

int main()
{
// initialize program
// declare variables 
int a, b,GCDresult,LCMresult;
char choice='y';
// print a title
printf("\Calculate to GCD and LCM!\n");
printf("==========================\n\n");

	while (choice=='y')
	{
		// ask user for input and b
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	
	if (a <= 0 || b<=0) 
	{
			//print invalid msg if a or b is less than 0
		printf("Invalid input. Please enter a positive integer greater than zero for a and b.\n");
		printf("Enter a: ");
		scanf("%d",&a);
		printf("Enter b: ");
		scanf("%d",&b);
	}
	// calling the functions and store the values
		GCDresult = getGCD(a,b);
		LCMresult = getLCM(a,b);
		printf("\nGCD is %d", GCDresult );
		printf("\nLCM is %d", LCMresult );
	// ask user if they want to continue
	printf("\nDo you want to calculate GCD and LCM for another pair? (y/n):");
	scanf("%s", &choice);	
	choice=tolower(choice); // convert to lower case
	if(choice != 'y'  && choice != 'n')
	{ 	// if user enter choice other than y and n
	printf("Invalid input. Please enter 'y' or 'n' only.\n");
	scanf("%s", &choice);	
	choice=tolower(choice);
	}
	}

// return success
return 0;
}

int getLCM(int a,int b)
{
	int gcd = getGCD(a,b); // get the gcd value
	
	return (b/gcd) *a; // formula to calculate lcm via gcd
}

int getGCD(int a, int b)
{
	int result, dividend, divisor;
	// check if the values a and b which is greater
	if(a > b)
	{
	result=	b;
	}
	else
	{
	result=	a;
	}
	while(result >0)
	{
		if(a % result ==0 && b% result ==0) // formula to get the gcd of value
		{
			break;
		}
		result--;// decrement the result everytime
	}
	return result;
}

