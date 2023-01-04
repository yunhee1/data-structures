// 파일명: 6장-DblLinkedList.cpp : 이중 연결 리스트 클래스 테스트 프로그램
#include "DblLinkedList.h"				// DblLinkedList 클래스 포함
void main()
{
	DblLinkedList	list;				// 새로운 리스트 객체 list를 만듦

	list.insert( 0, new Node2(10) );		// 리스트 맨 앞에 10 삽입
	list.insert( 0, new Node2(20) );		// 리스트 맨 앞에 20 삽입
	list.insert( 1, new Node2(30) );		// 리스트 1위치에 30 삽입
	list.insert( list.size(), new Node2(40) );	// 리스트 마지막에 40 삽입
	list.insert( 2, new Node2(50) );		// 리스트 1위치에 50 삽입
	list.display();						// 리스트내용 화면출력

	list.remove( 2 );					// 리스트 2위치의 항목 삭제
	list.remove(list.size()-1);			// 리스트 마지막 항목 삭제
	list.remove(0);						// 리스트 맨 앞 항목 삭제
	list.replace(1, new Node2(90));		// 리스트의 1위치 항목 값 변경
	list.display();						// 리스트내용 화면출력
	
	list.clear();						// 리스트의 모든 항목 삭제
	list.display();						// 리스트내용 화면출력
}