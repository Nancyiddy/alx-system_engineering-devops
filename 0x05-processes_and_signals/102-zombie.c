#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infite_while - 1 sec delay function
 * Return: Always 0 on success, 1 on error
 */
int infite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - entry point
 * Return: Always 0 on success, 1 on error
 */
int main(void)
{
	pid_t pid;
	int i;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (pid == 0)
			exit(0);
		printf("Zombie process created, PID: %d\n", pid);
	}
	infite_while();
	return (0);
}
