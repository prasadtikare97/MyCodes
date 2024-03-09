#include<stdio.h>
#include<math.h>
int main(){
	//title of program
	printf("Improper fraction to Mixed number conversor\n");
	printf("===========================================\n");
	//declaring variable
	int num,deno;
	int remainder;
	printf("\nPlease inform the values of the improper fraction\n");
	printf("Type the numerator: ");
	//taking input from user for weight
	scanf("%d",&num);
	
	printf("Type the denominator: ");
	//taking input from user for height
	scanf("%d",&deno);
	//formula to calculate the BMI
	remainder = num/deno;
	int number= num - (remainder* deno);
	//print output for BMI
		printf("\nThe mixed number is %d %d/%d.\n",remainder,number,deno);
		printf("\nEnd program.");

return 0;
}
