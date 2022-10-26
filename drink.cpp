#include <iostream>
#include "drink.h"

using namespace std;
drink::drink(string type, float price, float volume) {
    this->drink_type = type;
    this->drink_price = price;
    this->drink_volume = volume;
}

drink::drink(string type) {
    this->drink_type = type;
}

drink::drink() {
}

drink::~drink() = default;

void drink::input() {
    cout<<"Введите вид напитка";
    cin>>drink_type;
    cout<<"Введите объем напитка";
    cin>>drink_volume;
    cout<<"Введите цену напитка";
    cin>>drink_price;
}

void drink::output() {
    cout<<"Вид напитка"<< drink_type << "Объем напитка" << drink_volume << "Цена напитка" << drink_price << endl;
}

