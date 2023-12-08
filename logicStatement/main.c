#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*状态码 */
enum STATUS_CODE 
{
  REGISTER = 1,
  LOGIN ,
  QUIT 
};

/* 宏定义 */
/*代码规范 ：宏必须全部大写 */
#define COUNT_NUM 100
#define RANGE_NUM 200

int main ()
{
#if 0

      int  budget = 5000;

      int applephone = 8999;
      int mi14Pro = 4399;
      int  huaweiP60 = 6000;


   if (budget > applephone)
   {
        printf("get an applephone!\n");
   }
   else if (budget > mi14Pro)
   {
        printf("get an mi14Pro!\n ");
   }
  else  (budget > huaweiP60)
  {
      printf("get an huaweiP60!\n ");
  }
  
#endif

#if 0
    
    int  budget = 5000;
    int minbudget = 5500;
    int maxbudget = 8000;
    int applephone = 8999;
    int mi14Pro = 4399;
    int  huaweiP60 = 6000;

    if(budget < applephone ||  budget > mi14Pro)
    {
          printf ( "I am happy , get a phone");
    }
    else
    {
         printf("I am sad , no phone\n");
    }

      if(minbudget < budget ||  budget < maxbudget)
    {
          printf ( "success get a phone");
    }
    else
    {
         printf("error get a  phone\n");
    }

    if(minbudget < budget &&  budget < maxbudget)
    {
          printf ( "success get a phone");
    }
    else
    {
         printf("error get a  phone\n");
    }
#endif

#if 0
/*代码规范1 ： 一个函数尽量不要超过80行 最多不要超过120行。 */
/*坑1： 每一个擦色都有一个break:(注重需求) */
int choice = 0;
printf("请输入你的选项：");
scanf ("%d", &choice)
switch (choice)
{
case REGISTER:
{
    /*坑2 ：如果case里语句过多，一定要加上{}来包含 */
    printf("welcome to register \n");
    break;
}
case LOGIN:
   printf("welcome to login\n");
   break;

case QUIT:
   printf("welcome to quit\n");
   break;

default:
    printf ("input choice invalid\n");
    break;
}

#endif


#if 0
     srand(time(NULL));
      /* 循环 */
      /* for 循环 */
     
     /*代码规范 ： 循环不允许使用i */
     /*代码规范 ： 不允许使用魔鬼数字 */

     int randomNum =0;
      for(int idx = 0; idx < COUNT_NUM; idx++)
      {
          randomNum = rand () %RANGE_NUM +1 ;
           printf("randomNum:%d\n", randomNum) ;
      }
    



    /* 请你写一个100以内数 */
 
#endif


#if 1
/* while */


/* 编码规范： 变量尽量使用驼峰式命令 */

 int circleTimes = COUNT_NUM >> 1;
 int randomNum = 0;
 while (--circleTimes)//只要括号里不是0就继续， circleTimes-- 是先判断再运算；--circleTimes是先运算再判断
{
    
  randomNum = rand ()  % RANGE_NUM +1 ;
  printf("randomNum:%d\n", randomNum) ;
}

#endif
 return 0;
}