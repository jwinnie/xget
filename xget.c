
#include "install.c"
#include <string.h>

int main ( int argc, char **argv ) {
	printf( "%s\n", argv[1] );
	if ( strcmp (argv[1], "install\n") != 0 ) {
		install ( argv[2] );
	} else {
		printf("Sorry, command not available.");
	}
}
