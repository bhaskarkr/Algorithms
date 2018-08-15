#include <iostream>
using namespace std;
typedef struct node
{
	int data;
	struct node *next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
}NODE;
int main()
{
	NODE *first = new NODE(7);
	first->next = new NODE(1);
	first->next->next = new NODE(6);
	first->next->next->next = new NODE(9);
	NODE *second = new NODE(5);
	second->next = new NODE(9);
	second->next->next = new NODE(8);
	NODE *temp1=first,*temp2=second,*prev=NULL;
	int carry=0;
	while(temp1||temp2)//assuming first number is having more than or equal number of digits w.r.t second number
	{
		temp1->data=temp1->data+(temp2!=NULL?temp2->data:0)+carry;
		carry=temp1->data/10;
		temp1->data=temp1->data%10;
		prev=temp1;
		//cout<<temp1->data<<endl;
		temp1=temp1->next;
		temp2=(temp2!=NULL)?temp2->next:temp2;
		
	}
	if(carry>0)
		prev->next=new NODE(carry);
	temp1=first;
	while(temp1)
	{
		cout<<temp1->data<<" ";
		temp1=temp1->next;
	}
	cout<<endl;
	return 0;
}
