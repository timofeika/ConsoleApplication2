// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main(int argc, char* argv[])
{
	printf("arg = %s\n", argv[argc - 1]);
	vFileManager vm(argv[argc-1]);
	if (vm.vfmIsDirectory() == true)
	{
		printf("%s is directory\n", argv[argc - 1]);
		return	1;
	}
	if (vm.vfmIsOpen() == true)
		printf("File size is: %d bytes\n", vm.Length());
	else
		printf("Cannot open %s\n", argv[argc - 1]);
    return 0;
}

