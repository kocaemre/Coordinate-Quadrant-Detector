// 2200003637 - Emre KOCA 
#define _CRT_SECURE_NO_WARNINGS //i am using visiual studio so i need to write in order to running scanf functions
#include <stdio.h> // this is library for printf or etc.. functions
int main(void) 
{
	int x, y; //this is my integers x means x-axis,y means y-axis
	printf("Enter x value of a point > "); //they are my printf and scanf functions for get information about x and y
	scanf("%d", &x);
	printf("Enter y value of the point > ");
	scanf("%d", &y);
	if (x > 0 && y > 0)                     // this is my function in order to calculate x and y cordinates
		printf("The point (%d,%d) is on Q1\n\n\n", x, y);
	if (x < 0 && y > 0)
		printf("The point (%d,%d) is on Q2\n\n\n", x, y);
	if (x < 0 && y < 0)
		printf("The point (%d,%d) is on Q3\n\n\n", x, y);
	if (x > 0 && y < 0)
		printf("The point (%d,%d) is on Q4\n\n\n", x, y);
	if (x == 0 && y == 0)
		printf("The point (%d,%d) is on origin\n\n\n", x, y);
	else if (x == 0 )
		printf("The point (%d,%d) is on y-axis\n\n\n", x, y);
	else if (y == 0)
		printf("The point (%d,%d) is on x-axis\n\n\n", x, y);
	printf("Enter x value of a point > "); //they are my printf and scanf functions for get information about x and y
	scanf("%d", &x);
	printf("Enter y value of the point > ");
	scanf("%d", &y);
	if (x > 0 && y > 0)                     // this is my function in order to calculate x and y cordinates
		printf("The point (%d,%d) is on Q1\n\n\n", x, y);
	if (x < 0 && y > 0)
		printf("The point (%d,%d) is on Q2\n\n\n", x, y);
	if (x < 0 && y < 0)
		printf("The point (%d,%d) is on Q3\n\n\n", x, y);
	if (x > 0 && y < 0)
		printf("The point (%d,%d) is on Q4\n\n\n", x, y);
	if (x == 0 && y == 0)
		printf("The point (%d,%d) is on origin\n\n\n", x, y);
	else if (x == 0)
		printf("The point (%d,%d) is on y-axis\n\n\n", x, y);
	else if (y == 0)
		printf("The point (%d,%d) is on x-axis\n\n\n", x, y);
	printf("Enter x value of a point > "); //they are my printf and scanf functions for get information about x and y
	scanf("%d", &x);
	printf("Enter y value of the point > ");
	scanf("%d", &y);
	if (x > 0 && y > 0)                     // this is my function in order to calculate x and y cordinates
		printf("The point (%d,%d) is on Q1\n\n\n", x, y);
	if (x < 0 && y > 0)
		printf("The point (%d,%d) is on Q2\n\n\n", x, y);
	if (x < 0 && y < 0)
		printf("The point (%d,%d) is on Q3\n\n\n", x, y);
	if (x > 0 && y < 0)
		printf("The point (%d,%d) is on Q4\n\n\n", x, y);
	if (x == 0 && y == 0)
		printf("The point (%d,%d) is on origin\n\n\n", x, y);
	else if (x == 0)
		printf("The point (%d,%d) is on y-axis\n\n\n", x, y);
	else if (y == 0)
		printf("The point (%d,%d) is on x-axis\n\n\n", x, y);
	printf("Enter x value of a point > "); //they are my printf and scanf functions for get information about x and y
	scanf("%d", &x);
	printf("Enter y value of the point > ");
	scanf("%d", &y);
	if (x > 0 && y > 0)                     // this is my function in order to calculate x and y cordinates
		printf("The point (%d,%d) is on Q1\n\n\n", x, y);
	if (x < 0 && y > 0)
		printf("The point (%d,%d) is on Q2\n\n\n", x, y);
	if (x < 0 && y < 0)
		printf("The point (%d,%d) is on Q3\n\n\n", x, y);
	if (x > 0 && y < 0)
		printf("The point (%d,%d) is on Q4\n\n\n", x, y);
	if (x == 0 && y == 0)
		printf("The point (%d,%d) is on origin\n\n\n", x, y);
	else if (x == 0)
		printf("The point (%d,%d) is on y-axis\n\n\n", x, y);
	else if (y == 0)
		printf("The point (%d,%d) is on x-axis\n\n\n", x, y);
	
	





	return 0;
}