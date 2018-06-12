#include "stdafx.h"
#include "Functions.h"


void mystrcpy(char *& dest, char * src)
{
	int len = strlen(src) + 1;
	dest = new char[len];

	strcpy_s(dest, len, src);
}

