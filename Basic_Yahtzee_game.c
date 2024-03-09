#include<stdio.h>
#include<stdlib.h>
int main(){
	//title of program
	printf("Welcome to Simple Yahtzee!\n");
	printf("==========================\n");
	//declaring variable
		int number;
		char variable;
		char option='y';
		srand(time(NULL));
		//print the messgae to play
	printf("\nDo you want to roll the dice (y/n): ");
	scanf("%s", &variable);	
	// repeat while option is [yY]
	while (option == 'y')
	{
		//initializing the random numbers
	int number1 =rand() %7;
	int number2 =rand() %7;
	int number3 =rand() %7;
	int number4 =rand() %7;
	int number5 =rand() %7;
	//print the random numbers
	printf("Your roll : %d , %d, %d, %d, %d\n",number1,number2,number3,number4,number5);
	//assigning the numbers to character
	char string[4];
	char c1=number1 + '0'; 	//assigning the number to character
	string[0]=c1; 	//assigning the characters to string
	char c2=number2 + '0';	//assigning the number to character
	string[1]=c2;	//assigning the characters to string
	char c3=number3 + '0';	//assigning the number to character
	string[2]=c3;	//assigning the characters to string
	char c4=number4 + '0';	//assigning the number to character
	string[3]=c4;	//assigning the characters to string
	char c5=number5 + '0';	//assigning the number to character
	string[4]=c5;	//assigning the characters to string

	//declaring variables
	int i,j,k,l,count=0 ,count1=0;
	char for_num,for_num1;
	
//for loop to check the count1 of numbers are equal or not in string
	for (i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(string[i] == string[j]){
			for_num=string[i];
				count++;
			}
		}
	}

	//for loop to check the count2 of numbers are equal or not in string other than 1st consecutive number
	for (k=0;k<5;k++){
		for(l=k+1;l<5;l++){
		if(string[k] == string[l] && string[k] != for_num){
			for_num1= string[k];
			count1++;
			}
		}
	}
	
//checking the condition for count which are equals and prints the message
	if(count==4){
		printf("\nFour of a Kind!\n");
	}
	else if(count==3){
		if(count1==2){
		printf("\nFull House!\n");
		} else{
		printf("\nThree of a Kind!\n");
		}
	}
	else if(count==5){
		printf("\nLong Straight!\n");
	}
	else{
		printf("\nNo particular play!\n");
	}
	
	// read the new option ([y/n])
	printf("\nPlay again? (y/n) ");
	scanf("%s", &option);
	}
	//ending the loop with message
	printf("\nThanks for playing Yahtzee!");
	return 0;
}
	
	
