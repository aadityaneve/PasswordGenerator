#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n,i,r;
	char* str;
	
	char ch[] = 
	{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q',
	'R','S','T','U','V','W','X','Y','Z',
	'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',
	'r','s','t','u','v','w','x','y','z',
	'0','1','2','3','4','5','6','7','8','9',
	'~','!','@','#','$','%','^','&','*','(',')','[',']','{','}',':',';','<',
	'>','?','/',','};
	
	printf("\nEnter length of password : ");
	scanf("%d",&n); //suppose 12 character password
	
	str = malloc(sizeof(char)*n+1);
	
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		r = rand()%84;
		str[i] = ch[r]; //store Rth character in our string
	}
	
	printf("\nGenerated password is : %s",str);
	
	return 1;
}