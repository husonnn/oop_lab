#include "lot.hpp"
#include <iostream>

lot::Lot::Lot(double lat, double lon, double wid, double len){
    this->lat = lat;
    this->lon = lon;
    this->wid = wid;
    this->len = len;
}
lot::Lot::~Lot(){
}

double lot::Lot::get_latitude() const{
    return this->lat;
}

double lot::Lot::get_longitude() const{
    return this->lon;
}

double lot::Lot::land_area() const{
    return (this->len) * (this->wid);
}

double lot::Lot::value() const{
    return 16 * (this->land_area()) ;
}

//
//
//

