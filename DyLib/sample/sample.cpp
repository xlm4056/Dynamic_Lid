#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <dlfcn.h>

int main(int argc,char** argv)
{
	void * handle=NULL;
	char * error =NULL,*filepath="../libs/interface.so";
	unsigned int (*randData)();
	handle=dlopen(filepath,RTLD_LAZY);

	error=dlerror();
	if(!handle&&error)
	{
		printf("%s\n",error);
		dlclose(handle);
		return -1;
	}
	randData=(unsigned int (*)())dlsym(handle,"randData");
	error=dlerror();
	if(error)
	{
		printf("%s\n",error);
		dlclose(handle);
		return -1;
	}
	printf("randData:%d\n",randData());
	
	dlclose(handle);
	return 0;
}
