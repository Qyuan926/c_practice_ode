#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"



SListNode * BuyListNode(SLDataType x)
{
	SListNode *newnode = (SListNode*)malloc(sizeof(SListNode));
	newnode->_data = x;
	newnode->_next = NULL;
	return newnode;
}
void SListPrintf(SListNode *plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->_data);
		cur = cur->_next;
	}
	printf("NULL\n");
}


void SListPushBack(SListNode** pplist, SLDataType x)
{
	SListNode *newnode = BuyListNode(x);
	if (*pplist==NULL)
	{
		*pplist = newnode;
	}
	else
	{
		SListNode * tail = *pplist;
		//¼ì²é tailÊÇ·ñÎª¿Õ
	while (tail->_next)
	{
		tail = tail->_next;
	}
	tail->_next = newnode;
	
	}
}
void SListPopBack(SListNode** pplist)
{
	if (*pplist == NULL)
	{
		;
	}
	else if ((*pplist)->_next == NULL)
	{
		*pplist = NULL;
	}
else
{
	SListNode * tail = *pplist;
	SListNode *prevTail = NULL;
	while (tail->_next != NULL)
	{    
		prevTail = tail;
		tail = tail->_next;
	}
	free(tail);
	tail = NULL;
	prevTail->_next = NULL;
}
}

void SListPushFront(SListNode** pplist, SLDataType x)
{
	SListNode* newnode=BuyListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		newnode->_next = *pplist;
		*pplist = newnode;
	}
}
void SListPopFront(SListNode** pplist)
{
	if (*pplist == NULL || (*pplist)->_next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode * Headlater = (*pplist)->_next;
		free(*pplist);
		*pplist = Headlater;
	}
}


SListNode* SListFind(SListNode* plist, SLDataType x)
{
	
	SListNode* cur = plist;
	while (cur)
	{
		if (cur->_data == x)
		{
			return cur;
		}
		cur = cur->_next;
	}
	return NULL;
}

void SListInsertAfter(SListNode* pos, SLDataType x)
{
	SListNode* next = pos->_next;
	SListNode* newnode = BuyListNode(x);
	pos->_next = newnode;
	newnode->_next = next;
}
void SListEraseAfter(SListNode* pos)
{
	assert(pos&&pos->_next);
	SListNode* next = pos->_next;
	SListNode* next_next = next->_next;
	pos->_next = next_next;
	free(next);
	next->_next = NULL;


}