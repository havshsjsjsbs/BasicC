#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32

int main()
{

#if 0
    //1.指针怎么定义
    //基础数据类型
    /*建议（Tips）：定义变量（任意类型）记得初始化 */

    int a = 0;
    long b = 0;


    /*指针的定义*/
    int *p = NULL;
    return 0;
#endif
#if 0
    /* 指针的使用:指针内存存放的是某变量的地址 */
    /* 一级和二级指针 */
    int a = 5;

    int *p = &a;
    printf("a: %d\n", a);
    printf("&a: %p\n", &a);
    /* 非常重要 */
    printf("*(&a): %d\n", *(&a));

    printf("*p = %d\n", *p);
    printf("p = %p\n", p);

    printf("&p: %p\n", &p);
#if 0
/* 这个地方不对.*/
    int *ptr = &p;
    printf("p: %p\n", ptr);
#else 
    int **ptr = &p;
    printf("ptr:%p\n", ptr);
    printf("%p\n", *ptr);

    /* the most significant */
    printf("*(*ptr): %d\n", *(*ptr));


    int ***pptr = &ptr;
    printf("pptr: %p\n", pptr);
    printf("%p\n", *pptr);
    printf("%p\n", *(*pptr));
    printf("%d\n", *(*(*(pptr))));

#endif
   
#endif

#if 0
    /* 指针的特性：指针占用的内存大小是8个字节（64bit） 
        如果是32位的操作系统指针占用的内存大小是四个字节 */
    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n", len); 

    char p = 97;
    int len = sizeof(p);
    printf("len:%d\n", len); 

    char *ptr = &p;
    printf("%c\t%d", *ptr, *ptr);
    len = sizeof(ptr);
    printf("len: %d\n", len);

    int *ptrInt = &a;
    printf("*(&a):%d\n", *(&a));
    printf("*ptrInt:%d\n", *ptrInt);
    len = sizeof(ptrInt);
    printf("*len:%d\n", len);

#endif
#if 0
    /* 指针特性2：指针和字符串 */
    /* 字符串是区别于字符数组的 */

    char * ptr = "hello world";
    int len = sizeof(ptr);
    printf("len:%d\n", len);

    /* Q1：怎么获取字符串的长度 */
    int length = strlen(ptr);
    printf("length:%d\n", length);

    /* Q2: 字符数组的赋值 */
    char name[BUFFER_SIZE] = { 0 };
    strcpy(name, "zhangsan");
    //*name = "zhangsan";
    printf("name:%s\n", name);
#endif

    /* Q3: 字符串赋值 bug */
    char *ptr2 = NULL;

#if 1
    ptr2 = "zhangsan";
#endif
#if 1
    //strcpy(ptr2, "zhangsan");

    printf("ptr2:%s\n", ptr2);
#endif


    /* Q3: 字符串赋值 bug */
    char *ptr2 = NULL;

#if 0
    ptr2 = "zhangsan";
#else

    strcpy(ptr2, "zhangsan");
#endif
    printf("ptr2:%s\n",ptr2);
    
    /* 堆空间 */
    /* void *是一个万能指针 */
    char * ptr = (char *) malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr, "zhangsan");
    printf("ptr:%s\n",ptr);


    return 0;
}