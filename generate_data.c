#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include "msort.h"
int randNum()
{
    int i;
    int n;
    scanf("%d",&n);
    double *arrDbl = (double *)malloc(sizeof(double)*n);
    srand((unsigned)time(NULL));/*播种子*/
    for(i = 0; i < n; i++)
    {
        *(arrDbl+i) = (double)(rand()%900+100)/100;/*产生100以内的随机整数*/
    }
    printf("before:\n");
    for(i=0;i<n;i++)
    {
        printf("%.2f  ",*(arrDbl+i));
    }
    printf("\nafter:\n");
    msort(arrDbl,0,n-1,sizeof(double), cmp_double);
    for(i=0;i<n;i++)
    {
        printf("%.2f  ",*(arrDbl+i));
    }
    return 0;
}
