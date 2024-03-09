#include<stdio.h>
int main(){
		//title of program
	printf("Trim decimal numbers\n");
	printf("====================\n");
	//declaring variable
	double first_num,second_num,thrid_num;
	printf("\nType a decimal number: ");
	//taking input from user for double value
	scanf("%lf",&first_num);
	
	printf("Type another decimal number: ");
	scanf("%lf",&second_num);	//taking input from user for double value
	
	printf("Type a decimal number: ");
	scanf("%lf",&thrid_num);	//taking input from user for double value

	//print the output in interger casting 
	printf("\nOutput: %d, %d, %d \n",(int) first_num,(int)second_num,(int)thrid_num);
	
	printf("\nEnd program.");

return 0;
}
