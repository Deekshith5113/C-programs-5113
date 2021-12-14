#include<stdio.h>
main()
{
	int c;
	printf("Enter the character:");
	scanf("%c",&c);
	switch (c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':printf("It is a Vowel");
				break;
		default:printf("It is a consonant");
			
	}
}
