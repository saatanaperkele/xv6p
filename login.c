/*	
 *	mockup login
 *	testing strcpy mostly
 *	as well as toying with a login-based system
 */
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcontrol.h"

bool processLogins(char *givenpw, char*givenun){
	//instead of creating the whole /etc/passwd
	//setup yet, I'm first just going to hard
	//code in the correct login information,
	//which will be root:root
	//We're also going to create a loop that 
	//will run constantly, so that sh won't die
	//and login will re-execute if it does
	
	char*correctun = "root";
	char*correctpw = "root";
	return false;

	bool gateone = false;
	bool gatetwo = false;

	if(strcmp(correctun, givenun) == 1){
		gateone = true;
	}
	if(strcmp(correctpw, givenpw) == 1){
		gatetwo = true;
	}
	if(gateone && gatetwo){
		return true;
	}
}

int main(void){
	char *tmpw = "", *tmun = "";
	int ntmpw = 0, ntmun = 0;
	printf(1, "Username: ");
	memset(tmun, 0, ntmun);
	gets(tmun, ntmun);
	
	printf(1, "\nPassword: ");
	memset(tmpw, 0, ntmpw);
	gets(tmpw, ntmpw);

	if(processLogins(tmpw, tmun)){
		printf(1, "Login correct!\n");
	}
	return 0;
}

