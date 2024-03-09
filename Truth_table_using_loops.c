#include<stdio.h>
#include<stdbool.h>
int main(){
	//title of program
	printf("Truth table (A, B)\n");
	printf("==================\n");
	//header of program
	printf("\nA\tB\t!A\t!B\tA&&B\tA||B\n");
	printf("---------------------------------------------\n");
	
	//declareing variable for process
	bool A=false, B=false;
	int i,count,j;
	//for loop to print the table by changing bool values
	for(i=(int) A;i<2;i++){
		for (j=(int) B;j<2;j++){
			printf("%d\t%d\t%d\t%d\t%d\t%d\n",i,j,!i,!j,i&&j,i||j);//print output line 1
		}
	}
	printf("\nEnd program.");
return 0;
}
