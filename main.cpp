#include <iostream>
#include "laptop.h"
using namespace std;

int main()
{
    SSD ssd1("Samsung SSD", "256GB", 2022, 200.99);
    SSD ssd2("Samsung SSD", "1TB", 2019, 100.99);

    GPU gpu1("NVIDIA", "GTX 1660", 2020, 300.99);
    GPU gpu2("AMD", "RX 5700", 2020, 400.99);

    RAM ram1("Corsair", "DDR4", "3200MHz", 2020, 200.99);
    RAM ram2("Kingston", "DDR4", "2666MHz", 2019, 100.99);

    Laptop laptop1("Laptop 1", 1000.99, "Black", CPU("Intel", "i7", 2022, 500.99), ssd1, gpu1, ram1);
    Laptop laptop2("Laptop 2", 1200.99, "Titanium Blue", CPU("AMD", "Ryzen 5", 2021, 400.99), ssd2, gpu2, ram2);

    laptop1.print();
    laptop2.print();

    cout << "Total laptops created: " << Laptop::laptop_count << endl;

    return 0;
}
