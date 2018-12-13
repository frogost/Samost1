#include <iostream>

class Construct {
    float* x;
    float* y;

public:
    float *getX() const {
        return x;
    }

    void setX(float *x) {
        Construct::x = x;
    }

    float *getY() const {
        return y;
    }

    void setY(float *y) {
        Construct::y = y;
    }


    Construct(float _x, float _y){
        x = new float;
        y = new float;
        *x=_x;
        *y=_y;
        std::swap (x,y);

        std::cout<<*x<<'\n';
        std::cout<<*y<<'\n';
        std::cout << "Конструктор\n";
    }

    ~Construct(){
        delete x;
        delete y;
        std::cout << "Деструктор\n";
    }

    bool notequal (Construct* a,Construct* b){
        std::cout<<a<<'\n';
        return a==b;
    }
};



int main() {
    Construct a(4,5);
    Construct b(5,6);
    std::cout<<a.notequal(&a,&b)<<'\n';
    std::cout<<a.getX()<<'\n';
    std::cout<<a.getY()<<'\n';
    return 0;
}