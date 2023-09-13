#include "ssd.h"
#include <cstring> //for strcpy
#include <iostream>
using namespace std;

SSD::SSD() : name(nullptr), speed(nullptr), year(0), price(0.0)
{
}

SSD::SSD(const char *n, const char *s, int y, double p) : year(y), price(p)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    speed = new char[strlen(s) + 1];
    strcpy(speed, s);
}

SSD::SSD(const SSD &obj) : year(obj.year), price(obj.price)
{
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
    speed = new char[strlen(obj.speed) + 1];
    strcpy(speed, obj.speed);
}

SSD::~SSD()
{
    delete[] name;
    delete[] speed;
}

const char *SSD::get_name() const
{
    return name;
}

const char *SSD::get_speed() const
{
    return speed;
}

int SSD::get_year() const
{
    return year;
}

double SSD::get_price() const
{
    return price;
}

void SSD::set_name(const char *n)
{
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void SSD::set_speed(const char *s)
{
    delete[] speed;
    speed = new char[strlen(s) + 1];
    strcpy(speed, s);
}

void SSD::set_year(int y)
{
    year = y;
}

void SSD::set_price(double p)
{
    price = p;
}

void SSD::print() const
{
    cout << " Name: " << name << ", Speed: " << speed << ", Year: " << year << ", Price: " << price << endl;
}
