#include <stdio.h>
main()
{
  int input = 0;
  char *result ="��ݱ�";
  
  printf("��(1~12) �Է�: ");
  scanf("%d",&input);
  result = (input <= 6) ? "��ݱ�":"�Ϲݱ�";
  printf(">> %d���� %s�Դϴ�.",input,result);
}