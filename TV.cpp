#include <iostream>
#include <string>
#include "TV.h"

TV::TV(std::string title, std::string director, int year, int season, int episode, std::string genre) : Media(title){

    this->director = director;
    this->year = year;
    this->season = season;
    this->episode = episode;
    this->genre = genre;
    
};
