#include<stdio.h>
int main(){
	//title of program
	printf("Swapping program\n");
	printf("================\n\n");
	//declaring variable
	double b,a,c;
	double temp;
	printf("Enter the first number: ");
	//taking first input from user 
	scanf("%lf",&a);
	
	printf("Enter the second number: ");
	//taking second input from user
	scanf("%lf",&b);
	
	printf("Enter the third number: ");
	//taking input third from user
	scanf("%lf",&c);
	//print values before swap
	printf("\nBefore swapping \n a = %.1lf \n b = %.1lf \n c = %.1lf \n",a,b,c);

// logic to swap the three values
	temp=a; // storing value in te,p
	a=c; //adding c vlaue to a
	c=b; //adding b vlaue to c
	b=temp; //adding temp vlaue to b
	
// printing output
	printf("\nAfter swapping \n a = %.1lf \n b = %.1lf \n c = %.1lf",a,b,c);
	printf("\n\nEnd program.");

return 0;
}
