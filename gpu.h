
class GPU
{
private:
    char *name;
    char *model;
    int year;
    double price;

public:
    GPU();
    GPU(const char *n, const char *m, int y, double p);
    GPU(const GPU &obj);
    ~GPU();

    const char *get_name() const;
    const char *get_model() const;
    int get_year() const;
    double get_price() const;

    void set_name(const char *n);
    void set_model(const char *m);
    void set_year(int y);
    void set_price(double p);

    void print() const;
};
