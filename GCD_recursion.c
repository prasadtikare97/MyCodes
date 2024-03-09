#include <stdio.h>
#include <ctype.h> // for tolower
// Function declaration
int getGCD(int a,int b);

int main()
{
// declare variables
	int a, b,GCD_recursive_result;
	char choice='y';
	// print title
	printf("\Calculate to GCD recursive!\n");
	printf("==========================\n\n");
	
while (choice=='y')
	{
		// ask user for input and b
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	// check if the input is greater than 0 
	if (a <= 0 || b<=0) 
	{	//print invalid msg if a or b is less than 0
		printf("Invalid input. Please enter a positive integer greater than zero for a and b.\n");
		printf("Enter a: ");
		scanf("%d",&a);
		printf("Enter b: ");
		scanf("%d",&b);
	}
		// call the function and store teh value
		GCD_recursive_result = getGCD(a,b);
		//print the gcd value
		printf("\nGCD is %d", GCD_recursive_result);
	// ask user if they want to continue
	printf("\nDo you want to calculate GCD and LCM for another pair? (y/n):");
	scanf("%s", &choice);	// get the choice
	choice=tolower(choice); // convert to lower case
	if(choice != 'y'  && choice != 'n')
	{
		// if user enter choice other than y and n
	printf("Invalid input. Please enter 'y' or 'n' only.\n");
	scanf("%s", &choice);	
	choice=tolower(choice);
	}
	}
	return 0;
}
// gcd recursive
int getGCD(int a,int b)
{
	// base case to break recursion
	if(b==0){
		return a;
	}
	else
	{
		return getGCD(b, a%b); // formula to get the gcd of value
	}
}
