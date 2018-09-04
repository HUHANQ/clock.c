#include <stdio.h>
#include <time.h>

void delay()
{
	long t1,t2;
	t1 = time(NULL);
		while(1)
		{
			t2 = time(NULL);
			if(t2 - t1 == 1)
				break;			
		}
}
