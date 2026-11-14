//call by reference
#include<stdio.h>
struct name 
{
	int x,y;
};
main()
{
	struct name e={1,2};
	struct name *p2=&e;
	printf("\n%d %d",p2->x,p2->y);
	//--p2->x;
	printf("\n%d %d",e.x,e.y);
	++(++p2)->y;
}
