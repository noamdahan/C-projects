
// exercsie 2
#include "pch.h"
#include <iostream>

void main()
{
	int i = 0, j = 0;
	char a[50];
	printf("pleas enter a string:\n");
	gets_s(a);
	for (j;a[i] != '\0';j++) {
		if (a[j] != ' ') {
			a[i] = a[j];
			i++;
		}
	}
	for (i = 0;a[i] != '\0';i = i + 2) {
		for (j = i;a[j - 1] != ' ';j++);
		for (; j > i;j--) {
			a[j] = a[j - 1];
		}
		if (a[i] > 'L')
			a[i + 1] = 'A';
		else
			a[i + 1] = 'B';
	}
	puts(a);
}