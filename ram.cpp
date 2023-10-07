#include "ram.h"
#include <cstring> // for strcpy
#include <iostream>
using namespace std;

RAM::RAM() : name(nullptr), type(nullptr), speed(nullptr), year(0), price(0.0) {}

RAM::RAM(const char *n, const char *t, const char *s, int y, double p) : year(y), price(p)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    type = new char[strlen(t) + 1];
    strcpy(type, t);
    speed = new char[strlen(s) + 1];
    strcpy(speed, s);
}

RAM::RAM(const RAM &obj) : year(obj.year), price(obj.price)
{
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
    type = new char[strlen(obj.type) + 1];
    strcpy(type, obj.type);
    speed = new char[strlen(obj.speed) + 1];
    strcpy(speed, obj.speed);
}

RAM::~RAM()
{
    delete[] name;
    delete[] type;
    delete[] speed;
}

const char *RAM::get_name() const
{
    return name;
}

const char *RAM::get_type() const
{
    return type;
}

const char *RAM::get_speed() const
{
    return speed;
}

int RAM::get_year() const
{
    return year;
}

double RAM::get_price() const
{
    return price;
}

void RAM::set_name(const char *n)
{
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void RAM::set_type(const char *t)
{
    delete[] type;
    type = new char[strlen(t) + 1];
    strcpy(type, t);
}

void RAM::set_speed(const char *s)
{
    delete[] speed;
    speed = new char[strlen(s) + 1];
    strcpy(speed, s);
}

void RAM::set_year(int y)
{
    year = y;
}

void RAM::set_price(double p)
{
    price = p;
}

void RAM::print() const
{
    cout << "Name: " << name << ", Type: " << type << ", Speed: " << speed << ", Year: " << year << ", Price: " << price << endl;
}
