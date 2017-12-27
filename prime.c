/* Written by Caoimhe Tiernan
Input: N, the number we are finding primes until. e.g if N = 10 we will output 2,3,5 and 7
Output: All Prime numbers <= N

*/

#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100


//To do, Scan in N
//To do Make array of Odd numbers and 2 up to N
//To do get % each entry for each odd number

int main(void)
{
int a[MAX_SIZE], hold;
int i = 1, start_index, j = 0, c = 0, N;


printf("This program finds prime numbers up until a certain number. Please Enter Number:");
scanf("%d",&N);
// Check to see if N is within array sizeof

if(N > MAX_SIZE)
{
	printf("Error. Number is too big. PLease enter number less than %d",MAX_SIZE);
}




//Need array of all numbers from 2 up to N
a[0] = 2;

while(i<N-1)
{
   a[i] = a[i-1] + 1;
   i++;
}
//need to get a[i]%a[start_index] if == 0 then the number isn't a prime

// chooses what number to divide by and saves number from being % by itself
for(start_index = 0; start_index < N/2; start_index++)
   {
      for(j=1+start_index; j < N-1; j++)
      {
	// need to get rid of not prime

         if(a[j]%a[start_index] == 0) // if number one above the start index is divisible by the start index
         {
            for(c=j;c<N-1;c++  ) //The number at position j will be replaced by the next number
            a[c] = a[c+1];

         }
      }


   }

// loop to print out the prime numbers from array
i = 0;

while(a[i] != a[i+1])
   {
      printf("%d \n",a[i]);
      i++;
   }

printf("Please Enter 9 to exit\n");
scanf("%d",&hold);

return 0;
}
