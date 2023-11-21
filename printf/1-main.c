#include <stdio.h>
#include "main.h"

int main(void)
{
int count;
char *q = "chi";
int p = 200;
char x = 'p';

count =_printf("Hello %d world %s",p, q);
printf("%d\n",count);

count =_printf("Hello world %d",p);
printf("%d\n",count);

count =_printf("Hello world %s",q);
printf("%d\n",count);

count =_printf("Hello world %c",x);
printf("%d\n",count);

return 1;
}
