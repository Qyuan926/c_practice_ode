#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef  int SLDataType;
typedef  struct  SListNode
{
	SLDataType _data;
	 struct SListNode * _next;
}SListNode;

SListNode * BuyListNode(SLDataType x);
void SListPrintf(SListNode *plist);

void SListPushBack(SListNode** pplist, SLDataType x);
void SListPopBack(SListNode** pplist);

void SListPushFront(SListNode** pplist, SLDataType x);
void SListPopFront(SListNode** pplist);



SListNode* SListFind(SListNode* plist, SLDataType x);

void SListInsertAfter(SListNode* pos, SLDataType x);
void SListEraseAfter(SListNode* pos);