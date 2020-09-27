#include <stdio.h>
#include <math.h>
int main(void) {
  int x;
  double a,b;
  float c;
  printf("M e n u\n");
  printf("1. Add (+)\n");
  printf("2. Subtract (-)\n");
  printf("3. Multiply (*)\n");
  printf("4. Divide (/)\n");
  printf("5. modulo (%%)\n");
  printf("Enter Number 1: ");
  scanf("%lf",&a);
  printf("Enter Number 2: ");
  scanf("%lf",&b);
  printf("Seclect Choice : ");  

  scanf("%d",&x);
  switch (x) 
  {
  case 1 :
   printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
  break;
  case 2 :
  printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
  break;
  case 3 :
  printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
  break;
  case 4 :
  if(a == 0 || b == 0)
  printf("Divide by Zero!!!");
  else
    printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
  break;
  case 5 :
  printf("%.1lf %% %.1lf = %1lf", a, b,fmod(a,b));
  break;
  default:
  printf("Error M e n u is not correct");
  }
  return 0;
}