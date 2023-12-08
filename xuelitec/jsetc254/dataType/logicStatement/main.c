#include <stdio.h>


/*状态码 */
enum STATUS_CODE 
{
  REGISTER = 1
  LOGIN,
  QUIT,
}
int main ()
{
 #if 0
   /*判断语句 */
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

#if 1
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

return 0;
}