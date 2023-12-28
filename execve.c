#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;
	char *const argv[] = { "/simple_shell/ls", NULL };

	pid = fork();
	if (pid == 0)
	{
		perror("fork");
		return 1;
	}
	else if (pid == 0)
	{
		int val = execve("/simple_shell/ls", argv, NULL);
		if (val == -1)
		{
			perror("execve");
			return 1;
		}
	}
	else
	{
		wait(NULL);
		printf("finished with execve\n");
	}
	return 0;
}
