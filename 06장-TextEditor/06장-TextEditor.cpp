//	06��-TextEditor.cpp: ���� ������ ���α׷�
#include "LineEditor.h"

void Usage()
{
	printf("[�޴�����] i-�Է�, d-����, r-����, p-���, l-�����б�, s-����, q-����=> ");
}

void main()
{
	LineEditor	editor;
    char command;

    do{
		Usage();
       	command = getchar();
		switch(command) {
			case 'd': editor.DeleteLine();	break;
			case 'i': editor.InsertLine();	break;
			case 'r': editor.ReplaceLine();	break;
			case 'l': editor.LoadFile("Test.txt");	break;     
			case 's': editor.StoreFile("Test.txt");	break;
			case 'p': editor.Display();				break;
			case 'q': break;
		}
		fflush(stdin);
    } while(command != 'q');
}