#include <stdio.h>

int main(void)
{
  printf("Open Source SW Project\n");
  printf("First Github Training\n");
  printf("2014244013 Daeyeon Noh\n");
  printf("2012244072 TaeHun Lee\n");
  printf("수학재밌는수\n");

  int x =0, y=0;

  printf("더하기 입력 : ");
  scanf("%d", &x);
  scanf("%d", &y);
  int result = 0;

  result = x+y;

  printf("더해진 수는 %d 입니다.", result);

  return 0;
}
