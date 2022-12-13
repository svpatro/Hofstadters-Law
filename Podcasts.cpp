#include <iostream>
#include <string>
#include "Podcasts.h"

Podcasts::Podcasts(std::string title, std::string creator, int year, int season, int episode) : Media(title){

    this->creator = creator;
    this->year = year;
    this->season = season;
    this->episode = episode;

};

void Podcasts::print(){

    std::cout << "[Podcast] " << title << " (" << year << ") by " << creator << " [S" << season << "E" << episode << "]" << std::endl;

}