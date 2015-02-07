/*	System Call: sys_curdir 	*/

char* sys_curdir(int action, char *newPWD){
	// action 1: return current
	// action 2: set new one
	if(action == 1){
		return "/";
	}
	if(action == 2){
	//need a manner of storing variables 
	//within the kernel
		return *newPWD;
	}
