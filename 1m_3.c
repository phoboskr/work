#include <stdio.h>
main()
{
  int input = 0;
  char *result ="상반기";
  
  printf("월(1~12) 입력: ");
  scanf("%d",&input);
  result = (input <= 6) ? "상반기":"하반기";
  printf(">> %d월은 %s입니다.",input,result);
}