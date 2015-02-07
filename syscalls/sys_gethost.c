/*		System Call: sys_gethost.c	*/

char* sys_gethost(void){
	char *file[] = "/etc/hostname";
	if(open(*file, O_RDRW) < 0){
		char *hostname = "localhost";
		}
	
	//TODO: Open the file if it's found
	return *hostname;
}
