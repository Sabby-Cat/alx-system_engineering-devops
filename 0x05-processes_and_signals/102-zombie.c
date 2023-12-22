#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
/**
 * infinite_while - function runs forever and returns nothing
 * Return: 0
 */
int infinite_while(void)
{
	while (1)
		sleep(1);
	return (0);
}

/**
 * main - entry to program that makes 5 zombie process
 * Return: 0
 */
int main(void)
{
	int zom;
	pid_t pid;

	for (zom = 0; zom < 5; zom++)
	{
		pid = fork();
		if (!pid)
			break;
		printf("Zombie process created, PID: %i\n", (int)pid);
	}
	if (pid != 0)
		infinite_while();
	return (0);
}
