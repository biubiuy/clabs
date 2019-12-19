#include<stdio.h>

#include<stdio.h>
void reverse(char s[])
{	if(s[0]!='\0')
	{	reverse(s+1);
		printf("%c",*s);
	}
}
main()
{
	char s[100]={'\0'};
	printf("请输入一个字符串：\n");
	gets(s);
	reverse(s);
	printf("\n");

}
