/*		System Call: sys_gethost.c	*/

#include "../types.h"
#include "../stat.h"
#include "../user.h"
#include "../fcontrol.h"
char* sys_gethost(void){
	char *file = "/etc/hostname";
	char *hostname = "localhost";
	if(open(file, 0) < 0){
		hostname = "filefound";
		}
	
	//TODO: Open the file if it's found
	return hostname;
}
