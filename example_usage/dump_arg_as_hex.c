#!/usr/bin/cscript
#include<stdio.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	char c;
	for(i = 1; i < argc; i++ )
		for(j=0; (c=argv[i][j]); j++) 
			printf("argument %d, character %d, hex 0x%08X\n", i, j, c); 
}
