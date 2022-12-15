/*

Author: Shamik V. Patro

*/

#include <iostream>
#include <string>
#include "Media.h"

Media::Media(std::string title){

    this->title = title;

};

void Media::print(){

    std::cout << "I am media" << std::endl;

};