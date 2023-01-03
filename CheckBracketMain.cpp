#define _CTR_SECURE_NO_WARNINGS
#include "ArrayStack.h"

bool CheckMatching(const char* filename) {
	FILE* fp = fopen(filename, "r");
	FILE* fp;
	fopen_s(&fp, filename, "r");

	if (fp == NULL)
		printf("Error 파일이 존재하지 않습니다");

	int nLine = 1;
	int nChar = 0;
	ArrayStack stack;
	char ch;


		while ((ch = getc(fp)) != EOF) {
			if (ch == '\n') nLine++;
			nChar++;
			if (ch == '[' || ch == '(' || ch == '{')
				stack.push(ch);

			else if (ch == ')' || ch == ']' || ch == '}') {
				int prev = stack.pop();
				if ((ch == ']' && prev != '[')
					|| (ch == ')' && prev != '(')
					|| (ch == '}' && prev != '{')) break;
			}
		}
		fclose(fp);
		printf("[%s] 파일 검사결과:\n", filename);
		if (!stack.isEmpty())
			printf("Error! (라인수=%d, 문자수=%d)\n\n", nLine, nChar);
		else
			printf("  OK: (라인수=%d, 문자수=%d)\n\n", nLine, nChar);
		return stack.isEmpty();
	}

	//주함수
	void main()
	{
		CheckMatching("test.txt");
	}

