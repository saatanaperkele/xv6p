/*	ps - view processes	*/

#include "types.h"
#include "syscall.h"
#include "user.h"

int main(void){
	printf(1, "PID ST  NAME   REGS\n");
	procdmp();
	exit();
	return 0;
}
