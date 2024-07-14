/**
* @file G211210054_2B_FinalÖdevi
* @description 
* @course 2. Öğretim B Grubu
* @assignment Final Ödevi
* @date 24.12.2023
* @author Beyzanur Karaçam
*/
#include "Stack.hpp"
#include <iostream>
#include <math.h>

using namespace std;

bool Stack::IsFull()
{
	return length == capacity;
}
void Stack::Reserve(int capacity)
{
	int *tmp = new int[capacity];
	for (int i = 0; i < length; i++)
	{
		tmp[i] = items[i];
	}
	if (items != NULL)
		delete[] items;
	items = tmp;
	this->capacity = capacity;
}
Stack::Stack()
{
	items = NULL;
	head = -1;
	length = 0;
	capacity = 0;
}
bool Stack::IsEmpty()
{
	return head == -1;
}
void Stack::Push(int data)
{
 
	if (IsFull())
	{
		Reserve(max(1, 2 * capacity));
	}
		 
	head++;
	items[head] = data;
	length++;
 
}
const int &Stack::Top(Stack *stack)
{
	 
	if (stack->IsEmpty())
        throw runtime_error("Stack is empty");
	return stack->items[head];
}

void Stack::Pop(Stack *stack)
{
 
	if (stack->IsEmpty())
		return;
	stack->head--;
	stack->length--;
}




void Stack::Clear()
{
	head = -1;
	length = 0;
}

Stack::~Stack()
{
	if (items != NULL)
		delete[] items;
	items = NULL;
}