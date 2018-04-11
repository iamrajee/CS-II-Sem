/* 
Program to check if one string is contained as substring in another 
Rajee, 19-Oct-2016
*/

#include <stdio.h>
#include <string.h>
int main()
{
	char small[100], big[200];
	char *p;
	int offset;

	printf("Enter the big string: ");
	scanf(" %[^\n]s", big);
  
	printf("Enter the small string: ");
	scanf(" %[^\n]s", small);

	p = strstr(big,small);

	if(p == 0)
	printf("%s is not contained in %s\n", small, big);
	else
	{
	offset = (int) (p - big);
	printf(" '%s' is contained in '%s', starting from position %d\n", small, big, offset);
	}

	return(0);
}



