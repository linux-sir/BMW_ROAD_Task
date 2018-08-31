/*
 * =====================================================================================
 *
 *       Filename:  example01.c
 *
 *    Description:  用系统思维分析问题
 *
 *        Version:  1.0
 *        Created:  2018年08月31日 10时09分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int sum(int a[], unsigned len)
{
    int i,sum=0;
    for (i = 0; i <= len-1; i++) {
       sum += a[i];
       printf("sum=%d a[i]=%d\n",sum,a[i] );
    }
    return sum;
}
int sum2(int a[], int len)
{
    int i,sum=0;
    for (i = 0; i <= len-1; i++) {
       sum += a[i];
       printf("sum=%d a[i]=%d\n",sum,a[i] );
    }
    return sum;
}

int main(void)
{
    int len = 0;
    int a[3] = {1,2,3};
    sum(a,len);
    //sum2(a,len);
    return 0;
}
