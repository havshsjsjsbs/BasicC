#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 //数据类型对应的是存储空间

#if 0
 long  bigValue = 0;
 int len = sizeof(bigValue);
 printf("len: %d, a = %ld\n", len , bigValue);

short smallValue =0;
len = sizeof(smallValue);
printf("len: %d, a = %d\n", len , smallValue);

int age = 6;
 len = sizeof(age);
 printf("len= %d,a = %d\n",len,age);//打印出整数
 printf("hello world!\n");

 float weight =50.5; //浮点型
 len = sizeof(weight);
 printf("len= %d,weight=%f\n",len,weight);

 double weight2 = 50.5;
 len = sizeof(weight2);
 printf("len = %d,weight2 = %f\n",len,weight2);
#endif


#if 1
char sex = -1; 
int len = sizeof(sex);
printf("len : %d, sex = %c , sex = %d\n",len,  sex , sex);

char default_value = '7';
len = sizeof(default_value);
printf("len : %d, default_value  = %c , default_value = %d\n",len, default_value, default_value);


/*无符号和有符号的区别 */
unsigned char m_value = -2;
len = sizeof(m_value);
printf("len : %d, m_value = %c , m_value = %d\n",len, m_value, m_value);
#endif

// int val = 10;
// printf("val:%d\n", val);
// val++;// val = val+1;
// printf("val:%d\n", val);

// val--;
// printf("val:%d\n", val);


// ++val;// val = val+1;
// printf("val:%d\n", val);

// --val;
// printf("val:%d\n", val);

// val = val+100;//val +=100
// printf("val:%d\n", val);

// int m_value = 10;
// int discuss = m_value /3 ;
// int remainder = m_value % 3;
// printf("discuss:%d\n",discuss);
// printf("remainder:%d\n",remainder);


// int randomVal = rand();
//  printf("randomVal: %d\n",randomVal);

// //中奖率25%
// int lotteryRate = randomVal % 4; //余数一直都是[0 -3]
//  printf("lotteryRate: %d\n",lotteryRate);


// int a = 5*2;//5<<1
// printf("a:%d\n", a);
// a <<= 1;
// printf("a:%d\n", a);

// int val = 51;
// int orVal = val | 7;
// int andVal = val &2;
// printf("orVal:%d\n", orVal);
// printf("andVal:%d\n", andVal);

// int notVal =! val;//任何一个非零的数，取非都是1
// printf("notVal:%d\n", notVal);


// char *ptr = (char*)malloc(sizeof(char)*10);
// if(!ptr)//ptr如果是null，!ptr则是1
// {

// }

// /*且或非*/
// int condition1 = 1;
// int condition2 = 6;

// /* 或：只要有一个条件满足，就返回1 */
// if( (condition1==1) || (condition2==5))
// {
//     printf("hello world!\n");
// }
// else
// {
//   printf("not hello world!\n");
// }

// /*且：两边都被满足，就返回1，否则返回0 */
// if( (condition1==1) && (condition2==5))
// {
//     printf("hello world!\n");
// }
// else
// {
//   printf("not hello world!\n");
// }

/*运算符： 双目运算符 & 三目运算符 */
/*双目运算符 */
// int a = 7 + 8;

/* */
int num1  = 10;
int num2  = 30;

/*三目运算符 */
int num3  =  (num1 > num2) ? 100 : 666;  //如果num1>num2, 则100，否则666
printf("num3: %d\n",  num3);

return 0;
}