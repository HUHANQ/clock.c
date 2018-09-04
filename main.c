#include <stdio.h>
#include "clock.h"
#include <time.h>

void delay(); 

int main()
{
	int i, t;
	while(1)
	{
	t = time (NULL);
	i = (((t + 28800)/3600)/24)%7;
	switch(i)
	{	
		case 0:
		printf("星期四");
		break;
		
		case 1:
		printf("星期五");
		break;

		case 2:
		printf("星期六");
		break;

		case 3:
		printf("星期日");
		break;

		case 4:
		printf("星期一");
		break;
			
		case 5:
		printf("星期二");
		break;
		
		case 6:
		printf("星期三");
		break;	
	}
		printf("%d:%d:%d\n",mint(t = time(NULL)),min(t = time(NULL)),s(t 		= time(NULL)));
 		delay();
		system("clear");
	}
	return 0;
}
