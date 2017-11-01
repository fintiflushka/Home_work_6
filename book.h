#ifndef BOOK_H  /* Если имя ещё не определено */
#define BOOK_H  /* Определить имя */

#include "item.h"
#include <string>

using namespace std;


class Book: public Item {
	// Имя автора.
	string author;
	// Название книги.
	string title;
	// Название издательства.
	string publisher;
	// Год издания.
	unsigned year;
public:
	// Конструктор по умолчанию.
	Book() 
		: author(""), title(""), publisher(""), year(0) {};

	// Конструктор инициализации.
	Book(int invNumber, bool taken, string author, string title, string publisher, unsigned year) 
		: Item(invNumber, taken), author(author), title(title), publisher(publisher), year(year) {};

	// Возвращает имя автора.
	string get_author();

	// Возвращает название книги.
	string get_title();

	// Возвращает название издательства.
	string get_publisher();

	// Возвращает год издания.
	unsigned get_year();

	// Показывает информацию о еденице хранения.
	void show();
	//using Item: Show();
};

#endif /* Если имя уже определено, повторно не определять */