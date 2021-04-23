#include<iostream>
using namespace std;

class Numeric {
protected:
    int number;
public:
    void setValue(int x) {
        number = x;
    }
    int getValue() {
        return number;
    }
};

class Saqure : public Numeric {
public:
    int getSaqure() {
        int x = Numeric::getValue();
        return x * x;
    }
};

class Cube : public Numeric {
public:
    int getCube() {
        int x = Numeric::getValue();
        return x * x * x;
    }
};

int main() {
    Saqure val;
    Cube Val;
    val.setValue(2);
    cout << "Return Saqure: " << val.getSaqure() << endl;
    Val.setValue(3);
    cout << "Return Cube: " << Val.getCube() << endl;
}