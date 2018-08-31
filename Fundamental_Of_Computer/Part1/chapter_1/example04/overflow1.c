/*
 * =====================================================================================
 *
 *       Filename:  overflow1.c
 *
 *    Description:  检测溢出
 *
 *        Version:  1.0
 *        Created:  2018年08月31日 15时38分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void)
{
    int a = 0x80000000;
    int b = a/-1;
    printf("%d\n",b);
    return 0;
}
