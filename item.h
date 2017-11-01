#ifndef ITEM_H  /* Если имя ещё не определено */
#define ITEM_H  /* Определить имя */

#include <string>

using namespace std;


class Item {
	// Инвентарный номер.
	int invNumber;
	// Взято на руки - 0; имеется в наличии - 1.
	bool taken;
public:
	// Конструктор по умолчанию. 
	Item()
		: invNumber(0), taken(1) {};

	// Конструктор инициализации.
	Item(int invNumber, bool taken)
		: invNumber(invNumber), taken(taken) {};

	// Показать информацию о еденице хранения.
	virtual void show();

	// Есть ли единица хранения в наличии?
	bool is_available();

	// Возвращает инвентарный номер.
	int get_inv_number();

	// Операция "взять".
	void take();

	// Операция "вернуть".
	void back();
};

#endif /* Если имя уже определено, повторно не определять */