//
//  main.cpp
//
//  Created by Юлиана Кирьякида on 30.06.2022.
//

#include <iostream>

using namespace std;

class Point
{
    int X;
    int Y;

public:
    void SetX(int x);
    void SetY(int y);
    int GetX() const;
    int GetY() const;

    Point();
    Point(int x);
    Point(int x, int y);

    void Show();
    void Left(int c);
    void Right(int c);
    void Up(int c);
    void Down(int c);
};
void Point::SetX(int x)
{
    X = x;
}

void Point::SetY(int y)
{
    Y = y;
}

int Point::GetX() const
{
    return X;
}

int Point::GetY() const
{
    return Y;
}

Point::Point() : Point(0) {};
Point::Point(int x) : Point(x, 0) {};
Point::Point(int x, int y)
{
    SetX(x);
    SetY(y);
}

void Point::Show()
{
    cout << "X axis coordinate is " << GetX() << endl;
 cout << "Y axis coordinate is " << GetY() << endl;
   cout << std::endl;
}

void Point::Left(int c)
{
    cout << "The coordinates of the point before shifting are : x = " << X << " y = " << Y << endl;
    X -= c;
    cout << "The current coordinates of the point are: x = " << X << " y = " << Y << endl;
    cout << std::endl;
}

void Point::Right(int c)
{
    cout << "The coordinates of the point before shifting are : x = " << X << " y = " << Y << endl;
    X += c;
    cout << "The current coordinates of the point are: x = " << X << " y = " << Y << endl;
    cout << endl;
}

void Point::Up(int c)
{
    cout << "The coordinates of the point before shifting are : x = " << X << " y = " << Y << endl;
    Y += c;
    cout << "The current coordinates of the point are: x = " << X << " y = " << Y << endl;
    cout << endl;
}

void Point::Down(int c)
{
    cout << "The coordinates of the point before shifting are : x = " << X << " y = " << Y << endl;
    Y -= c;
    cout << "The current coordinates of the point are: x = " << X << " y = " << Y << endl;
    cout << endl;
}

int main()
{
    Point A;
    A.Show();

    Point H(8);
    H.Show();

    Point B(3, 5);
    B.Show();

    Point C(10, 15);
    C.Left(5);
    
    Point D(5, 4);
    D.Right(3);

    Point E(5, -7);
    E.Up(5);

    Point F(9, 0);
    F.Down(6);
}
