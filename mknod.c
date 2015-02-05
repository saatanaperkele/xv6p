#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcontrol.h"

int main(int argc, char *argv[]){
	if(argc < 3){
		printf(1, "Usage: mknod dev ma mi\n");
		exit();
	}
	int minor = *argv[2] - '0'; /* subtracting ascii value to return int */
	int major = *argv[3] - '0';

	if(open(argv[1], O_RDWR) < 0){
		mknod(argv[1], major, minor);
		exit();
	}

	exit();
}

