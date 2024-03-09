#include<stdio.h>
#include<math.h>
int main(){
	//title of program
	printf("Binary to Decimal Conversor\n");
	printf("===========================\n");
	//declaring variable
	char main[10];	
	int i,j,count=0,c=0,k,m=0,l,n=0;
		int decimal=0;
	double fraction=0.0;
	//user input for binary number
	printf("\nEnter a binary number:");
	scanf("%s",main);

	//for loop to run the numbers till end of string
	for(i=0;main[i]!='0';i++){
		//condition to check the numbers are binary or not
		if(main[i] !='0' && main[i] !='1' && main[i] !='.'){
			//print error mesasge
		printf("ERROR: binary numbers contain 0 and 1 only. Use . for fractional part. Please restart.");
		printf("Program aborted.");
		return 0;
		}
	}
	//for loop till end of string
	for(j=0;j<sizeof(main);j++){
		//condition to stop till point
		if(main[j] == '.'){
			//for loop to reverse the number
			for(k=j-1;k>=0;k--){
			c=main[k]-'0'; //string to intger conversion

			decimal += (c * pow(2,m));// formula for decimal conversion
			m++;
			}
			m=1;
			//for loop to run after the point 
			for(l=j+1;main[l] != '\0';l++){
				n= (main[l]-'0');	 //string to intger conversion		
				fraction =fraction + (n/pow(2,m)); // formula for fraction conversion
				m++;
			}
		}
	}
	fraction=decimal+fraction; //adding both
	//print value
	printf("Decimal equivalent: %lf",fraction);
	
	return 0;
}
	
	
