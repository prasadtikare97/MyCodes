#ifndef YAHTZEE_LIB_H
#define YAHTZEE_LIB_H
// header files
#include <stdio.h>
#include <stdlib.h> // for rand, srand
#include <time.h> // for time
#include <ctype.h> // for tolower
#include <stdbool.h> // for bool data type
// global constants
#define NUM_DICE 5
#define NUM_SIDES 6
#define NO_PLAY 0
#define YAHTZEE 1
#define L_STRAIGHT 2
#define S_STRAIGHT 3
#define FULL_HOUSE 4
#define FOUR_OF_A_KIND 5
#define THREE_OF_A_KIND 6

void initializePlayer();

char getChoice();

int rollDice();

int countNumber(
int number, int dice1, int dice2, int dice3, int dice4, int dice5);

bool isYahtzee(int dice1, int dice2, int dice3, int dice4, int dice5);

bool isFourOfAKind(
int count1, int count2, int count3, int count4, int count5, int count6);

bool hasTwoEqual(
int count1, int count2, int count3, int count4, int count5, int count6);

bool hasThreeEqual(
int count1, int count2, int count3, int count4, int count5, int count6);

bool isThreeOfAKind(
int count1, int count2, int count3, int count4, int count5, int count6);

bool isFullHouse(
int count1, int count2, int count3, int count4, int count5, int count6);

bool isLargeStraight(
int count1, int count2, int count3, int count4, int count5, int count6);

bool isSmallStraight(
int count1, int count2, int count3, int count4, int count5, int count6);

int decidePlay(int dice1, int dice2, int dice3, int dice4, int dice5);
#endif

