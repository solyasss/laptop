#include <iostream>
#include "laptop.h"
using namespace std;

Laptop::Laptop()
{
    name = nullptr;
    color = nullptr;
    year = 0;
    price = 0.0;
    CPU cpu;
    SSD ssd;
    Videocard vd;
    RAM ram;
}

Laptop::Laptop(const char *n, const char *c, int y, double pr,
               const char *cpu_name, const char *cpu_speed, int cpu_year, double cpu_price,
               const char *ssd_name, const char *ssd_speed, int ssd_year, double ssd_price,
               const char *vd_name, const char *vd_model, int vd_year, double vd_price,
               const char *ram_name, const char *ram_model, const char *ram_speed, int ram_year, double ram_price) : cpu(cpu_name, cpu_speed, cpu_year, cpu_price),
                                                                                                                     ssd(ssd_name, ssd_speed, ssd_year, ssd_price),
                                                                                                                     gpu(vd_name, vd_model, vd_year, vd_price),
                                                                                                                     ram(ram_name, ram_model, ram_speed, ram_year, ram_price)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    color = new char[strlen(c) + 1]; // constructor with parameters
    strcpy_s(color, strlen(c) + 1, c);
    year = y;
    price = pr;
}

Laptop::Laptop(const Laptop &obj)
{
    name = new char[strlen(obj.name) + 1];
    strcpy_s(name, strlen(obj.name) + 1, obj.name);
    color = new char[strlen(obj.color) + 1];
    strcpy_s(color, strlen(obj.color) + 1, obj.color);
    year = obj.year;
    price = obj.price;

    cpu.set_name(obj.cpu.get_name());
    cpu.set_speed(obj.cpu.get_speed());
    cpu.set_year(obj.cpu.get_year());
    cpu.set_price(obj.cpu.get_price());

    ssd.set_name(obj.ssd.get_name());
    ssd.set_speed(obj.ssd.get_speed());
    ssd.set_year(obj.ssd.get_year());
    ssd.set_price(obj.ssd.get_price());

    vd.set_name(obj.vd.get_name());
    vd.set_model(obj.vd.get_model());
    vd.set_year(obj.vd.get_year());
    vd.set_price(obj.vd.get_price());

    ram.set_name(obj.ram.get_name());
    ram.set_model(obj.ram.get_model());
    ram.set_speed(obj.ram.get_speed());
    ram.set_year(obj.ram.get_year());
    ram.set_price(obj.ram.get_price());
}

void Laptop::print()
{
    cout << "name: " << name << "\tcolor: " << color << "\tyear: " << year << "\tprice: " << price << endl;
    cpu.print();
    ssd.print();
    vd.print();
    ram.print();
}

Laptop::~Laptop()
{
    delete[] name;
    delete[] color;
}