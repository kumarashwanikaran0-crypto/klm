 //function with no argument and return value

 #include<stdio.h>
 #include<conio.h>
 int sum ();
 void main()
 {
 int t;
 clrscr();
 t=sum();
 printf("sum%d=",t);
 getch();
 }
 int sum ()
 {
 int a,b,c;
 printf(" enter any two number=");
 scanf("%d%d",&a,&b);
 c=a+b;
 return c;
 }