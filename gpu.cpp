#include "gpu.h"
#include <cstring> //for strcpy
#include <iostream>
using namespace std;

GPU::GPU() : name(nullptr), model(nullptr), year(0), price(0.0)
{
}

GPU::GPU(const char *n, const char *m, int y, double p) : year(y), price(p)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    model = new char[strlen(m) + 1];
    strcpy(model, m);
}

GPU::GPU(const GPU &obj) : year(obj.year), price(obj.price)
{
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
    model = new char[strlen(obj.model) + 1];
    strcpy(model, obj.model);
}

GPU::~GPU()
{
    delete[] name;
    delete[] model;
}

const char *GPU::get_name() const
{
    return name;
}

const char *GPU::get_model() const
{
    return model;
}

int GPU::get_year() const
{
    return year;
}

double GPU::get_price() const
{
    return price;
}

void GPU::set_name(const char *n)
{
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void GPU::set_model(const char *m)
{
    delete[] model;
    model = new char[strlen(m) + 1];
    strcpy(model, m);
}

void GPU::set_year(int y)
{
    year = y;
}

void GPU::set_price(double p)
{
    price = p;
}

void GPU::print() const
{
    cout << "Name: " << name << ", Model: " << model << ", Year: " << year << ", Price: " << price << endl;
}
