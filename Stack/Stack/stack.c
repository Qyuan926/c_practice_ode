#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"

	// ��ʼ��ջ 
void StackInit(Stack* ps)
{
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}
		// ��ջ 
void StackPush(Stack* ps, STDataType data)
{  //�ж��Ƿ����㹻�Ŀռ�
	if (ps->_top == ps->_capacity)
	{
		size_t newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		STDataType* p = (STDataType*)realloc(ps->_a, newcapacity*(sizeof(Stack)));
		if (p == NULL)
		{
			printf("Insufficient memory available\n");

		}
		else
		{
			ps->_a = p;
		}
		ps->_capacity = newcapacity;
	}
	ps->_a[ps->_top] = data;
	ps->_top++;
}
	// ��ջ 
void StackPop(Stack* ps)
{
	assert(ps&&ps->_top>0);
	--ps->_top;

}
	// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps)
{
	assert(ps&&ps->_top > 0);
	return ps->_a[ps->_top-1];
}
	// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps)
{
	return ps->_top;
}
	// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps)
{
	return ps->_top == 0 ? 1 : 0;
}
	// ����ջ 
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}