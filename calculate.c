#include<stdio.h>
#include<conio.h>
int k=0,result=0;
int menu()
{
 int ch;
 printf("\n1. add");
 printf("\n2. Sub");
 printf("\n3. mul");
 printf("\n4. div");
 printf("\n5. rim");
 printf("\n6. Clear");
 printf("\n7. Exit");
 printf("\n Enter Your choice ");
 scanf("%d",&ch);
 return(ch);
}
void add()
{
 int a,b;
 if(k)
 {
   printf("\n Enter a number ");
   scanf("%d",&a);
   result+=a;
   printf("\n Result =%d",result);
 }
  else
    {
       printf("\n Enter two number ");
       scanf("%d%d",&a,&b);
       result=a+b;
       printf("result =%d",result);
     }
 }
 void sub()
{
 int a,b;
 if(k)
 {
   printf("\n Enter a number ");
   scanf("%d",&a);
   result-=a;
   printf("\n Result =%d",result);
 }
 else
 {
    printf("\n Enter two number ");
    scanf("%d%d",&a,&b);
    result=a-b;
    printf("result =%d",result);
 }
 }

 void mul()
{
 int a,b;
 if(k)
 {
   printf("\n Enter a number ");
   scanf("%d",&a);
   result*=a;
   printf("\n Result =%d",result);
 }
 else
 {
    printf("\n Enter two number ");
    scanf("%d%d",&a,&b);
    result=a*b;
    printf("result =%d",result);
 }
 }

 void div()
{
 int a,b;
 if(k)
 {
   printf("\n Enter a number ");
   scanf("%d",&a);
   result/=a;
   printf("\n Result =%d",result);
 }
 else
 {
    printf("\n Enter two number ");
    scanf("%d%d",&a,&b);
    result=a/b;
    printf("result =%d",result);
 }
 }

  void rim()
{
 int a,b;
 if(k)
 {
   printf("\n Enter a number ");
   scanf("%d",&a);
   result%=a;
   printf("\n Result =%d",result);
 }
 else
 {
    printf("\n Enter two number ");
    scanf("%d%d",&a,&b);
    result=a%b;
    printf("result =%d",result);
 }
 }

 void main()
 {
  int l=0;
  while(1)
  {
    clrscr();
    printf("\n\n     old result =%d",result);
    switch(menu())
    {
       case 1:
	       add();
	       k=1;
	       break;
       case 2:
	       sub();
	       k=1;
	       break;

       case 3:
	       mul();
	       k=1;
	       break;
       case 4:
	       div();
	       k=1;
	       break;
       case 5:
	       rim();
	       k=1;
	       break;
       case 6:
	       Clear();
	       break;
       case 7:
	       l=1;
	       break;
      default:
			 printf("\n invalid choice");
  }
    if(l==1)
    break;
    getch();
 }
}
