#include<stdio.h>
#include<math.h>
int main(){
	//title of program
	printf("Bhaskara Calculator (real roots only!)\n");
	printf("======================================\n");	
	//declaring variable
	int b,a,c;
	double root1,root2;
	printf("\nEnter the coefficient A: ");
	//taking input from user for A
	scanf("%d",&a);
	
	printf("Enter the coefficient B: ");
	//taking input from user for B
	scanf("%d",&b);
	
	printf("Enter the coefficient C: ");
	//taking input from user for C
	scanf("%d",&c);

	//formula to calculate real roots 
	root1=( -b + sqrt(pow(b,2) - 4 * a*c)) / 2 * a;
	root2=( -b - sqrt(pow(b,2) - 4 * a*c)) / 2 * a;
//printing output
	printf("The real roots are x1=%.1lf and x2=%.1lf\n",root1,root2);
		printf("\nEnd program.");

return 0;
}
