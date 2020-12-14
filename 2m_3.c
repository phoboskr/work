#include <stdio.h>
struct employee_info 
{
	unsigned char id[20];
	unsigned char name[20];
	int child_num;
	int pay;
};

main()
{
  int i,sz;

  struct employee_info eif[4];
  
  for(i = 0; i< 4; i++)
  {
	  printf(">> 사원번호? ");
	  scanf("%s",eif[i].id);
	  
	  printf(">> 이름? ");
	  scanf("%s",eif[i].name);

 	  printf(">> 자녀수? ");
	  scanf("%d",&eif[i].child_num);

 	  printf(">> 기본급? ");
	  scanf("%d",&eif[i].pay);

  	  printf("사원번호 : %s, 이름 : %s, 자녀수:%d 명, 기본급: %d원\n",eif[i].id,eif[i].name,eif[i].child_num,eif[i].pay);
  }
}