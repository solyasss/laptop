#include "cpu.h"
#include <cstring> // for strcpy
#include <iostream>
using namespace std;

CPU::CPU() : name(nullptr), speed(nullptr), year(0), price(0.0)
{
}

CPU::CPU(const char *n, const char *s, int y, double p) : year(y), price(p)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    speed = new char[strlen(s) + 1];
    strcpy(speed, s);
}

CPU::CPU(const CPU &obj) : year(obj.year), price(obj.price)
{
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
    speed = new char[strlen(obj.speed) + 1];
    strcpy(speed, obj.speed);
}

CPU::~CPU()
{
    delete[] name;
    delete[] speed;
}

const char *CPU::get_name() const
{
    return name;
}

const char *CPU::get_speed() const
{
    return speed;
}

int CPU::get_year() const
{
    return year;
}

double CPU::get_price() const
{
    return price;
}

void CPU::set_name(const char *n)
{
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void CPU::set_speed(const char *s)
{
    delete[] speed;
    speed = new char[strlen(s) + 1];
    strcpy(speed, s);
}

void CPU::set_year(int y)
{
    year = y;
}

void CPU::set_price(double p)
{
    price = p;
}

void CPU::print() const
{
    cout << "CPU - Name: " << name << ", Speed: " << speed << ", Year: " << year << ", Price: " << price << endl;
}
