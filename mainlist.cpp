#include "list.h"

int main(void)
{
	List list1;
	for (int i=0; i<10; i++) list1.push_front(i);
	std::cout << list1;
}