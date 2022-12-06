#include "new_car.h"

string new_car::get_warrantyprovider() {
    return warrantyprovider;
}

new_car::new_car() : car() {
    warrantyprovider = " ";
}

new_car::new_car(string v, string m, string mo, int y, float p, string c, string wp) :

    car(v, m, mo, y, p, c) {
    warrantyprovider = wp;
}










