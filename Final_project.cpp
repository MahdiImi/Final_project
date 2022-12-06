#include <iostream>
#include "new_car.h"
using namespace std;

void search() {
    void search1(int x);
    int sentry;
    cout << "1. Vin:\n";
    cout << "2. Make:\n";
    cout << "3. Model:\n";
    cout << "4. Year:\n";
    cout << "5. Price:\n";
    cout << "6. Category:\n";
    cout << "7. Mileage:\n";
    cout << "8. Warranty Provider:\n";
    cout << "Enter: ";
    cin >> sentry;
    while (sentry >= 1 && sentry <= 8) {
        

        switch (sentry) {
        case 1:
            search1(1);
            break;
        case 2:
            search1(2);
            break;
         case 3:
            search1(3);
            break;
        case 4:
            search1(4);
            break;
            
            

            
        case 5:
            search1(5);
            break;


        case 6:
            search1(6);
            break;

        case 7:
            search1(7);
            break;
        case 8:
            search1(8);
            break;
        default:
            cout << "Wrong Entry\n\n";
            break;
        }
        sentry;
        break;
    }
    if (sentry < 1 || sentry>8) {
        cout << "wrong entry\n\n";
    }

}

void search1(int x) {
    
    
    
    if (x == 1) {
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        string vin;
        int count = 0;
        cout << "Enter vin: ";
        cin >> vin;
        ifstream read("database.txt");
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >>mileage1>>wp1) {
                if (vin == vin1) {
                    old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                    new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                    cout << "\nVin: " << new_obj.getvin() << endl;
                    cout << "Make: " << new_obj.getmake() << endl;
                    cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                    cout << "Price $: " << new_obj.getprice() << endl;
                    cout << "Category: " << new_obj.getcategory() << endl;
                    cout << "Mileage: " << old_obj.getmileage() << endl;
                    cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                    count++;

                }
                else {
                    //count = 0;

                }
        }if (count == 0) {
            cout << "\nNo Car Found\n\n";
        }


    }else if (x == 2) {
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        string make;
        int count = 0;
        cout << "Enter make: ";
        cin >> make;
        ifstream read("database.txt");
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (make == make1) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                cout << "\nVin: " << new_obj.getvin() << endl;
                cout << "Make: " << new_obj.getmake() << endl;
                cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                cout << "Price $: " << new_obj.getprice() << endl;
                cout << "Category: " << new_obj.getcategory() << endl;
                cout << "Mileage: " << old_obj.getmileage() << endl;
                cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                count++;

            }
            else {
                //count = 0;

            }
        }if (count == 0) {
            cout << "\nNo Car Found\n\n";
        }


    }else if (x == 3) {
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        string model;
        int count = 0;
        cout << "Enter model: ";
        cin >> model;
        ifstream read("database.txt");
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (model == model1) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                cout << "\nVin: " << new_obj.getvin() << endl;
                cout << "Make: " << new_obj.getmake() << endl;
                cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                cout << "Price $: " << new_obj.getprice() << endl;
                cout << "Category: " << new_obj.getcategory() << endl;
                cout << "Mileage: " << old_obj.getmileage() << endl;
                cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                count++;

            }
            else {
                //count = 0;

            }
        }if (count == 0) {
            cout << "\nNo Car Found\n\n";
        }


    }else if (x == 4) {
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        int year;
        int count = 0;
        cout << "Enter year: ";
        cin >> year;
        ifstream read("database.txt");
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (year == year1) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                cout << "\nVin: " << new_obj.getvin() << endl;
                cout << "Make: " << new_obj.getmake() << endl;
                cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                cout << "Price $: " << new_obj.getprice() << endl;
                cout << "Category: " << new_obj.getcategory() << endl;
                cout << "Mileage: " << old_obj.getmileage() << endl;
                cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                count++;

            }
            else {
                //count = 0;

            }
        }if (count == 0) {
            cout << "\nNo Car Found\n\n";
        }


    }else if (x == 5) {
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        float price2, price3;
        int count = 0;
        cout << "Enter lower price: ";
        cin >> price2;
        cout << "Enter higher price: ";
        cin >> price3;

        ifstream read("database.txt");
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (price2<=price1 && price1<=price3) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                cout << "\nVin: " << new_obj.getvin() << endl;
                cout << "Make: " << new_obj.getmake() << endl;
                cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                cout << "Price $: " << new_obj.getprice() << endl;
                cout << "Category: " << new_obj.getcategory() << endl;
                cout << "Mileage: " << old_obj.getmileage() << endl;
                cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                count++;

            }
            else {
                //count = 0;

            }
        }if (count == 0) {
            cout << "\nNo Car Found\n\n";
        }


    }else if (x == 6) {
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        string category;
        int count = 0;
        cout << "Enter category: ";
        cin >> category;
        ifstream read("database.txt");
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (category == category1) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                cout << "\nVin: " << new_obj.getvin() << endl;
                cout << "Make: " << new_obj.getmake() << endl;
                cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                cout << "Price $: " << new_obj.getprice() << endl;
                cout << "Category: " << new_obj.getcategory() << endl;
                cout << "Mileage: " << old_obj.getmileage() << endl;
                cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                count++;

            }
            else {
            //count = 0;

            }
        }if (count == 0) {
            cout << "\nNo Car Found\n\n";
        }


    }
    else if (x == 7) {
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        int mileage2, mileage3;
        int count = 0;
        cout << "Enter lower mileage: ";
        cin >> mileage2;
        cout << "Enter higher mileage: ";
        cin >> mileage3;

        ifstream read("database.txt");
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (mileage2<=mileage1 && mileage1<=mileage3) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                cout << "\nVin: " << new_obj.getvin() << endl;
                cout << "Make: " << new_obj.getmake() << endl;
                cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                cout << "Price $: " << new_obj.getprice() << endl;
                cout << "Category: " << new_obj.getcategory() << endl;
                cout << "Mileage: " << old_obj.getmileage() << endl;
                cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                count++;

            }
            else {
                //count = 0;

            }
        }if (count == 0) {
            cout << "\nNo Car Found\n\n";
        }

    }
    else if (x == 8) {
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        string wp2;
        int count = 0;
        cout << "Enter warranty provider or enter N/A: ";
        cin >> wp2;
        

        ifstream read("database.txt");
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (wp2==wp1) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                cout << "\nVin: " << new_obj.getvin() << endl;
                cout << "Make: " << new_obj.getmake() << endl;
                cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                cout << "Price $: " << new_obj.getprice() << endl;
                cout << "Category: " << new_obj.getcategory() << endl;
                cout << "Mileage: " << old_obj.getmileage() << endl;
                cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                count++;

        }
            else {
                //count = 0;

            }
        }if (count == 0) {
            cout << "\nNo Car Found\n\n";
        }

    }
    else {

    }


    
    

    
}










































void sell_lease() {

}
void return_car() {

}
void add_car() {

}
int printmenu() {
    int entry;
    cout << "CAR DEALERSHIP\n\n";
    cout << "1. Search Inventory: \n";
    cout << "2. Sell/Lease: \n";
    cout << "3. Return a leased car: \n";
    cout << "4. Add cars to inventory: \n";
    cout << "5. Exit: \n";
    cout << "Enter: ";
    cin >> entry;
    return entry;


}

int main() {

    int entrygbl = printmenu();
    while (entrygbl != 5) {
        switch (entrygbl) {
        case 1:
            search();
            break;
        /*case 2:
            sell_lease();
            break;
        case 3:
            return_car();
            break;
        case 4:
            add_car();
            break;*/
        }
        entrygbl = printmenu();

    }

    return 0;
}


