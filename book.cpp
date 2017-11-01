////////////////////////////BOOK
#include "book.h"
#include <iostream>
#include <string>

using namespace std;


// Возвращает имя автора.
string Book::get_author() {
	return author;
}

// Возвращает название книги.
string Book::get_title() {
	return title;
}

// Возвращает название издательства.
string Book::get_publisher() {
	return publisher;
}

// Возвращает год издания.
unsigned Book::get_year() {
	return year;
}

// Показывает информацию о еденице хранения.
void Book::show() {
	Item::show();
	cout << "--BOOK--" << endl;
	cout << "Author: " << author << endl;
	cout << "Title: " << title << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "Year: " << year << endl;
}