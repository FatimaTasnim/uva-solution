#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
char *strrev(char *str)
{
	char *p1, *p2;

	if (!str || !*str)
		return str;
	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return str;
}
int main()
{
	char ch[1000], st[1000], st1[1000];
	string chr;
	char demo;
	int i, j, flag;
	while (gets(ch))
	{
		chr = ch;
		if (chr == "DONE")
			break;
		j = 0; flag = 0;
		for (i = 0; ch[i]; i++){
			if (ch[i] >= 65 && ch[i] <= 90 || ch[i] >= 97 && ch[i] <= 122)
			{
				if (ch[i] >= 65 && ch[i] <= 90)
					demo = ch[i] + 32;
				else
					demo = ch[i];
				st[j] = demo;
				j++;
			}
		}st[j] = '\0';
		for (i = 0; st[i]; i++)
			st1[i] = st[i];
		st1[i] = '\0';
		strrev(st);
		for (i = 0; st[i]; i++){
			if (st[i] != st1[i]){
				//printf("Uh oh..\n");
				flag++;
				break;
			}
		}
		if (flag==0)
			printf("You won't be eaten!\n");
		else
			printf("Uh oh..\n");
	}
	return 0;
}
//IT IS ACCEPTED :)
