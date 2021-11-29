#include<stdio.h>
main()
{
	char c;
	printf("Enter the character:");
	scanf("%c",&c);
	if (c=='a'||c=='A'||c=='e'||c=='i'||c=='o'||c=='u'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("the character is vowel");
	}
	else
	{
		printf("the character is not a vowel");
	}
}
