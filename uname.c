#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscall.h"
#include "fcontrol.h"

int main(void){
	char *kernelver = "xv6-rev7 a01p";
	printf(1, "xv6 ver. %s on %s host as root\n", kernelver, gethost());
	return 1;
	exit();
}

