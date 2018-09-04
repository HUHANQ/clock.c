#include <stdio.h>
#include <time.h>

int mint(int t)
{
	int i;
        t = time(NULL);
	i = ((t + 28800) / 3600)%24;
	return i;
}

int min(int t)
{
	int i;
        t = time(NULL);
	i = (t / 60)%60;
	return i;
}

int s(int t)
{
	int i;
        t = time(NULL);
	i = t%60;
	return i;
}
