#include <stdio.h>

/* 모든 명령줄 인수와 환경 변수를 프린트한다. */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);

	exit(0);
}
