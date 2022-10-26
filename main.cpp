#include <iostream>
#include <cstring>
#include "shaurma.h"
#include "pizza.h"
#include "drink.h"
#include "soup.h"
#include "fries.h"
#include "basket.h"
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    shaurma _shaurma = shaurma("sh_type", 0, 0);
    pizza _pizza = pizza("pizza_type", 0, 0);
    drink _drink = drink("drink_type", 0, 0);
    soup _soup = soup("soup_type", 0);
    fries _fries = fries("fries_type", 0, 0);
    basket *order = new basket[2];
    order[0] = basket(_shaurma, _pizza, _drink, _soup, _fries);
    order[0].input();
    order[0].output();


}
