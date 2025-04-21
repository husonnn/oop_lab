#pragma once
#include "lot.hpp"

namespace developed_lot{
    class DevelopedLot: public lot::Lot{
    private:
        double area;
        double num_flr;
    public:
        DevelopedLot(double, double, double, double, double, double);
    
        virtual ~DevelopedLot();
    
        using lot::Lot::value;
        double value() const;
    
    protected:
        using lot::Lot::land_area;
        double floor_area_ratio() const;
    };
}