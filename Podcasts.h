#pragma once
#include <string>
#include "Media.h"

class Podcasts : public Media {

    private:

    public:

    Podcasts(std::string, std::string, int, int, int);
    void print();

    protected:

    std::string creator;
    int year;
    int season;
    int episode;

};