#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

int main () {

	printf("original pid %d\n",getpid());
	int fork_id = fork();
	if ( fork_id != 0) {
		int q = fork();
		if ( q == 0 ) {
			sleep(3);
			printf(" i m the second child with my id %d and my parent id as %d\n" , getpid(), getppid() ) ;
		}
		else {
		
		printf("i m the parent with my id  %d\n", getpid() ) ;
	}
	}
	else {
		printf ( " i m the child with my parent id as %d and my id as %d\n", getppid(), getpid() );
	}
	
	
	
}
