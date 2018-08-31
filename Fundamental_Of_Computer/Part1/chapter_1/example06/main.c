/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  指针变量的强制转换与普通变量的强制转换比较
 *
 *        Version:  1.0
 *        Created:  2018年08月31日 16时17分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
    int a = 10;
    double *p = (double *)&a;
    printf("%f\n",*p);
    printf("%f\n",((double)(a)));
    return 0;
}

