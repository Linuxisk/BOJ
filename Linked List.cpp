#include <stdio.h>
#include <stdlib.h>
typedef struct _node
{
	int data;
	struct _node * next;
} Node;

int main(){
	int j;
	Node * head = NULL;
	Node * tail = NULL;
	Node * cur = NULL;
	
	Node * newNode = NULL;
	int readData;
	while(1){
		printf("�ڿ����Է�:");
		scanf("%d",&readData);
		if(readData<1)
			break;
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data=readData;
		newNode->next=NULL;
		if(head == NULL)
			head=newNode;
		else
			tail->next=newNode;
				
		tail=newNode;
		printf("�Է�:");
		scanf("%d",&j);
		if(j==1){
			printf("�ڿ����Է�:");
			scanf("%d",&readData);
			newNode = (Node*)malloc(sizeof(Node));
			newNode->data=readData;
			newNode->next=head;
			head=newNode;
				
	}
	}
	
	cur = head;
	printf("%d\n",cur->data);
	while(cur->next!=NULL){
		printf("������:%d\n",cur->data);
		cur=cur->next;
	}
		
}
