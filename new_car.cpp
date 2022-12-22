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

void new_car::addcar1(string v, int c) {
    if (c == -2) {
                ifstream re("database.txt");
                ofstream write("database.txt", ios::in | ios::out | ios::ate);
                string vin1, make1, model1, category1, wp1;
                int year1, mileage1;
                float price1;
                string makex, modelx, categoryx, wpx;
                int yearx, mileagex{0};
                float pricex;
                cout << "Enter make: ";
                cin >> makex;
                transform(makex.begin(), makex.end(), makex.begin(), ::toupper);
                cout << "Enter model: ";
                cin >> modelx;
                transform(modelx.begin(), modelx.end(), modelx.begin(), ::toupper);
                cout << "Enter year: ";
                cin >> yearx;
                cout << "Enter price: ";
                cin >> pricex;
                cout << "Enter category: ";
                cin >> categoryx;
                transform(categoryx.begin(), categoryx.end(), categoryx.begin(), ::toupper);
                cout << "Enter warranty provider or N/A: ";
                cin >> wpx;
                transform(wpx.begin(), wpx.end(), wpx.begin(), ::toupper);
                while (re >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
                    /*old_car old_obj(v, makex, modelx, yearx, pricex, categoryx, mileagex);
                    new_car new_obj(v, makex, modelx, yearx, pricex, categoryx, wpx);
                    write << new_obj.getvin() << " " << new_obj.getmake() << " " << new_obj.getmodel() << " " << new_obj.getyear()
                        << " " << new_obj.getprice() << " " << new_obj.getcategory() << " " << old_obj.getmileage()
                        << " " << new_obj.get_warrantyprovider() << endl;*/
                    write << v << " " << makex << " " << modelx << " " << yearx << " " << pricex << " " << categoryx << " " 
                        << 0 << " "<<wpx << endl;
                    break;
                }
        
            }
        
        

}

