#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


	int running = 1;
	while(running == 1){

		char userInput[255];
		char exitString[] = "close\n";

		printf("$_ ");
		fgets(userInput, 255, stdin);

		int isExit = strcmp(userInput, exitString);

		if(isExit == 0){
			running = 0;
			break;
		}
		else{
			system(userInput);
		}
	}

	printf("Thanks for playing\n");

}
