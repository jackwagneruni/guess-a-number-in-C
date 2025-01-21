#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void)
{
	char name[15];
	printf("What is your name?\n");
	scanf("%s", name);
	printf("Your name is %s\n", name);
	srand(time(NULL));
	int random_number = rand();
	printf("Random number: %d\n", random_number);


  return 0;
}
