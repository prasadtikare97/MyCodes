#include<stdio.h>
#include<stdbool.h>
int main(){
	//title of program
	printf("Truth table (A, B)\n");
	printf("==================\n");
	//header of program
	printf("\nA \t B \t !A \t !B \t A&&B \t A||B \n");
	printf("---------------------------------------------\n");
	
	//declareing variable for step1
	bool A=false,B=false;
	printf("%d \t %d \t %d \t %d \t %d \t %d \n",A,B,!A,!B,A&&B,A||B);//print output line 1
	//declareing variable for step2
	A=false;
	B=true;
	printf("%d \t %d \t %d \t %d \t %d \t %d \n",A,B,!A,!B,A&&B,A||B);//print output line 2
	//declareing variable for  step3
	A=true;
	B=false;
	printf("%d \t %d \t %d \t %d \t %d \t %d \n",A,B,!A,!B,A&&B,A||B);//print output line 3
	//declareing variable for  step4 
	A=true;
	B=true;
	printf("%d \t %d \t %d \t %d \t %d \t %d \n",A,B,!A,!B,A&&B,A||B);//print output line 4
	printf("\nEnd program.");
return 0;
}
