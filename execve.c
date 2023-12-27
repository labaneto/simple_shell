#include <stdio.h>
#include <unistd.h>
/**
 * main - the entry point
 *
 * Description - finding the pid
 * @parameter - a and b
 * Return: Always 0 (success)
 */
int main(void)
{
        int a = 8, b = 7;
	pid_t pid;
        int Sum = (a + b);

        printf("sum of a + b = %d\n", Sum);
	pid = getpid();
	printf("pid is %u\n", pid);

        return (0);
}
