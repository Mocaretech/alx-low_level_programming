#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function prototype to determine target value */
int calc_target_value();

int main(void)
{
	char password[8];  /* Password length deduced to 8 for this example */
	int sum = 0;       /* Initialize sum of ASCII values */
	int i;             /* Loop counter */

	srand(time(NULL));

	int target = calc_target_value(); /* Placeholder for reverse-engineered target value */

	for (i = 0; i < 7; i++)
	{
		password[i] = (rand() % 78) + 48; /* Random printable ASCII char */
		sum += password[i];
	}
	password[7] = target - sum;

	password[8] = '\0';

	printf("%s\n", password);

	return 0;
}

int calc_target_value()
{

	    return (500); /* Example value, replace with actual target */
}
