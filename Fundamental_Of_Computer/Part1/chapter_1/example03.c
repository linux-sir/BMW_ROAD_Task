/*
 * =====================================================================================
 *
 *       Filename:  example03.c
 *
 *    Description:  不同数据类型进行比较时的反常结果
 *
 *        Version:  1.0
 *        Created:  2018年08月31日 11时16分05秒
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
    int a = 0;
    unsigned int b = 1;
    int c = 1;
    int d = b -2;
    printf("a < b = %d\n",a < b );
    b = 0;
    printf("a(%d) < b(%u) = %d\n",a,b-1,a < b-1 );
    printf("b-1=%u,%d\n",b-1,b-1);
    return 0;
}

