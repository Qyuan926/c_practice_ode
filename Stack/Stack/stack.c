#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"

	// 初始化栈 
void StackInit(Stack* ps)
{
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}
		// 入栈 
void StackPush(Stack* ps, STDataType data)
{  //判断是否有足够的空间
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
	// 出栈 
void StackPop(Stack* ps)
{
	assert(ps&&ps->_top>0);
	--ps->_top;

}
	// 获取栈顶元素 
STDataType StackTop(Stack* ps)
{
	assert(ps&&ps->_top > 0);
	return ps->_a[ps->_top-1];
}
	// 获取栈中有效元素个数 
int StackSize(Stack* ps)
{
	return ps->_top;
}
	// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
int StackEmpty(Stack* ps)
{
	return ps->_top == 0 ? 1 : 0;
}
	// 销毁栈 
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->_a);
	ps->_a = NULL;
	ps->_capacity = ps->_top = 0;
}