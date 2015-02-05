/*
 * Extended init
 *
 * In order of doing:
 * 1) Create /proc
 * 2) Populate /proc
 * 3) Create /dev
 * 4) Populate /dev
 * 5) Execute shell/login
 *
 */
#include "types.h"
#include "stat.h"
#include "user.h"

int makefs(char *dirname){
	printf(1, "[xv6] Creating %s \n", dirname);
	mkdir(dirname);
	//todo: implement vfs and procfs/devtmpfs support in kernel
	return 0;
}

int devnodes(){
	mknod("/dev/random", 1, 1);
	mknod("/dev/console", 1, 1);
	mknod("/dev/null", 1, 1);
	return 0;
}

int main(){
	makefs("/dev");
	makefs("/proc");
	devnodes();
	char *argas[] = {"sh", 0};
	printf(1, "[xv6] Starting shell: sh\n");
	exec("sh", argas);
	return 0;
}

