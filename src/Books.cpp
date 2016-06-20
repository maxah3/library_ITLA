/*
 * Element.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Books.h"

string Book::getTitle(){ //getting title
	return Title;
}
string Book::getAutor(){//getting author
	return Autor;
}
string Book::getEditor(){//getting editor
	return Editor;
}
string Book::getDay(){//getting day
	return Day;
}
string Book::getMonth(){//getting month
	return Month;
}
string Book::getYear(){//getting year
	return Year;
}
string Book::getCategory(){//getting category
	return Category;
}
void Book::setTitle(string_Title){//setting title
	Title=_ Title;
}
void Book::setAutor(string_Autor){//setting author
	Autor=_ Autor;
}
void Book::setEditor(string_Editor){//setting editor
	Editor=_ Editor;
}
void Book::setDay(string_Day){//setting day
	Day=_ Day;
}
void Book::setMonth(string_Month){//setting month
	Month=_ Month;
}
void Book::setYear(string_Year){//setting year
	Year=_ Year;
}
void Book::setCategory(string_Category){//setting category
	Category=_ Category;
}
void Libros::setLibro(string _Title, string _Autor, string _Editor, int _Day, int _Month, int _Year, string _Category)//Initializing objects to specific parameters
{
	Titulo=_Title;
	Autor=_Autor;
	Editora=_Editor;
	Dia=_Day;
	Mes=_Month;
	Ano=_Year;
	Categoria=_Category;
}
