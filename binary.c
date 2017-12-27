//Exercise 2 - Binary conversion
#include <stdio.h>
#define MAX_BITS 16  //Max bit length

int main(void)
{
  int N, Num, digit;
  int a[MAX_BITS];
  int i, n, hold;

printf("This is a decimal to binary converter. \n Please enter number beweet 0 and 32767 \n");
  scanf("%d",&N);
 if(N == 0)
 {
	 printf("0");
	 printf("\nEnter 9 to exit \n");
	 scanf("%d",&hold);
	 return 0;
 }

  if(N < 1 || N > 32767)
 {
	 printf("please enter number within range \n");
	 printf("\nEnter 9 to exit \n");
	 scanf("%d",&hold);
	 return 0;
 }

  // To do:  Read in value for N and validate its range
  Num = N;
  digit = 0;
    for (i=0; Num > 0; i++)  {
        digit = Num%2;
        Num = Num/2;
        a[i]= digit;
    }

    for (n = i-1; n>=0; n--) printf("%d",a[n]);


printf("\nEnter 9 to exit \n");

scanf("%d",&hold);

return 0;
}





