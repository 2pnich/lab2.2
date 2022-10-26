#include <iostream>
#include "fries.h"

using namespace std;

fries::fries(string type, float price, float quantity) {
    this->fries_type = type;
    this->fries_price = price;
    this->fries_quantity = quantity;
}

fries::fries(string type) {
    this->fries_type = type;
}

fries::fries() {
}

fries::~fries() = default;

void fries::input() {
    cout<<"Введите вид фри";
    cin>>fries_type;
    cout<<"Введите цену фри";
    cin>>fries_price;
}

void fries::output() {
    cout<<"Вид фри"<< fries_type << "Количество" << fries_quantity << "Цена фри" << fries_price << endl;
}

