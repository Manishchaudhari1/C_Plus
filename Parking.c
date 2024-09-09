#include<stdio.h>
#include<conio.h>
int  Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void showDetail();
int nor=0,noc=0,nob=0,amount=0,count=0;
void main()

 {
  clrscr();
  switch(Menu())
  {
   case 1:
	     Bus();
	     break;
   case 2:
	     Cycle();
	     break;
   case 3:
	       Riksha();
	       break;
   case 4:
	     showDetail();
	     break;
   case 5:
	     Delete();
	     break;

   default:
   printf("\nInvalid Choice");
  }
  getch();
}
 int Menu()
{
  int ch;
 printf("\n Enter Bus");
 printf("\n Enter Cycle");
 printf("\n Enter Riksha");
 printf("\n Show status");
 printf("\n DELETE DATE");
 printf("\n Exit");
 printf("\t\t\t\t\tEnter your choice");
 scanf("%d",&ch);
 return(ch);
}
 void Delete ()
{
  nob=0;
  noc=0;
  nor=0;
  amount=0;
  count=0;
}
 void showDetail()
{
  printf("\n Number of Bus =%d",nob);
  printf("\n Number of Cycle =%d",noc);
  printf("\n NUmber of Riksha =%d",nor);
  printf("\n Total number of vhicle =%d",count);
  printf("\n Total amount =%d",amount);
}

 void Riksha()
{
  printf("\n Entery Successfull");
 nor++;
 amount=amount+50;
 count++;
}
 void Cycle()
{
 printf("\n Entery Successfull");
 noc++;
 amount=amount+20;
 count++;
}
void Bus()
{
  printf("\n Entery Successfull");
  nob++;
  amount=amount+100;
  count++;
}
