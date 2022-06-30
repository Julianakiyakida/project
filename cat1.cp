//
//  main.cpp
//
//  Created by Юлиана Кирьякида on 30.06.2022.
//

#include <iostream>


using namespace std;

class Cat
{
private:
    string name;
    string color;
    double weight;
    int age;
    int energy;

public:

    Cat();
    Cat(string n);
    Cat(string n, int a);
    Cat(string n, int a, string c);
    Cat(string n, int a, string c, double w);
    Cat(string n, int a, string c, double w, int e);


    void SetName(string n);
    void SetColor(string c);
    void SetWeight(double w);
    void SetAge(int a);
    void SetEnergy(int e);
    

    string GetName() const;
    string GetColor() const;
    double GetWeight() const;
    int GetAge() const;
    int GetEnergy() const;
    

    void Speak();
    void Print();
    void Play();
    void Sleep();
    void Eat();

};


