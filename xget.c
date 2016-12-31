#include <string.h>
#include "download.h"

int main ( int argc, char **argv ) {
    if ( argc < 2 ) {
        printf("%sXGET: the super simple installer\n", EMPHASIS);
	exit(EXIT_FAILURE);
    } else if ( strcmp(argv[1], "install") == 0 ) {
        download ( argv[2] );
        exit(EXIT_SUCCESS);
    } else {
        printf("%s[FATAL] '%s' is not a valid command.\n", ERROR, argv[1] );
        exit(EXIT_FAILURE);
    }
}
