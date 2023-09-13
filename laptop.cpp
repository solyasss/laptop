#include "laptop.h"
#include <cstring>  //for strcpy
#include <iostream>
using namespace std;

int Laptop::laptop_count = 0;

Laptop::Laptop() : name(nullptr), price(0.0), color(nullptr), cpu(), ssd(), gpu(), ram()
{
    laptop_count++;
}

Laptop::Laptop(const char *n, double p, const char *c, const CPU &c_cpu, const SSD &c_ssd, const GPU &c_gpu, const RAM &c_ram)
    : price(p), cpu(c_cpu), ssd(c_ssd), gpu(c_gpu), ram(c_ram)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    color = new char[strlen(c) + 1];
    strcpy(color, c);
    laptop_count++;
}

Laptop::Laptop(const Laptop &obj)
    : price(obj.price), cpu(obj.cpu), ssd(obj.ssd), gpu(obj.gpu), ram(obj.ram)
{
    name = new char[strlen(obj.name) + 1];
    strcpy(name, obj.name);
    color = new char[strlen(obj.color) + 1];
    strcpy(color, obj.color);
    laptop_count++;
}

Laptop::~Laptop()
{
    delete[] name;
    delete[] color;
    laptop_count--;
}

const char *Laptop::get_name() const
{
    return name;
}

double Laptop::get_price() const
{
    return price;
}

const char *Laptop::get_color() const
{
    return color;
}

const CPU &Laptop::get_cpu() const
{
    return cpu;
}

const SSD &Laptop::get_ssd() const
{
    return ssd;
}

const GPU &Laptop::get_gpu() const
{
    return gpu;
}

const RAM &Laptop::get_ram() const
{
    return ram;
}

void Laptop::set_name(const char *n)
{
    delete[] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void Laptop::set_price(double p)
{
    price = p;
}

void Laptop::set_color(const char *c)
{
    delete[] color;
    color = new char[strlen(c) + 1];
    strcpy(color, c);
}

void Laptop::set_cpu(const CPU &c_cpu)
{
    cpu = c_cpu;
}

void Laptop::set_ssd(const SSD &c_ssd)
{
    ssd = c_ssd;
}

void Laptop::set_gpu(const GPU &c_gpu)
{
    gpu = c_gpu;
}

void Laptop::set_ram(const RAM &c_ram)
{
    ram = c_ram;
}

double Laptop::get_total_price() const
{
    return price + cpu.get_price() + ssd.get_price() + gpu.get_price() + ram.get_price();
}

void Laptop::print() const
{
    cout << " Name: " << name << ", Color: " << color << ", Price: " << price << ", Total Price: " << get_total_price() << endl;
    cpu.print();
    ssd.print();
    gpu.print();
    ram.print();
}
