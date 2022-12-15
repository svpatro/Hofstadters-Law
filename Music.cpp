/*

Author: Shamik V. Patro

*/

#include <iostream>
#include <string>
#include "Music.h"

Music::Music(std::string title, std::string artist, int year, std::string genre) : Media(title){

    this->artist = artist;
    this->year = year;
    this->genre = genre;


}

void Music::print() {

    std::cout << "[Music] " << title << " (" << year << ")" << " by " << artist << " [" << genre << "]" << std::endl;

}