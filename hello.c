#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("hello %d %s\n", argc, argv[argc-1]);
	return 0;
}
