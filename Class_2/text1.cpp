/*
ʵ��һ������
ͷ�巨
*/
#include<iostream.h>
struct node {
	int data;
	node *next;
};
void main()
{
	node *head=NULL;
	for(int i=0;i<10;i++)
	{
		node *new_node=new node();
		new_node->data=i;
		new_node->next=head;
		head=new_node;
	}
	while(head->next)
	{
		//printf("%d\n",head->data);
		cout<<head->data<<"\n";
		head=head->next;
	}

}

/*
9
8
7
6
5
4
3
2
1
����һ�£�1,���ȴ�����һ��ͷhead =NULL  
		  2,����һ���ڵ��ʱ��new_node->next=head
		  3,head �ٴγ�Ϊhead ��head=new_node
*/