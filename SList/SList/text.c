#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void Test1()
{
	SListNode * list=NULL ;
	SListPushBack(&list, 1);
	SListPushBack(&list, 2);
	SListPushBack(&list, 3);
	SListPushBack(&list, 4);
	
	SListPrintf(list);

	SListPopBack(&list);
	SListPrintf(list);
	SListPopBack(&list);
	SListPrintf(list);
	SListPopBack(&list);
	SListPrintf(list);
	SListPopBack(&list);
	SListPrintf(list);
	SListPopBack(&list);
	SListPrintf(list);

}
void Test2()
{
	SListNode * list = NULL;
	SListPushFront(&list, 1);
	SListPushFront(&list, 2);
	SListPushFront(&list, 3);
	SListPushFront(&list, 4);
	SListPushFront(&list, 5);
	SListPrintf(list);
	SListPopFront(&list);
	SListPrintf(list);
	SListPopFront(&list);
	SListPrintf(list);
	SListPopFront(&list);
	SListPrintf(list);
	SListPopFront(&list);
	SListPrintf(list);
	SListPopFront(&list);
	SListPrintf(list);
	SListPopFront(&list);
	SListPrintf(list);

	
}
void Test3()
{
	SListNode * list = NULL;
	SListPushFront(&list, 1);
	SListPushFront(&list, 2);
	SListPushFront(&list, 3);
	SListPushFront(&list, 4);
	SListPushFront(&list, 5);
	SListPrintf(list);
    SListNode* ret=SListFind(list,2);
	ret->_data = 7777;
	SListPrintf(list);
	SListInsertAfter(ret, 77);
	SListPrintf(list);
	SListEraseAfter(ret);
	SListPrintf(list);
}



int main()
{
	Test3();
	return 0;
}