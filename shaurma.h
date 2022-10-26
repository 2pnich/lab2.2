#ifndef LAB_2_2_SHAURMA_H
#define LAB_2_2_SHAURMA_H

using namespace std;

class shaurma {
public:
    float sh_price;
    float sh_weight;
    string sh_type;
    shaurma(string sh_type, float sh_price, float sh_weigh);
    shaurma(string sh_type);
    shaurma();
    ~shaurma();
    void input();
    void output();
};


#endif //LAB_2_2_SHAURMA_H
