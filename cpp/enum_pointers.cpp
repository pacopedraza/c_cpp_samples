#include <iostream>
#include <cstdio>


enum color_t {RED, GREEN, YELLOW, MAXSTATE};
void per_red(color_t& s)
{
    printf("Red");
    s = GREEN;
}

void per_yellow(color_t& s)
{
    printf("Yellow");
    s = MAXSTATE;
}

void per_green(color_t& s)
{
    printf("Green");
    s = YELLOW;
}

typedef void(*Permu)(color_t&);

Permu machine[MAXSTATE] = {per_red, per_green, per_yellow};

int main()
{
    color_t status = RED;
    
    for(;;)
    {
        machine[status](status);
	if (status == MAXSTATE) break;
    }
    return 0;
}

