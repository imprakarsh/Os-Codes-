#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

int main () {


	pid_t p = fork();
	if ( p == 0 ) {
		printf(" child ! id %d , parent id %d\n", getpid(), getppid()) ;
	}
	else {
		wait(NULL);
		printf("parent! id %d , chid id %d\n", getpid(), p ) ;
	}
	
	
	
}
