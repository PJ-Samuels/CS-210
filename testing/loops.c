#include <stdio.h>
#include <limits.h>
#define  PI 3.141579

//char foo;

int main(void)
{
    unsigned foo;

    printf("An unassigned int has a maximum size of %u \n", UINT_MAX);
    printf("PI has the value%f\n", PI);
    printf("foo has a maximum size of %u \n", sizeof(foo));
    //int foo[6] = {0};
    //return 0;
    
}
