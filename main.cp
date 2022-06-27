//
//  main.cpp
//  arr
//
//  Created by Юлиана Кирьякида on 04.06.2022.
//

#include <iostream>


using namespace std;

class Person
{private:
string name;
int age;
double weight;
bool gender;
public:

Person(string n, int a)
{
SetName(n);
SetAge(a);
SetWeight(55);
SetGender(true);

}
 void SetName(string n)
{
if (any_of(n.begin(), n.end(), ::isdigit))
{
cout << "Incorrect!\n";
return;
}
name = n;
}
 void SetAge(int a)
{
if (a < 0 || a > 120)
{
cout << "Incorrect!\n";
throw "Incorrect age!";
}
age = a;
}
 void SetWeight(double w)
{
if (w < 0 || w > 600)
{
cout << "Incorrect!\n";
throw "Incorrect weight!";
}
weight = w;
}
 void SetGender(bool g)
{
gender = g;
}
 string GetName() const
{
return name;
}
 int GetAge() const
{
    
return age;
}
 double GetWeight() const
{
return weight;
}
 bool GetGender() const
{
return gender;
}
};
Person::Person(){
SetName("Mikky");
        SetAge(20);
        SetGender(true);
        SetWeight(65);
        }
