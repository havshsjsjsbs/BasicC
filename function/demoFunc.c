#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"
/* 函数参数 ： 可以没有*/
/* 函数返回值：可以没有，没有的清空，需要写void， 如果有，返回你想返回的数据类型{ int | long | short | float | double } */

/* 什么叫API ： Application Programming Interface */

/* 函数的定义 */
#if 0
//case 1 : 没有参数，没有返回值
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}
#endif

#if 0
//case 2:有参数，没有返回值
/* 函数参数，一定有数据类型 */
void myAddNum1(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum = %d\n",sum);
}
#endif

#if 0
//case 3: 有参数，有返回值
/* 函数参数，一定有数据类型 */
int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum = %d\n",sum);
    return sum;
}

#endif

#if 0
/* 枚举 第一个是0，其余会自动补值 占四个字节 */
//枚举也是一种数据类型
typedef enum STAUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFATAL,
}STATUS_CODE;

/* 取别名 */
//typedef enum STATUS_CODE STATUS_CODE;  //这种可以
#endif

int main()
{
#if 0
    /* 函数的调用 */
    purchaseAppointThing();

    int num1 = 5;
    int num2 = 6;


    /* 函数的使用 */
    myAddNum1(num1 , num2);

    int totalSum = myAddNum2(num1 , num2);
    
    int guns = 10;
    if(totalSum > guns)
    {
        printf("get a gun\n");
    }
    else
    {
        printf("not geted\n");
    }
#endif
    // STATUS_CODE status;
    // int len = sizeof(status);
    // printf("len = %d\n", len);
    
    int num1 = 50;
    int num2 = 60;

    int sum = calculateAdd(50 , 60);
    printf("sum = %d\n",sum);

    int num3 = calculateSub(num1 , num2);
    printf("num3 = %d\n",num3);

    int amass = calculateMul(num1 , num2);
    printf("amass = %d\n",amass);

    int num4 = calculateDiv(num1 , num2);
    printf("num4 = %d\n",num4);




    
    
    return 0;
}