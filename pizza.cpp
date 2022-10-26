#include <iostream>
#include "pizza.h"

using namespace std;

pizza::pizza(string type, float price, float diameter) {
    this->pizza_type = type;
    this->pizza_price = price;
    this->pizza_diameter = diameter;
}

pizza::pizza(string type) {
    this->pizza_type = type;
}

pizza::pizza() {
}

pizza::~pizza() = default;

void pizza::input() {
    cout<<"Введите вид пиццы";
    cin>>pizza_type;
    cout<<"Введите диаметр пиццы";
    cin>>pizza_diameter;
    cout<<"Введите цену пиццы";
    cin>>pizza_price;
}

void pizza::output() {
    cout<<"Вид пиццы"<< pizza_type << "Диаметр пиццы" << pizza_diameter << "Цена пиццы" << pizza_price << endl;
}

