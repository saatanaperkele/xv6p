/*	
 *	mockup login
 *	testing strcpy mostly
 *	as well as toying with a login-based system
 */
#include "types.h"
#include "stat.h"
#include "user.h"

bool processLogins(string givenpw, string givenun){
	//instead of creating the whole /etc/passwd
	//setup yet, I'm first just going to hard
	//code in the correct login information,
	//which will be root:root
	//We're also going to create a loop that 
	//will run constantly, so that sh won't die
	//and login will re-execute if it does
	
	string correctun = "root";
	string correctpw = "root";
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
