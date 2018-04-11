#include "Proxy.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>

extern "C" unsigned int randData()
{
	struct timespec tsec;
	memset(&tsec,0,sizeof(tsec));
	clock_gettime(CLOCK_MONOTONIC,&tsec);
	srand(tsec.tv_sec*1000000+tsec.tv_nsec/1000);
	return rand()%100;
}
