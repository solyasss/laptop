
class SSD
{
private:
    char *name;
    char *speed;
    int year;
    double price;

public:
    SSD();
    SSD(const char *n, const char *s, int y, double p);
    SSD(const SSD &obj);
    ~SSD();

    const char *get_name() const;
    const char *get_speed() const;
    int get_year() const;
    double get_price() const;

    void set_name(const char *n);
    void set_speed(const char *s);
    void set_year(int y);
    void set_price(double p);

    void print() const;
};
