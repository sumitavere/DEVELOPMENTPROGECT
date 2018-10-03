#include<stdio.h>
void main()
{
 int a,b,c;
 printf("\n Enter The value of A B C Numbers: ");
 scanf("%d %d %d",&a,&b,&c);
 if((a>b)&&(a>c))
 {
  printf("\nA is GRETEST\n");
 }
 else if((b>a)&&(b>c))
 {
  printf("\nB is GRETEST\n");
  }
 else
 {
  printf("\nC is GRETEST\n");
  }
}
