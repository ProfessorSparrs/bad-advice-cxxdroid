#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ADVICE_COUNT 3 
 
int main()
{
	// array with dumb advice, arrays are like tables in a document file.

	char *advice[] = {
		"If you ever get cold, just stand in a corner for a bit. They are usually around 90 degrees.",
		"Having trouble with your diet? Chew on ice cubes to feel full without the calorie",
		"Feeling bad? How about trying to think happy positive thoughts!"
		// ... add as many as you like
	};
	// seed
	srand(time(0));

	// user interaction loop
	char input;
	do {
		printf("Press enter to get really shitty advice or press q to quit\n");
		input = getchar();
		getchar(); // This is to catch the newline character that follows the character entered by the user.
		if(input != 'q') {
			int randomIndex = rand() % ADVICE_COUNT;
			printf("%s\n", advice[randomIndex]); // print random piece of advice		
	} 
	} while(input != 'q');
	
	return 0;
}