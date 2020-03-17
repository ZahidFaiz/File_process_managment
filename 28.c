#include <stdio.h>
#include <sys/types.h>
#include <sched.h>

 
int main()
{
    printf("Max = %d\n",sched_get_priority_max(SCHED_RR));
    printf("Min = %d\n",sched_get_priority_min(SCHED_RR));
    return 0;
}
