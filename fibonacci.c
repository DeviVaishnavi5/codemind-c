#include <stdio.h>
int main()
{
  int i, n,a= 0,b = 1,s;
  scanf("%d", &n);
  printf("%d %d ", a, b);
  s=a+b;
  for (i = 3; i <= n; ++i)
  {
    printf("%d ", s);
    a = b;
    b = s;
    s=a+b;
  }
}
