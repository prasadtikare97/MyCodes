#include<stdio.h>
#include<math.h>
int main(){
	//title of program
	printf("Hypotenuse calculator\n");
	printf("=====================\n");	
	//declaring variable
	double adj,opp,hypo;
	printf("\nType the length of the adjacent side (in cm): ");
	//taking input from user for adjacent side 
	scanf("%lf",&adj);
	printf("Type the length of the opposite side (in cm): ");
	//taking input from user for opposite side
	scanf("%lf",&opp);
	//formula for pythagorus theorum to calculate hypotenuse
	hypo=pow(adj,2)+pow(opp,2);
	//print the output 
	printf("\nHypotenuse: %.1lf\n",sqrt(hypo));
	printf("\nEnd program.");
	
return 0;
}
