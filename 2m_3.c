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
	  printf(">> �����ȣ? ");
	  scanf("%s",eif[i].id);
	  
	  printf(">> �̸�? ");
	  scanf("%s",eif[i].name);

 	  printf(">> �ڳ��? ");
	  scanf("%d",&eif[i].child_num);

 	  printf(">> �⺻��? ");
	  scanf("%d",&eif[i].pay);

  	  printf("�����ȣ : %s, �̸� : %s, �ڳ��:%d ��, �⺻��: %d��\n",eif[i].id,eif[i].name,eif[i].child_num,eif[i].pay);
  }
}