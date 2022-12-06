#include"old_car.h"

int old_car::getmileage() {
    return mileage;
}


old_car::old_car() : car() {
    mileage = 0;
}

old_car::old_car(string v, string m, string mo, int y, float p, string c, int mi) :

    car(v, m, mo, y, p, c) {
    mileage = mi;
}















