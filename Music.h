#pragma once
#include <string>
#include "Media.h"

class Music : public Media {

    private:

    public:

    Music(std::string, std::string, int, std::string);

    protected:

    std::string artist;
    int year;
    std::string genre;

};