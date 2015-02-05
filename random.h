/* Finlandia's uLib additions */

//Thanks stack overflow for 
//suggesting something besides jQuery
//for a change

int randint(){
	unsigned short lfsr = 0xACE1u;
	unsigned bit;

	unsigned rand()
	{
		bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
		return lfsr =  (lfsr >> 1) | (bit << 15);
	}
	return lfsr;
}
