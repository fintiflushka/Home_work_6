////////////////////////////ITEM
#include "item.h"
#include <iostream>
#include <string>

using namespace std;


// Показать информацию о еденице хранения.
void Item::show() {
	cout << "--ITEM--" << endl;
	cout << "Inventory number: " << invNumber << endl;
	cout << "Taken: "<< taken << endl;
}

// Есть ли единица хранения в наличии?
bool Item::is_available() {
	return taken;
}

// Возвращает инвентарный номер.
int Item::get_inv_number() {
	return invNumber;
}

// Операция "взять".
void Item::take() {
	taken = 0;
}

// Операция "вернуть".
void Item::back() {
	taken = 1;
}