/*		System Call: sys_nice.c	
 * 		Increases the priority of the process by int procamt
 *		as long as it doesn't exceed the maximum priority
 *		as defined in sched.c	[TODO: Implement better scheduler]
 */

void sys_nice(int pid, int amt){
	//TODO: deprecate priomax with kernel-level scheduling static int
	static int priomax = 10; //10 highest, 1 lowest
	int curPrioirity = *proc[pid]->priority;
	if((priomax - curPriority) >= 0){
		curPriority += amt;
		*proc[pid]->priority = curPriority;
	}

}
	
