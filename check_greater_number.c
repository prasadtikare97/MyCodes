#include<stdio.h>
#include<stdbool.h>
int main(){
	printf("Number comparison\n");
	printf("=================\n");
	//declaring variables
	float first_num,second_num;
	bool input;
	printf("\nType the first number: ");
	//taking input from user for first number
	scanf("%f",&first_num);
	
	printf("Type the second float number: ");
	scanf("%f",&second_num);	//taking input from user for second number

	
	printf("\nIs the first number greater than the second (1: yes | 0: no)?");
	//comparison between the first and second number to return bool value
	input= first_num>second_num ? true:false;
	//output to return bool value to integer
		printf("\nResult: %d\n",input);
		printf("\nEnd program.");

return 0;
}
