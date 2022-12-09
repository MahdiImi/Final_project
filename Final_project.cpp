#include <iostream>
#include <string>
#include <algorithm>
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
        cout << "Wrong entry\n\n";
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
        transform(vin.begin(), vin.end(), vin.begin(), ::toupper);
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
        }
        read.close();
        if (count == 0) {
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
        transform(make.begin(), make.end(), make.begin(), ::toupper);
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
        }
        read.close();
        if (count == 0) {
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
        }
        read.close();
        if (count == 0) {
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
        }
        read.close();
        if (count == 0) {
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
        }
        read.close();
        if (count == 0) {
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
        }
        read.close();
        if (count == 0) {
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
        }
        read.close();
        if (count == 0) {
            cout << "\nNo Car Found\n\n";
        }

    }
    else {
        exit(1);
    }
    
}




void sell_leasecar(int x) {
    if (x == 1) {
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        string vin;
        int count = 0;
        cout << "Enter vin: ";
        cin >> vin;
        ifstream read;
        string name = "database.txt";
        read.open(name);
        ofstream w("Temp.txt");
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (vin == vin1) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                cout << "Car details: \n";
                cout << "Vin: " << new_obj.getvin() << endl;
                cout << "Make: " << new_obj.getmake() << endl;
                cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                cout << "Price $: " << new_obj.getprice() << endl;
                cout << "Category: " << new_obj.getcategory() << endl;
                cout << "Mileage: " << old_obj.getmileage() << endl;
                cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                count++;
                cout << "CAR SOLD\n\n";
            }
            else {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                w << new_obj.getvin() << " " << new_obj.getmake() << " " << new_obj.getmodel() << " " << new_obj.getyear()
                    << " " << new_obj.getprice() << " " << new_obj.getcategory() << " " << old_obj.getmileage() << " " << new_obj.get_warrantyprovider() << endl;
            }
        }
        
        w.close();
        read.close();

        const char* nm = name.c_str();
        remove(nm);
        rename("Temp.txt", "database.txt");


    }
    else if (x == 2) {
        void lease(string v, int c); //prototype
        int countf = 0;
        string vin;
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        int count = 0;
        ifstream read("database.txt");
        cout << "Enter vin: ";
        cin >> vin;
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (vin == vin1 && mileage1 == 0) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                cout << "Car details for lease with 0 mileage:  \n";
                cout << "Vin: " << new_obj.getvin() << endl;
                cout << "Make: " << new_obj.getmake() << endl;
                cout << "Model: " << new_obj.getmodel() << endl; cout << "Year: " << new_obj.getyear() << endl;
                cout << "Price $: " << new_obj.getprice() << endl;
                cout << "Category: " << new_obj.getcategory() << endl;
                cout << "Mileage: " << old_obj.getmileage() << endl;
                cout << "Warranty Provider: " << new_obj.get_warrantyprovider() << endl << endl;
                countf++;
                
            }
            else {
                
            }
        }
        read.close();

        if (countf == 0){ 
            cout<< "No New Car Found For Lease\n"; 
        }else{
            int x;
            cout << "To lease press 1: ";
            cin >> x;
            count = x;
            lease(vin, count);
        }

    }
    else {
        exit(1);
    }
     
}


void lease(string v, int c) {
    if (c == 1) {
        ifstream readr;
        string mmry = "database.txt";
        readr.open(mmry);
        ofstream writelease("car_on_lease.txt", ios::in | ios::out | ios::ate);
        ofstream writew("temp.txt");
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        while (readr >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (v == vin1) {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                writelease << new_obj.getvin() << " " << new_obj.getmake() << " " << new_obj.getmodel() << " " << new_obj.getyear()
                    << " " << new_obj.getprice() << " " << new_obj.getcategory() << " " << old_obj.getmileage() 
                    << " " << new_obj.get_warrantyprovider() << endl;
                cout << "Lease Done\n\n";

            }
            else {
                old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
                new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
                writew << new_obj.getvin() << " " << new_obj.getmake() << " " << new_obj.getmodel() << " " << new_obj.getyear()
                    << " " << new_obj.getprice() << " " << new_obj.getcategory() << " " << old_obj.getmileage()
                    << " " << new_obj.get_warrantyprovider() << endl;
            }

        }
        writew.close();
        writelease.close();
        readr.close();
        const char* m = mmry.c_str();
        remove(m);
        rename("temp.txt", m);

    }


}










void return_car() {
    void returnc(string v, int m);
    string vin;
    cout << "Check for the car on lease in database\n";
    cout << "Enter vin of the leased car: ";
    cin >> vin;
    string vin1, make1, model1, category1, wp1;
    int year1, mileage1, count{0};
    float price1;
    ifstream read("car_on_lease.txt");
    while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
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
            cout << "Car Found\n";

        }
        else {
            //count = 0;

        }

    }
    read.close();
    if (count == 1) {
        int mlg;
        cout << "Enter the current mileage";
        cin >> mlg;
        while (mlg <= 0) {
            cout << "Current mileage can't be zero or less than zero. Enter again:";
            cin >> mlg;
        }
        returnc(vin, mlg);
    }


}
void returnc(string v, int m) {
    string vin1, make1, model1, category1, wp1;
    int year1, mileage1, count{ 0 };
    float price1;
    ifstream read;
    string filename = "car_on_lease.txt";
    read.open(filename);
    ofstream write("database.txt", ios::in | ios:: out | ios::ate);
    ofstream write2("temp.txt");
    while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
        if (v == vin1) {
            old_car old_obj(vin1, make1, model1, year1, price1, category1, m);
            new_car new_obj(vin1, make1, model1, year1, price1, category1, "N/A");
            write << new_obj.getvin() << " " << new_obj.getmake() << " " << new_obj.getmodel() << " " << new_obj.getyear()
                << " " << new_obj.getprice() << " " << new_obj.getcategory() << " " << old_obj.getmileage()
                << " " << new_obj.get_warrantyprovider() << endl;
            cout << "Car returned with new mileage on it";
        }
        else {
            old_car old_obj(vin1, make1, model1, year1, price1, category1, mileage1);
            new_car new_obj(vin1, make1, model1, year1, price1, category1, wp1);
            write2 << new_obj.getvin() << " " << new_obj.getmake() << " " << new_obj.getmodel() << " " << new_obj.getyear()
                << " " << new_obj.getprice() << " " << new_obj.getcategory() << " " << old_obj.getmileage()
                << " " << new_obj.get_warrantyprovider() << endl;

        }
    }

    write2.close();
    write.close();
    read.close();
    const char* stor = filename.c_str();
    remove(stor);
    rename("temp.txt", stor);



}




void sell_lease() {
    int entry;
    cout << "1. Sell Car\n";
    cout << "2. Lease a car\n";
    cout << "Enter choice: ";
    cin >> entry;
    switch (entry) {
    case 1:
        sell_leasecar(1);
        break;

    case 2:
        sell_leasecar(2);
        break;
    default:
        cout << "Wrong entry";
        break;

    }
}

void add_car() {
    void addcar(int);
    int entrya;
    cout << "1. Old Car: \n";
    cout << "2. New Car: \n";
    cout << "Enter: ";
    cin >> entrya;
    switch (entrya) {
        case 1:
            addcar(1);
            break;
        case 2:
            addcar(2);
            break;
        default:
            cout << "Wrong entry\n";
            break;
    }
}

void addcar(int x) {
    void addcar1(string v, int c);
    if (x == 1) {
        string v;
        cout << "Enter vin: ";
        cin >> v;
        while (v.length() != 7) {
            cout << "wrong vin size, enter again: ";
            cin >> v;
        }
        
        ifstream read("database.txt");
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1,count{0};
        float price1;
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (v == vin1) {
                cout << "Car Exist\n";
                count = count++;
            }
            else {

            }
        }
        read.close();
        if (count == 0) {
            addcar1(v, count);
        }

    }else if (x == 2) {
        string v;
        cout << "Enter vin: ";
        cin >> v;
        while (v.length() != 7) {
            cout << "wrong vin size, enter 7 digit vin again: ";
            cin >> v;
        }

        ifstream read("database.txt");
        string vin1, make1, model1, category1, wp1;
        int year1, mileage1, count{-2};
        float price1;
        while (read >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            if (v == vin1) {
                cout << "Car Exist\n";
                count = count++;
            }
            else {

            }
        }
        read.close();
        if (count == -2) {
            addcar1(v, count);
        }

    }else {
        //exit(1);
    }

}

void addcar1(string v, int c) {
    if (c == 0) {
        ifstream re("database.txt");
        ofstream write("database.txt", ios::in | ios::out | ios::ate);
        string vin1,make1, model1, category1, wp1;
        int year1, mileage1;
        float price1;
        string makex, modelx, categoryx, wpx{ "N/A" };
        int yearx, mileagex;
        float pricex;
        cout << "Enter make: ";
        cin >> makex;
        cout << "Enter model: ";
        cin >> modelx;
        cout << "Enter year: ";
        cin >> yearx;
        cout << "Enter price: ";
        cin >> pricex;
        cout << "Enter category: ";
        cin >> categoryx;
        cout << "Enter mileage: ";
        cin >> mileagex;
        while (re >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            old_car old_obj(v, makex, modelx, yearx, pricex, categoryx, mileagex);
            new_car new_obj(v, makex, modelx, yearx, pricex, categoryx, wpx);
            write << new_obj.getvin() << " " << new_obj.getmake() << " " << new_obj.getmodel() << " " << new_obj.getyear()
                << " " << new_obj.getprice() << " " << new_obj.getcategory() << " " << old_obj.getmileage()
                << " " << new_obj.get_warrantyprovider() << endl;
            break;
        }


        
    }else if (c == -2) {
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
        cout << "Enter model: ";
        cin >> modelx;
        cout << "Enter year: ";
        cin >> yearx;
        cout << "Enter price: ";
        cin >> pricex;
        cout << "Enter category: ";
        cin >> categoryx;
        cout << "Enter warranty provider or N/A: ";
        cin >> wpx;
        while (re >> vin1 >> make1 >> model1 >> year1 >> price1 >> category1 >> mileage1 >> wp1) {
            old_car old_obj(v, makex, modelx, yearx, pricex, categoryx, mileagex);
            new_car new_obj(v, makex, modelx, yearx, pricex, categoryx, wpx);
            write << new_obj.getvin() << " " << new_obj.getmake() << " " << new_obj.getmodel() << " " << new_obj.getyear()
                << " " << new_obj.getprice() << " " << new_obj.getcategory() << " " << old_obj.getmileage()
                << " " << new_obj.get_warrantyprovider() << endl;
            break;
        }

    }

}






int printmenu() {
    int entry;
    cout << "CAR DEALERSHIP\n";
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
        case 2:
            sell_lease();
            break;
        case 3:
            return_car();
            break; 
        case 4:
            add_car();
            break;
        }
        entrygbl = printmenu();

    }

    return 0;
}


