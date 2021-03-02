#include <stdlib.h>
#include <stdio.h>

int random367(int m, int n)
{
return m + (int) (drand48()*((double) (n-m+1)));
}

void main()
{
short int randState[3];  /* State of the pseudo random number gen */
for (int i=0; i<3; i++) {
    randState[i]=i;
}
seed48(randState);


}
