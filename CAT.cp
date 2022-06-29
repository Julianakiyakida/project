//
//  5.cpp
//  arr
//
//  Created by Юлиана Кирьякида on 28.06.2022.
//
#include <iostream>
#include <algorithm>

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

void Cat::SetAge(int a)
{
    if (a > 0 && a <= 20)
        age = a;
    else {
        cout << "Incorrect age" << endl;
        age = a;
    }
}

void Cat::SetColor(string c)
{
    color = c;
}

void Cat::SetEnergy(int e)
{
    if (e >= 0 && e <= 100)
        energy = e;
    else {
        cout << "Incorrect energy!" << endl;
        energy = e;
    }
}

void Cat::SetName(string n)
{
    name = n;
}

void Cat::SetWeight(double w)
{
    if (w >= 0 && w <= 12)
        weight = w;
    else {
        cout << "Incorrect weight" << endl;
        weight = w;
    }
}

string Cat::GetName() const
{
    return name;
}

string Cat::GetColor() const
{
    return color;
}

double Cat::GetWeight() const
{
    return weight;
}

int Cat::GetAge() const
{
    return age;
}

int Cat::GetEnergy() const
{
    return energy;
}
Cat::Cat() : Cat("Toma") {}

Cat::Cat(string n) : Cat(n, 2) {}

Cat::Cat(string n, int a) : Cat(n, a, "white") {}

Cat::Cat(string n, int a, string c) : Cat(n, a, c, 5.5) {}

Cat::Cat(string n, int a, string c, double w) : Cat(n, a, c, w, 60) {}
{
    SetName(n);
    SetAge(a);
    SetColor(c);
    SetEnergy(e);
    SetWeight(w);
}

void Cat::Speak()
{
    cout << name << " says meow" << "\n";
}

void  Cat::Print()
{
    if (energy == 0)
    {
        cout << "Cat's name was " << name << endl;
        cout << name << "Cat's color was " << color << endl;
        cout << name << "Cat's age was " << age << endl;
        cout << name << "Cat's weight was " << weight << endl;
    }
    else {
        cout << "Cat's name is " << name << endl;
        cout << name << "Cat's color is " << color << endl;
        cout << name << "Cat's age is " << age << endl;
        cout << name << "Cat's weight is " << weight << endl;
        cout << name << "Cat's energy is " << energy << endl;
    }
}


void  Cat::Play()
{
    if ( energy >= 60)
        cout << name << "is piaying" << endl;
}

void  Cat::Sleep()
{
    cout << name << " is sleeping" << endl;
}


void Cat::Eat()
{
    cout << GetAge() << endl;
    cout << GetColor() << endl;
    cout << GetEnergy() << endl;
    cout << GetName() << endl;
    cout << GetWeight() << endl;
}
