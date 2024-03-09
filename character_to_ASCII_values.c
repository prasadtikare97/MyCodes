#include<stdio.h>
#include<ctype.h>
int main(){
	//title of program
	printf("Character categorizer\n");
	printf("=====================\n");
	//declaring variable
		int number;
		char variable;
		char option='y';
	// repeat while option is [yY]
	while (option == 'y')
	{
	// read the number
	printf("\nType the character you want to categorize: ");
	scanf("%s", &variable);
	// test if character is Upper case
	int number =variable;
	if (number >= 65 && number <=90)
	{
	// print a message
	printf("ASCII value: %d", number);
	printf("\nCategory: Uppercase Letter");
	}
	// test if character is Lower case
	if(number >= 97 && number <=122)
	{
			// print a message
	printf("ASCII value: %d", number);
	printf("\nCategory: Lowercase Letter");
	}
		// test if character is Number
	if(number >= 48 && number <=57)
	{
		// print a message
	printf("ASCII value: %d", number);
	printf("\nCategory: Number");
	}
		// test if character is Other
	if(number >= 33 && number <=47)
	{
	// print a message
	printf("ASCII value: %d", number);
	printf("\nCategory: Other");
	}
	// read the new option ([y/n])
	printf("\nDo you want to enter another character? (y/n) ");
	scanf("%s", &option);
		//check if the input is valid or not
		if(option != 'n' && option != 'y'){
		printf("Invalid input. Please type 'y' to continue or 'n' to finish (y/n): ");
			scanf("%s", &option);
		}
		
	}
	printf("End program.");
	return 0;
}
	
	
