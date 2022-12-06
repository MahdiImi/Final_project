#include"old_car.h"

class new_car :public car {
private:
    string warrantyprovider;
public:
    string get_warrantyprovider();

    new_car();
    new_car(string v, string m, string mo, int y, float p, string c, string wp);

};