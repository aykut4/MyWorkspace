/*Creation and implementation of a custom function called
cube which returns the cube of an input integer value.*/


#include <stdio.h>


int cube(int number);

int main(void)
{
	int answer, number;
	
	printf("Enter an integer please..\n");
	scanf("%d", &number);

	answer = cube(number);

	printf("Cube of the entered number is %d", answer);

	return 0;
}


int cube(int number)
{
	int answer;
	answer = number * number * number;

	return answer;
}

