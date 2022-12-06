#include<iostream>
#include<fstream>
#include<string>
using namespace std;


class car {
private:
    string vin;
    string make;
    string model;
    int year;
    float price;
    string category;

public:
    string getvin();
    string getmake();
    string getmodel();
    int getyear();
    float getprice();
    string getcategory();

    car();
    car(string v, string m, string mo, int y, float p, string c);


};