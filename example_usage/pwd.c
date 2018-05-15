#!/usr/bin/cscript
#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	char cwd[1024];
	getcwd(cwd, sizeof(cwd));
	printf("%s\n", cwd);
}
