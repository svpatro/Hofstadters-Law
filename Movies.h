#pragma once
#include <string>
#include "Media.h"

class Movies : public Media {

    private:

    public:

    Movies(std::string, std::string, int, std::string);

    protected:

    std::string director;
    int episode;
    std::string genre;

};