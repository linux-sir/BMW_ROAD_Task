/*
 * =====================================================================================
 *
 *       Filename:  overflow2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年08月31日 15时39分34秒
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
    int b = -1;
    int c = a/b;
    printf("%d\n",c);
    return 0;
}

