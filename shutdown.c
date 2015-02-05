#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
//#include "defs.h"

int main(void){
	printf(1, "[xv6] Shutting down system\n");
	halt();
	return 0;

}
