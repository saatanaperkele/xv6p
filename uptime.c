/*
 * uptime.c
 * gets system uptime in ticks
 * and prints it
 */

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int main(int argc, char *argv[]){
	int uptim, uptva;
	uptim = uptime() / 6000;
	uptva = uptime() / 100;
	printf(1, "System up %d minutes (%d seconds) \n", uptim, uptva);
	exit();
	return 0;
}

