#ifndef MAGAZINE_H  /* Если имя ещё не определено */
#define MAGAZINE_H  /* Определить имя */

#include "item.h"
#include <string>

using namespace std;


class Magazine: public Item {
	// Название серии.
	string volume;
	// Номер выпуска.
	int number;
	// Год выпуска.
	unsigned year;
	// Название журнала.
	string title;
public:
	// КОнструктор по умолчанию.
	Magazine()
		: volume(0), number(0), year(0), title("") {};

	// Конструктор инициализации. 
	Magazine(int invNumber, bool taken, string volume, int number, unsigned year, string title) 
		: Item(invNumber, taken), volume(volume), number(number), year(year), title(title) {};

	// Возвращает название серии.
	string get_volume();

	// Возвращает название журнала.
	string get_title();

	// Возвращает номер выпуска.
	int get_number();

	// Возвращает год издания.
	unsigned get_year();

	// Показывает информацию о еденице хранения.
	void show();
	//using Item: show();
};

#endif /* Если имя уже определено, повторно не определять */