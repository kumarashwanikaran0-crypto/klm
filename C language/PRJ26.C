 //function with argument and return value

 #include<stdio.h>
 #include<conio.h>
 int sum (int x, int y);
 void main()
 {
 int a,b,t;
 clrscr();
 printf("enter any two number= ");
 scanf("%d%d", &a,&b);
 t=sum (a,b);
 printf("sum=%d",t);
 getch();
 }
 int sum (int x, int y)
 {
 int c;
 c=x+y;
 return c;
 }