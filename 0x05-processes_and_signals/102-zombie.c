#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>


/**
 * infinite_while - infinite while loop
 * Return: int
 */
int infinite_while(void)
{
	while (1)
		sleep(1);
	return (0);
}


/**
 * main - creates 5 zombie processes
 * Return: int
 */
int main(void)
{
	pid_t pid;
	char cnt = 0;

	while (cnt < 5)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
			cnt++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}
