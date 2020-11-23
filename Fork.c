#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

int main () {
	printf( "this is the id of this current process %d\n", (int)getpid() ) ;
	int fork_id = fork();
	if ( fork_id == 0 ) fork();
	printf("yess\n");
	
	
}
