#include <iostream>
#include <cstdio>
main()
{
enum color_t { RED, GREEN, YELLOW, MAXSTATE};
color_t status = RED;

for(; ;){
	switch(status){
		case RED:
		{
                    printf("red ");
		    status = GREEN;
                    break;		    
		}
		case GREEN:
		{
		    printf("green ");
		    status = YELLOW;
		    break;
		}
		case YELLOW:
		{
		    printf("yellow ");
		    status = MAXSTATE;
		    break;
		}
		case MAXSTATE:
		{
		    printf("crap! ");
	            break;
		}
	}
	if(status == MAXSTATE)
	{
	    break;
	}
}

return 0;
}
