#include "yahtzee_lib.h"

void initializePlayer()
{
srand(time(0)); // Using current time for each execution
}

char getChoice()
{
//declaring variables
char variable;
	scanf("%s", &variable);	// accept input
	variable=tolower(variable); // convert to lower case
	if (variable=='y')
	{
		return 'y'; //return yes
	}
	else if( variable != 'y' && variable != 'n')
	{	//print invalid option
		printf("Invalid option. Please type 'y' to play or 'n' to exit: ");
		getChoice();
	}
	else 
	{
	return 'n';
	}
}
int rollDice()
{
	// return dice number one at a time
	 return  rand() % NUM_DICE +1;
	
}
int countNumber(int number, int dice1, int dice2, int dice3, int dice4, int dice5)
{
	// count the occurrence of dices
	int count = 0;
	if(number == dice1)
	{
	count = count + 1;
	}
	if(number == dice2)
	{
	count = count + 1;
	}
	if(number == dice3)
	{
	count = count + 1;
	}
	if(number == dice4)
	{
	count = count + 1;
	}
	if(number == dice5)
	{
	count = count + 1;
	}

	return count;
}

bool isYahtzee(int dice1, int dice2, int dice3, int dice4, int dice5)
{	// check if it is  a yahtzee else false
	if(dice1 == dice2 && dice2 == dice3 && dice3 == dice4 && dice4== dice5)
	{
		return YAHTZEE;
	}
	else {
		return false;
	}

}

bool isFourOfAKind(int count1, int count2, int count3, int count4, int count5, int count6)
{	// check if it is four of a kind else false
		if(count1>=4 || count2>=4 || count3>=4 || count4>=4 || count5>=4 || count6>=4)
		{
			return true;
		}
		else{
			return false;
		}
}

bool hasThreeEqual(int count1, int count2, int count3, int count4, int count5, int count6)
{	// check if it is three values are equal
	if(count1==3 || count2==3 || count3==3 || count4==3 || count5==3 || count6==3)
	{
			return true;
		}
		else{
			return false;
		}
}

bool hasTwoEqual(int count1, int count2, int count3, int count4, int count5, int count6)
{		// check if it is two values are equal
	if(count1==2 || count2==2 || count3==2 || count4==2 || count5==2 || count6==2)
	{
			return true;
		}
		else{
			return false;
		}
}

bool isThreeOfAKind(int count1, int count2, int count3, int count4, int count5, int count6)
{		// check if it is three of a kind else false
	if(hasThreeEqual(count1, count2, count3, count4, count5, count6) == true  && hasTwoEqual(count1, count2, count3, count4, count5, count6) == false)
	{
		return true;
	}
	else{
		return false;
	}
}

bool isFullHouse(int count1, int count2, int count3, int count4, int count5, int count6)
{		// check if it is full house if three and two distinct values are equal else false
	if(hasThreeEqual(count1, count2, count3, count4, count5, count6) == true  && hasTwoEqual(count1, count2, count3, count4, count5, count6) == false)
	{
	return true;
	}
	else
	{
	return false;
	}
}

bool isLargeStraight(int count1, int count2, int count3, int count4, int count5, int count6)
{		// check if it is large straight sequence values else false
	if(count1>=1 && count2>=1  && count3>=1  && count4>=1  && count5>=1)
	{
		return true;
	}
	else if (count2>=1  && count3>=1  && count4>=1  && count5>=1 && count6>=1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isSmallStraight(int count1, int count2, int count3, int count4, int count5, int count6)
{	// check if it is small straight sequence values else false
		if(count1>=1 && count2>=1  && count3>=1  && count4>=1 )
	{
		return true;
	}
	else if (count2>=1  && count3>=1  && count4>=1  && count5>=1)
	{
		return true;
	}
	else if ( count3>=1  && count4>=1  && count5>=1 && count6>=1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int decidePlay(int dice1, int dice2, int dice3, int dice4, int dice5)
{		// print the roll
	 	printf("\nYour roll : %d, %d, %d, %d, %d\n",dice1,dice2,dice3,dice4,dice5);
		// count the dices
		int count_one=countNumber(1,dice1,  dice2,  dice3,  dice4,  dice5);
	 	int count_two=countNumber(2,dice1,  dice2,  dice3,  dice4,  dice5);
	 	int count_three=countNumber(3,dice1,  dice2,  dice3,  dice4,  dice5);
	 	int count_four=countNumber(4,dice1,  dice2,  dice3,  dice4,  dice5);
	 	int count_five=countNumber(5,dice1,  dice2,  dice3,  dice4,  dice5);
	 	int count_six=countNumber(6,dice1,  dice2,  dice3,  dice4,  dice5);
	 	
		// check the conditions here and pass the appropriate values.
	 	if(isYahtzee(dice1,dice2,dice3,dice4,dice5) == 1)
		{
			return YAHTZEE;
		}
		else if(isFourOfAKind(count_one,count_two,count_three,count_four,count_five,count_six) == true)
		{
			return FOUR_OF_A_KIND;
		}
		else if(isThreeOfAKind(count_one,count_two,count_three,count_four,count_five,count_six) == true)
		{
			return THREE_OF_A_KIND;
		}
		else if(isFullHouse(count_one,count_two,count_three,count_four,count_five,count_six) == true)
		{
			return FULL_HOUSE;
		}
		else if(isLargeStraight(count_one,count_two,count_three,count_four,count_five,count_six) == true)
		{
			return L_STRAIGHT;
		}
		else if(isSmallStraight(count_one,count_two,count_three,count_four,count_five,count_six) == true)
		{
			return S_STRAIGHT;
		}
		else
		{
			return NO_PLAY;
		}
		
}




