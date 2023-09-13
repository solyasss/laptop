#include "cpu.h"
#include "ssd.h"
#include "ram.h"
#include "videocard.h"
using namespace std;

class Laptop
{
private:
    char *name;
    char *color;
    int year;
    double price;
    CPU cpu;
    SSD ssd;
    Videocard vd;
    RAM ram;

public:
    static int count;
    Laptop();
    Laptop(const char *n, const char *c, int y, double pr,
           const char *cpu_name, const char *cpu_speed, int cpu_year, double cpu_price,
           const char *ssd_name, const char *ssd_speed, int ssd_year, double ssd_price,
           const char *vd_name, const char *vd_model, int vd_year, double vd_price,
           const char *ram_name, const char *ram_model, const char *ram_speed, int ram_year, double ram_price);
    Laptop(const Laptop &obj);
    void print();
    ~Laptop();

    void calculate_price() const;
    static void num_of_laptops();
};