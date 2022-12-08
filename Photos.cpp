#include <iostream>
#include <string>
#include "Photos.h"

Photos::Photos(std::string title, int year) : Media(title){

    this->year = year;

};