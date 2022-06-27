//
//  main.cpp
//  arr
//
//  Created by Юлиана Кирьякида on 04.06.2022.
//

#include <iostream>
using namespace std;


     

int main(int argc, const char * argv[]) {
    setlocale (0,"ru");
   
    class Room
    {
        double square;
        string color; // цвет стен
        // ...
    };

    class House
    {
    public:
        // 1) что ты такое - какие сделать поля (аттрибуты, свойства, характеристики) - список переменных/констант, которые описывают сущность

        int storeys; // этажность
 double square; // площадь жилая
        bool parking; // есть ли паркинг
        bool cozy; // уютно ли там
        int balcony_count; // количество балконов
        string address;
        int count_of_rooms; // количество комнат
        Room* rooms = new Room[3]; // по умолчанию в домах по три комнаты

        // 2) что можно делать с помощью объектов таког типа? что умеют делаь сами объекты? что можно сделать с объектами?
        void Print() // посмотреть на дом
        {
            cout << "Этажность дома: " << storeys << "\n";
            cout << "Cколько балконов: " << balcony_count << "\n";
            cout << "Адрес дома: " << address << "\n";
        }

        void Sale() // дом можно продать
        {

        }

        void Repair() // дом можно отремонтировать
        {

        }
    };

   
    class Fridge
        { public:
            double weight;//вес
            string color;//цвет
            string situat;//где расположен
            bool filled;// насколько заполнен
            string condition;//какое состояние

       
        void Print() {
            cout << "weight" << weight << endl;
            cout << "color" << color << endl;
            cout << "situat" << situat << endl;
            cout << "filled" << filled << endl;
            cout << "condition" << condition << endl;
            }
        void Sale()
        {
            cout << "weight" << weight << endl;
            cout << "color" << color << endl;
            cout << "situat" << situat << endl;
            cout << "filled" << filled << endl;
            cout << "condition" << condition << endl;
        }
        void Repair()
        {
            cout << "weight" << weight << endl;
            cout << "color" << color << endl;
            cout << "situat" << situat << endl;
            cout << "filled" << filled << endl;
            cout << "condition" << condition << endl;
        }
            void Turn()
            {
                cout << "weight" << weight << endl;
                cout << "color" << color << endl;
                cout << "situat" << situat << endl;
                cout << "filled" << filled << endl;
                cout << "condition" << condition << endl;
            }
            
            
            void Wash()
            {
                cout << "weight" << weight << endl;
                cout << "color" << color << endl;
                cout << "situat" << situat << endl;
                cout << "filled" << filled << endl;
                cout << "condition" << condition << endl;
            }
            
            void Give()
            {
                cout << "weight" << weight << endl;
                cout << "color" << color << endl;
                cout << "situat" << situat << endl;
                cout << "filled" << filled << endl;
                cout << "condition" << condition << endl;
            }

    };
        class Food
        {public:
            double amount;//кол-во
            bool expiration_date;//срок годности
            double cost;//стоимость
            bool usefulness;//насколько полезная
            bool deliciousness;//насколько вкусно

       
            void Stoit()
            {
                cout << "amount" << amount << endl;
                cout << "expiration_date" << expiration_date << endl;
                cout << "cost" << cost << endl;
                cout << "usefulness" << usefulness << endl;
                cout << "deliciousness" << deliciousness << endl;
            }

    };
}
