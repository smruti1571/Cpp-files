#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character:");
	scanf("%c",&c);
	(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')?printf("The character is a VOWEL."):printf("The character is a CONSONANT.");
	return 0;
}
