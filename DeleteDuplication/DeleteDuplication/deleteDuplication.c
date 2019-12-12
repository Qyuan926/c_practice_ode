#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct ListNode {
	int val;
	struct ListNode *next;
};
typedef  struct ListNode  Node;


Node* deleteDuplication(Node* pHead)
{
	Node* pNode = pHead;
	Node* prev = NULL;
	while (pNode != NULL)
	{
		Node* pNext = pNode->next;
		int flag = 1;
		if (pNext != NULL&&pNode->val == pNext->val)
		{
			flag = 0;
		}
		if (flag)
		{
			prev = pNode;
			pNode = pNext;
		}
		else
		{
			while (pNext != NULL&&pNode->val == pNext->val)
			{
				pNext = pNext->next;
			}
			if (prev == NULL)
			{
				pHead = pNext;
			}
			else
			{
				prev->next = pNext;

			}
			pNode = pNext;
		}
	}
	return pHead;
}



int main()
{
	Node* n1 = (Node*)malloc(sizeof(Node));
	n1->val = 1;
	Node* n2 = (Node*)malloc(sizeof(Node));
	n2->val = 2;
	Node* n3 = (Node*)malloc(sizeof(Node));
	n3->val = 3;
	Node* n4 = (Node*)malloc(sizeof(Node));
	n4->val = 3;
	Node* n5 = (Node*)malloc(sizeof(Node));
	n5->val = 4;
	Node* n6 = (Node*)malloc(sizeof(Node));
	n6->val = 4;
	Node* n7 = (Node*)malloc(sizeof(Node));
	n7->val = 5;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = NULL;
	deleteDuplication(n1);
	return 0;
}