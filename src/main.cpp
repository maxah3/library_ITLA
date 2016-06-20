//============================================================================
// Name        : Library.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Menu.h"
#include <cstdlib>
using namespace std;

int main()
{
	List L;

	string title; //we declare variable with its data type
	string autor;
	string editor;
	string day;
	string month;
	string year;
	string category;
	string search;
	int menu; //we declare variable with its data type


	Books L1,L2,L3;

	L1.setBook("a","a","a",1,1,1,"a");
	L2.setBook("b","b","b",2,2,2,"b");
	L3.setBook("c","c","c",3,3,3,"c");

   L.Add(L1);
   L.Add(L2);
   L.Add(L3);

   do
   {
	   cout<<"+ Menu"<<end1; //show the user an interface with various option
	   cout<<"\n #1 List of books"<<end1;
	   cout<<"\n #2 Insert book"<<end1;
	   cout<<"\n #3 Latest book"<<end1;
	   cout<<"\n #4 Search books by category"<<end1;
	   cout<<"\n #5 Exit"<<end1;
	   cout<<"\n -Choose an opcion: #"; //the user will be able to enter an option
	   cin>>Menu;

	   switch (Menu){ //start switch cases for the user
	   default:{
		   cout<<"\n* Invalid opcion"<<en1;//show the user an interface because the user choose an invalid option
		   cout<<end1;
		   system("Pause");
		   system("cls");
		   break;
	   }
	   case 1:
	   			{
	   				cout<<"\n #1 List Books"<<endl;//show the user an interface
	   				L.Empty();
                    L.Print();
	   				cout<<endl;
	   				system("Pause");
	   				system("cls");
	   				break;
	   			}
	   case 2:  //case 2 for the user to put books information...
	   			{
	   				cout<<"\n #2 Insert book"<<endl; //show the user an interface of books to insert...
	   				cout<<"\n - Title: ";
	   				cin>>title;
	   				cout<<"\n - Autor: ";
	   				cin>>autor;
	   				cout<<"\n - Editor: ";
	   				cin>>editor;
	   				cout<<"\n - Date of publicacion"<<endl;
	   				cout<<"\n - Date: ";
	   								cin>>day;
	   								cout<<"\n - Month: ";
	   								cin>>month;
	   								cout<<"\n - Year: ";
	   								cin>>year;
	   								cout<<"\n - Category: ";
	   								cin>>category;
	   								Books A(title, autor, editor, day, month, year, category);
	   								L.Add(A);
	   								cout<<endl;
	   								cout<<"\n * Added"<<endl;
	   								cout<<endl;
	   								cout<<endl;
	   								system("Pause");
	   								system("cls");
	   								break;
	   							}
	   							case 3://here we show the case 3 for the user
	   							{
	   								cout<<"\n #3 Book request"<<endl;
	   								cout<<endl;
	   								cout<<"\n Last element:"<<endl;
	   								L.getUltimo();
	   								cout<<endl;
	   								cout<<endl;
	   								system("Pause");
	   								system("cls");
	   								break;
	   							}
	   							case 4://here we show the case 4 for the user
	   							{
	   								cout<<"\n #4 Search book by category"<<endl;
	   								cout<<"\n - Category: ";
	   								cin>>buscar;
	   								L.Search(search);
	   								cout<<endl;
	   								system("Pause");
	   								system("cls");
	   								break;
	   							}
	   							case 5://here we show the case 5 for the user
	   							{
	   								cout<<"\n #5 Exit"<<endl;
	   								cout<<endl;
	   								system("Pause");
	   								system("cls");
	   								return 0;
	   }
   }
   }
   while(Menu!=5); // if any of the option were chosen we Pause
   	cout<<endl;
   	system("Pause");
   	return 0;
}
