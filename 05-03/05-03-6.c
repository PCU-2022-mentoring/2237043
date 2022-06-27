// 06.
#include <stdio.h>

int main(void)
{

	int  n = 10;
  printf("\n\n");
	printf("\n");


	int i,j;

	for (i=1;i<=n;i++){

		for (j=i;j>0;j--)    

	       printf("*");

	    for (j=n-i; j > 0; j--)    

	       printf(" ");

	    for (j = n-i; j >= 0; j--)

	      printf("*");
		printf("\n");
	  }

	for (i=1;i<=n;i++){

		for (j = n-i; j > 0; j--)    

			printf(" ");

		for (j=i;j>0;j--)    

	        printf("*");

		for (j=i-1;j>0;j--)    

	        printf(" ");

		for (j = n-i; j >= 0; j--)    

	        printf("*");

		printf("\n");
	}
}