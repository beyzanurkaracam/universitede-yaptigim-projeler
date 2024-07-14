/**
* @file G211210054_2B_FinalÖdevi
* @description 
* @course 2. Öğretim B Grubu
* @assignment Final Ödevi
* @date 24.12.2023
* @author Beyzanur Karaçam
*/
#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
#include <algorithm>

using namespace std;

class Stack
{
private:
	int *items;
	int head;
	int length;
	int capacity;
	bool IsFull();
	void Reserve(int);

public:
	Stack();
	bool IsEmpty();
	void Push(int obj);
	void Pop(Stack *stack);
	const int &Top(Stack *);
	void Clear();
	~Stack();
};
#endif