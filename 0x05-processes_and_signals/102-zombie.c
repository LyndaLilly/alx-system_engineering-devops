#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * infinite_while - this si the infinite loop.
 * Return: 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * create_process - this creates processes
 * anf echoes PIF
 */
void create_process(void)
{
	int mn = fork();

	if (mn == 0)
	{
		printf("Zombie process created, PID: %d\n", getpid());
		exit(0);
	}
}

/**
 * main - this creates 5 zombies
 * Return: 0.
 */
int main(void)
{
	create_process();
	create_process();
	create_process();
	create_process();
	create_process();
	return (infinite_while());
}
