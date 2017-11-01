////////////////////////////MAGAXIN
#include "magazine.h"
#include <iostream>
#include <string>

using namespace std;


// Возвращает название серии.
string Magazine::get_volume() {
	return volume;
}

// Возвращает название журнала.
string Magazine::get_title() {
	return title;
}

// Возвращает номер выпуска.
int Magazine::get_number() {
	return number;
}

// Возвращает год выпуска.
unsigned Magazine::get_year() {
	return year;
}

// Показывает информацию о еденице хранения.
void Magazine::show() {
	Item::show();
	cout << "--MAGAXIN--" << endl;
	cout << "Volume: " << volume << endl;
	cout << "Title: " << title << endl;
	cout << "Number: " << number << endl;
	cout << "Year: " << year << endl;
}