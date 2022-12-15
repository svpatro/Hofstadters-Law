/*

Author: Shamik V. Patro

*/

#pragma once
#include <string>
#include "Media.h"

class Photos : public Media {

    private:

    public:

    Photos(std::string, int);
    void print();

    protected:

    int year;


};