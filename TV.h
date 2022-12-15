/*

Author: Shamik V. Patro

*/

#pragma once
#include <string>
#include "Media.h"

class TV : public Media {

    private: 

    public:

    TV(std::string, std::string, int, int, int, std::string);
    void print();

    protected:

    std::string director;
    int year;
    int season;
    int episode;
    std::string genre;


};