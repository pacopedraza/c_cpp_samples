/* pointerstep.c -- Demonstrates steping through an *
 * array of structures using pointer notation
 */

#include <stdio.h>

#define MAX 4

/* Define a structure, then declare and initialize */
/* an arrey of 4 structures */

struct part {
    short number;
    char name[12];
} data[MAX] = { {1, "Name1"},
                {2, "Name2"},
		{3, "Name3"},
		{4, "Name4"}
		};
/* Declare a pointer to type part, and a counter variable. */

struct part *p_part;
int count;

int main ( void )
{
    /* Initialize the pointer to the first array element. */

    p_part = data;

    /* Loop through the array, incrementing the pointer */
    /* with each iteration. */
    for (count = 0; count < MAX; count++)
    {
        printf("At address %p: %d %s\n", p_part, p_part->number,
		p_part->name);
	p_part++;
    }

    return 0;
}

