//Дан текст. Группы символов не разделённые пробелами (одним или несколькими) и не содержащие
//пробелов внутри себя будем называть словами. Подсчитать количество слов в данном тексте.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale.h>
int main()
{
	char c = 0;
	int k = 0, b = 1;
	printf("This programm can count the number of words (groups of characters not separated by spaces (one or more)\nand don't contain spaces within themselves). Please, enter a few words!\n\n");
	while ((c = getchar()) != '\n') {
		if ((b == 1) && (c != ' ') && (c != '\n'))
			k = k + 1;
		if ((c == ' ') || (c == '\n'))
			b = 1;
		else
			b = 0;

	}

	printf("\nAnswer: %d", k);
}
