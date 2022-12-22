#include "car.h"

class old_car :public car {
private:
    int mileage;
public:
    int getmileage();
    old_car();
    old_car(string v, string m, string mo, int y, float p, string c, int mi);

    void addcar1(string v, int c);
};