//Lab 9 Q1
// written by Caoimhe Tiernan

// This program counts the words in a string inputed by a user

#include <stdio.h>
#define MSG_SIZE 100

int main(void)
{

char msg[MSG_SIZE+1], hold;
int i=0, numWords = 0;

//User enters message

printf("This program counts the words in a string inputed by a user. A word is a sequence of characters not seperated by a space\n");
printf("Please enter message less than %d words \n",MSG_SIZE);

fgets(msg,MSG_SIZE,stdin);


//Loop goes through message checking for words
	do
	{

		if((msg[i] == '\n' && numWords == 0)) break; // checks if message is empty

		if(msg[i] == ' ' && msg[i-1] != ' ') // checks if character before was not a space
		{
			numWords++;
		}

		if(msg[i] == '\0' && msg[i-1] != ' ')    // checks if character before null was not a space
      {
         numWords++;
         break;
      }
      i++;
   }
   while(i<MSG_SIZE+2); // going through full arRAY

printf("There are %d words in this message",numWords);

printf("\nPlease enter K to exit\n");
scanf("%c",&hold);

return 0;

}




