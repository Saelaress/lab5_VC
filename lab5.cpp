#include <iostream>
#include "testing.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	//////////// main area ////////////
	int i, M, sum;
	sum = 0;
	char string, text[20][81];
	char DOC[1621] = "";
	printf("Введите количество строк(максимально 21): ");
	scanf_s("%d", &M);
	getchar();
	// main 1
	if ((M > 21) || (M < 1)) {
		// main 2
		error_printf("Неверное количество строк");
		// main 3
		return 0;
	}
	
	for (i = 0; i < M; i++) {
			// main 4
		puts("Введите содержимое строки: ");
 		gets_s(text[i]);
		strlen(text[i]);
		if ((strlen(text[i]) > 81) || (strlen(text[i]) < 1)) {
			// main 5
			error_printf("Неправильное содержимое строки");
			return 0;
		}
	}
	printf("\n");
	
	//////////// second area ////////////
	for (i = 0; i < M; i++) {
		// second 1: change 12
		sum += strlen(text[i]);
	}
	// second 2: change 34
	for (i = 0; i < M; i++) {
		// second 3: change 56
		if (isalnum(text[i + 1][0])) {
			_strrev(text[i]);
			//second 4
			if (isalnum(text[i][0])) {
				_strrev(text[i]);
				strcat_s(DOC, text[i]); strcat_s(DOC, " ");
				strcat_s(DOC, text[i + 1]);
				i++;
			}
			// second 5
			else {
				_strrev(text[i]);
			}
		}
			strcat_s(DOC, text[i]);
			strcat_s(DOC, text[i + 1]);
	}
	
	//////////// third area ////////////
	DOC[sum] = '\0';
	char COD[1621] = "";
	strcpy(COD, DOC);
	COD[sum] = '\0';
	char* istr;

	// third 1
	char seps[] = "?!.";
	char* next_token;
	char* token;
	
		// third 2
		token = strtok_s(DOC, seps, &next_token);
		
		// third 3
		while (token != NULL) {	
			// third 4
			puts(token);
			token = strtok_s(NULL, seps, &next_token);
			// third 5
			istr = strstr(COD, token);
			printf("%s", COD[istr-token+1]);

		}

	return 0;
}