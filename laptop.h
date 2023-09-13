#include "cpu.h"
#include "ssd.h"
#include "gpu.h"
#include "ram.h"

class Laptop {
private:
    char* name;
    double price;
    char* color;
    CPU cpu;
    SSD ssd;
    GPU gpu;
    RAM ram;

public:
    static int laptop_count;

    Laptop();
    Laptop(const char* n, double p, const char* c, const CPU& c_cpu, const SSD& c_ssd, const GPU& c_gpu, const RAM& c_ram);
    Laptop(const Laptop& obj);
    ~Laptop();

    const char* get_name() const;
    double get_price() const;
    const char* get_color() const;
    const CPU& get_cpu() const;
    const SSD& get_ssd() const;
    const GPU& get_gpu() const;
    const RAM& get_ram() const;

    void set_name(const char* n);
    void set_price(double p);
    void set_color(const char* c);
    void set_cpu(const CPU& c_cpu);
    void set_ssd(const SSD& c_ssd);
    void set_gpu(const GPU& c_gpu);
    void set_ram(const RAM& c_ram);

    double get_total_price() const;
    void print() const;
};

