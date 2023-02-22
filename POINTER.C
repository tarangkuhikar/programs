//pointer to pointer

#include<stdio.h>
int main()
{
int a=10;
int *p,**q,***r;
p=&a;
q=&p;
r=&q;

printf("value of a:%d\n",a);
printf("value of *p:%d\n",*p);
printf("value of **q:%d\n",**q);
printf("value of ***r:%d\n",***r);
return 0;
}
