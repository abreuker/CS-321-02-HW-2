#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid;
	pid = fork();

	if(pid < 0)
	{
		fprintf(stderr, "Error: pid is less than 0\n");
		return -1;
	}
	else if(pid == 0)
	{
		return 0;
	}
	else
	{
		sleep(15);
		printf("Parent exiting.\n");
		return 0;
	}


}