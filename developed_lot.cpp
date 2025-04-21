#include "developed_lot.hpp"
#include <iostream>

developed_lot::DevelopedLot::DevelopedLot(double lat, double lon, double wid, double len, double area, double num_flr) : lot::Lot::Lot(lat, lon, wid, len){
    
    this->area = area;
    this->num_flr = num_flr;
}

developed_lot::DevelopedLot::~DevelopedLot(){

}

double developed_lot::DevelopedLot::floor_area_ratio() const{
    return (this->area * this->num_flr) / (this->Lot::land_area());
}

double developed_lot::DevelopedLot::value() const{
    return this->Lot::value() + 100 * (this->num_flr * this->area);
}