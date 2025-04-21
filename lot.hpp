#pragma once


namespace lot{
class Lot{
private:
    double lat;
    double lon;
    double wid;
    double len;
public:
    Lot(double, double, double, double);
    
    virtual ~Lot();

    double get_latitude() const;

    double get_longitude() const;

    virtual double value() const;

protected:
    double land_area() const;
};
}

