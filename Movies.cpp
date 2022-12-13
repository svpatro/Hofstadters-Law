#include <iostream>
#include <string>
#include "Movies.h"

Movies::Movies(std::string title, std::string director, int year, std::string genre) : Media(title){

this->director = director;
this->year = year;
this->genre = genre;

};

void Movies::print(){

    std::cout << "[Movie] " << title << " (" << year << ")" << " by " << director << " [" << genre << "] " << std::endl;    

}