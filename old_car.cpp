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

void old_car::addcar1(string v, int c)
{
    if (c == 0) {
        ifstream re("database.txt");
        ofstream write("database.txt", ios::in | ios::out | ios::ate);
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        string makex, modelx, categoryx, wpx{ "N/A" };
        int yearx, mileagex;
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
        cout << "Enter mileage: ";
        cin >> mileagex;
        while (re >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            //old_car old_obj(v, makex, modelx, yearx, pricex, categoryx, mileagex);
            //new_car new_obj(v, makex, modelx, yearx, pricex, categoryx, wpx);
            /*write << new_obj.getvin() << " " << new_obj.getmake() << " " << new_obj.getmodel() << " " << new_obj.getyear()
                << " " << new_obj.getprice() << " " << new_obj.getcategory() << " " << old_obj.getmileage()
                << " " << new_obj.get_warrantyprovider() << endl;*/
            write << v << " " << makex << " " << modelx << " " << yearx << " " << pricex << " " << categoryx << " "
                << mileagex << " " << "N/A" << endl;
            break;
        }
    }
        
}















