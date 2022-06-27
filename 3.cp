//
//  main.cpp
//  arr
//
//  Created by Юлиана Кирьякида on 04.06.2022.
//

#include <iostream>
using namespace std;



    

class Cat
{

    string name; // кличка кота
    double weight; // вес
    bool is_hungry; // голодный или нет?
    int energy = 100; //запас энергии
    int age; // возраст

    void SetName(string n)
    {
        cout << "name" << name << endl;
        }
};
    void SetWeight(double w)
    {
        if (w>=0 && w<=50)
            cout << "weight" << weight << endl;
        else
            cout << "incorrect" << endl;
        weight=50;
    };

void SetIs_hungry(bool h)
{
    if (false)
        cout << "hungry" << endl;
    else
        cout << " no hungry" << endl;
};
    void SetEnergy(int e)
    {
if(e>=0 && e<=100)
    energy=e;
        else
            cout << "incorrect" << endl;
    };



int main() {

    setlocale(0, "");
    Cat cat;
    cat.SetName("Toma");
    cat.SetWeight(20);
    cat.SetIs_hungry(true);
    cat.SetEnergy(80);






}
