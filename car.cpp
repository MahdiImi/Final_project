#include"car.h"

string car::getvin() {
    return vin;
}

string car::getmake() {
    return make;
}

string car::getmodel() {
    return model;
}
int car::getyear() {
    return year;
}
float car::getprice() {
    return price;
}
string car::getcategory() {
    return category;
}

car::car() {
    vin = " ";
    make = " ";
    model = " ";
    year = 0;
    price = 0.0f;
    category = " ";
}

car::car(string v, string m, string mo, int y, float p, string c) {
    vin = v;
    make = m;
    model = mo;
    year = y;
    price = p;
    category = c;

}


void car::addcar1(string v, int c) {
   cout << "nothing\n";
}





