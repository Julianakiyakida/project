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
public:

    string name; // кличка кота
    double weight; // вес
    bool is_hungry; // голодный или нет?
    int energy_reserve; // запас энергии от 1 до 100
    int energy = 100;

    void eat()
    {
        if (is_hungry)
        {
            weight += 1;
            if (energy >= 90) energy = 100;
            else energy += 10;
            cout << "вес кота: " << weight;
            is_hungry = false;
        }
    }
    void Speak()
    {
        cout << name << " May.";
    }

    void Energy()
    {

    }

};

int main() {

    setlocale(0, "");
    Cat c;
    c.name = "Tomochka";
    c.weight = 5;
    c.is_hungry = true;
    c.eat();
    c.Speak();

    }
    
    

