#include <stdio.h>
#include "genlib.h"
#include "stdlib.h"
#include "simpio.h"

#define BUF_SIZE 100
#define LEVEL 100

int introduction();
int award();
int statistics_inquire_delete();
int show();

int a[LEVEL];

int main()
{
	introduction();
	award();
	statistics_inquire_delete();
	return 0;
}

int introduction()
{
	printf("Please enter the title of the draw activity:\n");
	char ch0[BUF_SIZE];
	fgets(ch0, BUF_SIZE, stdin);
	printf("Please set up the lottery project information:\n");
	char ch1[BUF_SIZE];
	fgets(ch1, BUF_SIZE,stdin);
	printf("%s",ch0);
	printf("%s",ch1);
	return 0;
}

int award()
{
	int level;
	printf("How many grades do you need for your awards?");
	level=GetInteger();
	printf("Please set the number of the 1 prize ~ %d prize\n",level);
	for(int i=1;i<=level;i++){
		a[i]=GetInteger();
	}
	return 0;
}

int statistics_inquire_delete()
{
	printf("Input:0-------Statistics of winning information.\n");
	printf("Input:1-------inquire winning information\n");
	printf("Input:2-------delete winninf information\n");
	int n;
	n=GetInteger();
	switch(n){
		case 1:	show();break;
		//case 2: delete();break;	
	}
	return 0;
}

int show()
{
	char s[100];
	FILE *fp0;
	fp0 = fopen("gt","r");
	fgets(s,100,fp0);
	fputs(s,stdout);
}
