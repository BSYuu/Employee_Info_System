#ifndef __CIRCULAR_LINKED_LIST_H__
#define __CIRCULAR_LINKED_LIST_H__
#include <iostream>
#include "Node.h"

using namespace std;


#define LIST_LEN 100

template <typename T>
class LinkedList {
private:
	Node<T>* head;
	Node<T>* current;
	Node<T>* tail;

public:

	LinkedList()
	{
		head = NULL;
		tail = NULL;
		current = NULL;
	}

	void AddNode(T val)
	{
		Node<T>* newNode = new Node<T>(val);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;

			tail->setNextNode(head);
		}

		if ((tail->getValue() < newNode->getValue()))
		{
			Sort(newNode);
		}
		else
		{
			newNode->setNextNode(tail->nextNode());
			tail->setNextNode(newNode);
			tail = newNode;
		}

	}

	void printTail()
	{
		cout << tail->getValue() << endl;
	}
	void RemoveNode(T val)
	{
		while (head->getValue() == val)
		{
			Node<T>* buffer = this->head->nextNode();
			delete this->head;
			head = buffer;
			tail->setNextNode(head);
		}

		Node<T>* indexNode = this->head;

		while (indexNode->nextNode() != head)
		{
			if (indexNode->nextNode()->getValue() == val)
			{
				Node<T>* buffer = indexNode->nextNode()->nextNode();
				delete indexNode->nextNode();
				indexNode->setNextNode(buffer);
			}
			if (indexNode->nextNode() != head)
				indexNode = indexNode->nextNode();
		}
	}

	void Sort(Node<T>* NodeToChange)
	{
		this->current = this->tail;

		while ((current->nextNode()->getValue() < NodeToChange->getValue()) && (current->nextNode() != tail))
		{
			current = current->nextNode();
		}


		NodeToChange->setNextNode(current->nextNode());
		current->setNextNode(NodeToChange);
	}

	void printAllNode()
	{
		current = head;
		do {
			cout << "Data : " << current->getValue() << endl;
			current = current->nextNode();
		} while (current != head);
	}

	void printLoop()
	{
		current = head;
		while (true)
		{
			cout << "Data : " << current->getValue() << endl;
			current = current->nextNode();
		}
	}

	T operator[](int index)
	{
		int cnt = 0;
		current = head;
		while (cnt++ < index - 1)
		{
			current = current->nextNode();
		}

		return current->getValue();
	}
};

#endif // !__CIRCULAR_LINKED_LIST_H__

