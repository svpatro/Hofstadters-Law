/*

Author: Shamik V. Patro

*/

#pragma once
#include <string>
#include "Media.h"

class Movies : public Media {

    private:

    public:

    Movies(std::string, std::string, int, std::string);
    void print() override;

    protected:

    std::string director;
    int year;
    std::string genre;

};