#include <iostream>
#include <string>
#include "Movies.h"

Movies::Movies(std::string title, std::string director, int episode, std::string genre) : Media(title){

this->director = director;
this->episode = episode;
this->genre = genre;

};