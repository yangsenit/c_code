/*
实现一个链表，
头插法
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
解释一下，1,首先创建了一个头head =NULL  
		  2,再来一个节点的时候，new_node->next=head
		  3,head 再次成为head ，head=new_node
*/