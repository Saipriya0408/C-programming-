#include<stdio.h>
int main()
{
int q1=2,q2=3,q3=1,total,balanceamount,mango_price=200;
int grapes_price=400,banana_price=350,man,gra,ban;
printf("\tNational super market\n \n");
printf("time:2.00pm\n \n");
printf("date:23/02/2024\n \n");
printf("------------------------------\n");
man=mango_price*q1;
gra=grapes_price*q2;
ban=banana_price*q3;
printf("1.mango:\t%d*%d=%d\n",mango_price,q1,man);
printf("2.grapes:\t%d*%d=%d\n",grapes_price,q2,gra);
printf("3.banana:\t%d*%d=%d\n",banana_price,q3,ban);
total=man+gra+ban;
printf("-------------------------------\n");
printf("\tThe total cost=%d\n \n",total);
printf("-------------------------------\n");
balanceamount=2000-total;
printf("The balance amount=%d",balanceamount);
return 0;
}