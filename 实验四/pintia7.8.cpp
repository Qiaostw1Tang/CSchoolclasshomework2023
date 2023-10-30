#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[1000];
	gets(a);
	for(int i = strlen(a) - 1;i >= 0;i--){
	printf("%c", a[i]);}
	return 0;
}
