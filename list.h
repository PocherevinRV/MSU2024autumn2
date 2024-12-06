#include <iostream>

//template <class T>
class List
{       
	private:
		struct ListNode
		{
			ListNode *next;
			//T data;
			int data;
		};
	
		ListNode *head;
	public:
		List() {head = nullptr;};
		void push_front(int value)
		{
			ListNode *new_node = new ListNode;
			new_node->data = value;
			new_node->next = head;
			head = new_node;
		}
		struct iterator 
		{ 
			//List *base ; 
			ListNode *current;
			iterator (List *list_=nullptr) {current = (list_ == nullptr) ? nullptr : list_->head;}
			int &operator *() {return current->data;}
			bool operator != (const iterator &it) const{return current!=it.current;}
			iterator operator++(){ current = current->next; return *this;}
	        };
		iterator begin(){return iterator(this);}
		iterator end(){return iterator(nullptr);}
		//friend template<class T> ostream &operator<<(ostream &cout, const List<T> &list_)
		friend std::ostream &operator<<(std::ostream &cout, List &list_)
		{
			for (List::iterator it=list_.begin(); it != list_.end(); ++it)
			{
				cout << "|" << *it << "|";
			}
			cout << "\n";
			return cout;
		}
		~List()
		{
		        for (List::iterator it=this->begin(); it != this->end(); ++it)
			{
				delete it.current;
			}
		} 

};
                                                          
