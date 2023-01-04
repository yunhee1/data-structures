// ���ϸ�: 6��-DblLinkedList.cpp : ���� ���� ����Ʈ Ŭ���� �׽�Ʈ ���α׷�
#include "DblLinkedList.h"				// DblLinkedList Ŭ���� ����
void main()
{
	DblLinkedList	list;				// ���ο� ����Ʈ ��ü list�� ����

	list.insert( 0, new Node2(10) );		// ����Ʈ �� �տ� 10 ����
	list.insert( 0, new Node2(20) );		// ����Ʈ �� �տ� 20 ����
	list.insert( 1, new Node2(30) );		// ����Ʈ 1��ġ�� 30 ����
	list.insert( list.size(), new Node2(40) );	// ����Ʈ �������� 40 ����
	list.insert( 2, new Node2(50) );		// ����Ʈ 1��ġ�� 50 ����
	list.display();						// ����Ʈ���� ȭ�����

	list.remove( 2 );					// ����Ʈ 2��ġ�� �׸� ����
	list.remove(list.size()-1);			// ����Ʈ ������ �׸� ����
	list.remove(0);						// ����Ʈ �� �� �׸� ����
	list.replace(1, new Node2(90));		// ����Ʈ�� 1��ġ �׸� �� ����
	list.display();						// ����Ʈ���� ȭ�����
	
	list.clear();						// ����Ʈ�� ��� �׸� ����
	list.display();						// ����Ʈ���� ȭ�����
}