#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

	time_t now = time(NULL);
	struct tm *now_s = localtime(&now);

	if(now_s == NULL)
	return EXIT_FAILURE;

	printf( "%02d:%02d:%02d\n", now_s->tm_hour, now_s->tm_min,now_s->tm_sec);

	if(now_s->tm_hour>1 && now_s->tm_hour<=11)
	{
		printf("\n\nHi there, Breakfast?\n\n" );
	}

	else if(now_s->tm_hour>11 && now_s->tm_hour<=16 )
	{
		printf("\nHi, Lunch?\n\n");
	}

	else if(now_s->tm_hour>16 && now_s->tm_hour<=18 )
	{
		printf("\nHi, Coffee?\n\n");
	}
	else
	{
		printf("\nHi, Dinner?\n\n");
	}
	return EXIT_SUCCESS;
}

