#ifndef TABLEDESIGN_H
#define TABLEDESIGN_H

#include<stdio.h>

#define COL_SEPARATOR '|'
#define ROW_SEPARATOR '-'

void printTableHeader(int numcolumns, int colunLength);
void printTableLine(int numcolumns, int colunLength);
void printTableRow(int numcolumns, int colunLength,const char *rowData[]);

#endif


