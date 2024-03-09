#include<stdio.h>
int main(){
	
	//title of program
	printf("Fahrenheit to Celsius calculator\n");
	printf("================================\n");
	printf("\nType the temperature (F): ");
	//declaring variable
	double Fahrenheit,celsius;
	//taking input from user for fahrenheit temperature
	scanf("%lf",&Fahrenheit);
	//formula for converting the tempterature from F to C
	celsius=((Fahrenheit-32) * 5.0)/9;
	//print the output in celsius
	printf("\n%.2lf F = %.2lf C\n",Fahrenheit,celsius);
	
		printf("\nEnd of program.");

return 0;
}
