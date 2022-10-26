#include <iostream>
#include "shaurma.h"

using namespace std;

shaurma::shaurma( string type, float price, float weight) {
    this->sh_type = type;
    this->sh_price = price;
    this->sh_weight = weight;
}

shaurma::shaurma(string type) {
    this->sh_type = type;
}

shaurma::shaurma() {
}

shaurma::~shaurma() = default;

void shaurma::input() {
    cout<<"Введите вид шаурмы";
    cin>>sh_type;
    cout<<"Введите вес шаурмы";
    cin>>sh_weight;
    cout<<"Введите цену шаурмы";
    cin>>sh_price;
}

void shaurma::output() {
    cout<<"Вид шаурмы"<< sh_type << "Вес шаурмы" << sh_weight << "Цена шаурмы" << sh_price << endl;
}