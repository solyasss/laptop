
class RAM
{
private:
    char *name;
    char *type;
    char *speed;
    int year;
    double price;

public:
    RAM();
    RAM(const char *n, const char *t, const char *s, int y, double p);
    RAM(const RAM &obj);
    ~RAM();

    const char *get_name() const;
    const char *get_type() const;
    const char *get_speed() const;
    int get_year() const;
    double get_price() const;

    void set_name(const char *n);
    void set_type(const char *t);
    void set_speed(const char *s);
    void set_year(int y);
    void set_price(double p);

    void print() const;
};
