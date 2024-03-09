#include<stdio.h>
#include<stdbool.h>
int main(){
	//title of program
	printf("Grade Report\n");
	printf("============\n");
	//declaring variable
	double first_grade,second_grade;
	char first_name[10],second_name[10];
	printf("\nType the first student's name: ");
	//taking input from user for first student
	scanf("%s",first_name);
	
	printf("Type the first student's grade (0-100): ");
	scanf("%lf",&first_grade); 	//taking input from user for first student grade

	
	printf("Type the second student's name: ");
	//taking input from user for second student
	scanf("%s",&second_name);
	
	//taking input from user for second student
	printf("Type the second student's grade (0-100): ");
	scanf("%lf",&second_grade);
	
	//printing the output in tabular format

	printf("\n| Student Name \t \t| Student Grade  |\n");
	printf("|-----------------------|----------------|\n");
	printf("| %-9s\t\t|\t%9.2f|\n",first_name,first_grade);
	printf("| %-9s\t\t|\t%9.2f|\n",second_name,second_grade);
	printf("\nEnd of program.");

return 0;
}
