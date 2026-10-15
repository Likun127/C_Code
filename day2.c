#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("请输入三个整数：");
	if (scanf("%d %d %d", &a, &b, &c) != 3) {
		return 1；
	}

	if (a < b) { int t = a; a = b; b = t; }
	if (a < c) { int t = a; a = c; c = t; }
	if (b < c) { int t = b; b = c; c = t; }

	printf("从大到小：%d %d %d\n", a, b, c);
	return 0;
}
