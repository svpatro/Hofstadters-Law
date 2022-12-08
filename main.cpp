#include <iostream>
#include <string>
#include "Media.h"
#include "Movies.h"
#include "Music.h"
#include "Photos.h"
#include "Podcasts.h"
#include "TV.h"

int main(){

    std::string choice;
    std::cout << std::endl;
    std::cout << "Welcome to the database! \nPlease choose a letter from the following list: " << std::endl;
    std::cout << "-----------------------------------------------\n" << std::endl;
    std::cout << "A: Print all content in the database" << std::endl;
    std::cout << "B: Print only music, only movies, only TV shows, only podcasts, or only videos" <<  std::endl;
    std::cout << "C: Print only content that can be listened to" << std::endl;
    std::cout << "D: Print only content that can be viewed" << std::endl;
    std::cout << "E: Quit the program" << std::endl;
    std::cout << std::endl;
    std::cout << "Choice: ";
    std::getline(std::cin, choice);

    // Input verification

    if (choice != "A" || choice != "a" || choice != "B" || choice != "b")

    return 0;
}