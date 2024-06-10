#include <stdio.h>

void main()
{
    int day, before_N_days, mod, res;
    scanf("%d %d",&day,&before_N_days);
    mod = before_N_days % 7;
    res = day - mod;
    if(res >= 0)
    printf("%d\n",res);
    else
    {
        res = res+7;
        printf("%d\n",res);
    }

}