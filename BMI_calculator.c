#include<stdio.h>
#include<math.h>
int main(){
	//title of program
	printf("BMI calculators for adults (20+ yo)\n");
	printf("===================================\n");
	//declaring variable
	float weight,height;
	double BMI;
	printf("\nType the person's weight (kg): ");
	//taking input from user for weight
	scanf("%f",&weight);
	
	printf("Type the person's height (m): ");
	//taking input from user for height
	scanf("%f",&height);
	//formula to calculate the BMI
	BMI= (weight/pow(height,2));
	//print output for BMI
		printf("\nThe person's BMI is %.2lf\n",BMI);
		printf("\nEnd program.");

return 0;
}
