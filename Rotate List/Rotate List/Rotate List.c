#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 struct ListNode {
	int val;
	struct ListNode *next;
	
};


typedef struct ListNode  Node;
struct ListNode* rotateRight(struct ListNode* head, int k){
	if (head == NULL || head->next == NULL)
		return head;
	size_t length = 1;
	Node* Tail = head;
	while (Tail->next != NULL)
	{
		Tail = Tail->next;
		length++;
	}
	Tail->next = head;
	Node* Head = head;
	size_t Actuallyk = k%length;
	//����ƶ��ĳ��ȴ��������ȣ�����Ҫȡ�����ѭ��ʱ�䣬����ȡ�࣬�������ɸ��������ѭ��
	//If the length of the movement is greater than the length of the linked list, you need to take the remainder to reduce the cycle time.
	size_t n = length - Actuallyk - 1;//�׳������⡣
	while (n--)
	{
		Head = Head->next;
	}
	Node* newhead = Head->next;
	Head->next = NULL;
	return newhead;

}