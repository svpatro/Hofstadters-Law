/*

Author: Shamik V. Patro

*/

#include <iostream>
#include <string>
#include "Photos.h"

Photos::Photos(std::string title, int year) : Media(title){

    this->year = year;

};

void Photos::print(){

    std::cout << "[Photo] " << title << " (" << year << ") " << std::endl; 

}