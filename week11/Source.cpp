#include <stdio.h>
#include <string.h>

void changePosition(char*,char*);
void permutation(char*,int,int);

int main()
{
	char str[4] = "abc";
	int n = strlen(str);
	scanf_s("%s", str, 4);
	for (int i = 0; i < n; i++);
	{
		permutation(str, 0, n - 1); 
	}
	return 0;
}

void changePosition(char* n1, char* n2)
{
	char x;
	x = *n1;
	*n1 = *n2;
	*n2 = x;
}

void permutation(char* a, int b, int c)
{
	if (b == c)
	{
		printf("%s", a);	

	}
	else
	{
		for (int i = b; i <= c; i++)
		{
			changePosition((a + b), (a + i));
			permutation(a, b + 1, c);
			changePosition((a + b), (a + i));
		}
	}

		printf("\n");
}