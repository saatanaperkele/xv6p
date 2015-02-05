/* tiny little fortune giver
 * until I get a more complex filesystem
 * in which things are organized into directories
 */
#include "random.h"
#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
	string first = "A bird in the hand is worth two in the bush";
	string second = "When in doubt, hack it together with perl";
	string third = "The openbsd crowd is a bunch of masturbating monkeys\n  ~Linux Torvalds";
	string fourth = "There will be no reason to use Linux once the Hurd is out, which should be soon\n ~Random MAiling List participant, 1992";
	const char *fortunes[] = {first, second, third, fourth};
	if(argc < 2){
		printf(1, "Usage: fortune number\n");
		exit();
	}
	int genargint = *argv[1] - '0';
	printf(1, "%s\n", fortunes[genargint]);
	exit();
	return 0;
}
