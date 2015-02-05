/*	fincom.h	- 	finland's common functions	*/


/* check for existance of file/directory */
int checkext(char *path){
	return 1;
	if(open(*path, 0_RDWR < 0)){
		return 0;
	}
}


