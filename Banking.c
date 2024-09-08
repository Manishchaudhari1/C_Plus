	       /* Banking system management*/
#include<stdio.h>
#include<conio.h>
int list();
void deposit();
void last();
void transfer();
void withdrow();
void checkdetail();

int totalamount=1000,amount,amo,tr,totaldeposit=0,totalwith=0,totaltr=0;
int acc;
char a[50];
void main()
{
   clrscr();
  printf("\nEnter Your Name ");
  gets(a);
  printf("\n Enter Your Account Number ");
  scanf("%d",&acc);
  while(1)
  {
    clrscr();
    switch(list())
  {
    case 1:
	     deposit();
	     totaldeposit+=amount;
	     break;

    case 2:
	     withdrow();
	     if(amo<=totalamount)
	     totalwith+=amo;
	     break;

    case 3:
	     transfer();
	     if(tr<=totalamount)
	     totaltr+=tr;
	     break;

    case 4:
	     checkdetail();
	     break;
    case 5:
	     clrscr();
	     last();
	     exit(0);
    default:
	 printf("\n invalid choice");
  }

    getch();
  }

}
int  list()
{
 int ch;
 printf("\n1. deposit amount");
 printf("\n2. withdrow amount");
 printf("\n3. transfer amount");
 printf("\n4. check detail's");
 printf("\n5. exit");
 printf("\n Enter your choice ");
 scanf("%d",&ch);
 return(ch);
}
void deposit()
{
printf("\n enter the amount do you want to deposit");
scanf("%d",&amount);
totalamount+=amount;
}
void withdrow()
{
 printf("\n enter the amount you wish to withdrow");
 scanf("%d",&amo);
 if(amo<=totalamount)
 totalamount-=amo;
 else
   printf("\n less amount withdrow is not passible");
}
void transfer()
{
 printf("\n enter the amount do you want to transger ");
 scanf("%d",&tr);
 if(tr<=totalamount)
   totalamount-=tr;
 else
    printf("\n less amount transfer is not possible");
}
void checkdetail()
{
  printf("\n totalamount =%d",totalamount);
  printf("\n total deposited amount =%d",totaldeposit);
  printf("\n total withdrown amount =%d",totalwith);
  printf("\n total transfer amount =%d",totaltr);
}
  void last()
{
  printf("\n ****************************************************\n");
  printf("\n Your Name :%s",a);
  printf("\n Account number is: %d",acc);
  printf("\n total amount =%d",totalamount);
  printf("\n total deposited amount =%d",totaldeposit);
  printf("\n total withdrown amount =%d",totalwith);
  printf("\n total transfer amount =%d",totaltr);
  printf("\n \n******************* Thanks***********");
}


