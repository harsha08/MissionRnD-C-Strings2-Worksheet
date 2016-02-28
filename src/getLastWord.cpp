/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i = 0, j = 0, l1 = 0, l2 = 0, k = 0;
	char *tmp;
	while (str[i] == ' ' && str[i] != '\0')i++;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' ')
		{
			l1 = i;
			i++;
		}
		else if (str[i] == ' ')
		{
			while (str[i] == ' ' && str[i] != '\0')i++;
		}
		else if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{

			l2 = i;
			i++;
		}
		else
			i++;
	}
	tmp =  (char *)malloc(sizeof(char *)* (l2-l1+1));
	if (l1 < l2)
	{
		while (l1 <= l2)
		{
			tmp[k++] = str[l1++];
		}	
	}
	tmp[k] = '\0';
	return tmp;
	
}
