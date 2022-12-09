#include <iostream>
#include <stdlib.h>
#include <string>
#include "Media.h"
#include "Movies.h"
#include "Music.h"
#include "Photos.h"
#include "Podcasts.h"
#include "TV.h"

void mainMenu();


void content(){

    system("clear");
    std::string choice;
    std::cout << "\n------------------------------------------------------------------------------------------\n|" << std::endl;
    std::cout << "\t\tWelcome to Content Management! \t\t\n|" << std::endl;
    std::cout << "Please select an option from the list: \t\t\t|" << std::endl;
    std::cout << "------------------------------------------------------------------------------------------|\n" << std::endl;
    std::cout << "Devices: \t\t\t\t Explanation:" << std::endl;
    std::cout << std::endl;
    std::cout << "A: Toshiba Gigabeat MP3 Player" << std::endl;
    std::cout << "B: Galaxy S3 Smartphone Device" << std::endl;
    std::cout << "C: Rebel T4 DSLR Camera" << std::endl;
    std::cout << std::endl;
    std::cout << "R: Return to Main Menu" << std::endl;
    std::cout << std::endl;
    std::cout << "Choice: ";
    std::getline(std::cin, choice);

    if (choice == "R" || choice == "r"){

        mainMenu();

    }

}



void sorting(){

    system("clear");
    std::string choice;
    std::cout << "\n------------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Welcome to Sorting! \n\nPlease select an option from the list: \t\t\t|\n" << std::endl;
    std::cout << "------------------------------------------------------------------------------------------\n" << std::endl;
    std::cout << std::endl;
    std::cout << "Choice: ";
    std::getline(std::cin, choice);


}

void storing(){

    system("clear");
    std::string choice;
    std::cout << "\n-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "\t\t\t\tWelcome to Storing! \t\t\t\t\t\n" << std::endl;
    std::cout << "\t\t\tDBManager has detected the following: \t\t\t\t\n" << std::endl;
    std::cout << "> Toshiba Gigabeat MP3 Player \t\t\t\t\t\t\t\t" << std::endl;
    std::cout << "> Galaxy S3 Smartphone Device\t\t\t\t\t\t\t\t" << std::endl;
    std::cout << "> Nikon Rebel T4 DSLR Camera\t\t\t\t\t\t\t\t\n" << std::endl;
    std::cout << "\t\t\tPlease choose a option from the list: \t\t\t\t" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------\n" << std::endl;
    std::cout << "Devices: \t\t\t\t\t File(s) Accepted:" << std::endl;
    std::cout << std::endl;
    std::cout << "A: Toshiba Gigabeat MP3 Player\t\t\t .mp3" << std::endl;
    std::cout << "B: Galaxy S3 Smartphone Device\t\t\t .mp3, .mp4, .jpeg, .png" << std::endl;
    std::cout << "C: Rebel T4 DSLR Camera\t\t\t\t .mp4, .png, .jpeg" << std::endl;
    std::cout << std::endl;
    std::cout << "R: Return to Main Menu" << std::endl;
    std::cout << std::endl;
    std::cout << "Choice: ";
    std::getline(std::cin, choice);

    if (choice == "R" || choice == "r"){

        mainMenu();

    }
    
}


void printing(){

    system("clear");
    std::string choice;
    std::cout << "\n-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "\t\t\t\tWelcome to Printing!\t\t\t\t\t" << std::endl;
    std::cout << "\t\t\t\t\t\t\t\t\t\t\t" << std::endl;
    std::cout << "\t\t\tPlease input an option to get started.\t\t\t\t" << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "A: Print all content in the database" << std::endl;
    std::cout << "B: Print only music, only movies, only TV shows, only podcasts, or only videos" << std::endl;
    std::cout << "C: Print only content that can be listened to" << std::endl;
    std::cout << "D: Print only content that can be viewed" << std::endl;
    std::cout << std::endl;
    std::cout << "R: Return to Main Menu" << std::endl;
    std::cout << std::endl;
    std::cout << "Choice: ";
    std::getline(std::cin, choice);

    if ( choice == "R" or choice == "r"){

        mainMenu();

    }

}

void mainMenu(){

    system("clear");
    std::string choice;
    std::cout << "\n-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "\t\t\tWelcome to the Main Menu of DBManager!" << std::endl;
    std::cout << std::endl;
    std::cout << "\t\t\tPlease input an option to get started." << std::endl;
    std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Options: \t\t\t\t Explanation:" << std::endl;
    std::cout << std::endl;
    std::cout << "A. Database Printing Service\t\t Printing content from database." << std::endl; // Printing elements from Database
    std::cout << "B. Multimedia Storing Service\t\t Storing elements from database to external device." << std::endl; // Storing elements from Database to Multimedia Device
    std::cout << "C. Database Sorting Service\t\t Sorting database based on custom criteria." << std::endl; // Sorting elements from Database
    std::cout << "D. Database Content Management\t\t Adding content to database." << std::endl; // Managing content within database
    std::cout << "E. Quit the program\t\t\t Leave the program." << std::endl;
    std::cout << std::endl;
    std::cout << "Choice: ";
    std::getline(std::cin, choice);

    if (choice == "A" || choice == "a"){

        printing();

    }

    else if (choice == "B" || choice == "b"){

        storing();

    }

    else if (choice == "C" || choice == "c"){

        sorting();

    }

    else if (choice == "D" || choice == "d"){

        content();

    }

    else if (choice == "E" || choice == "e"){

        std::cout << std::endl;
        system("clear");
        std::cout << "Exiting DBManager..." << std::endl;
        std::cout << "DBMananger Exited!" << std::endl;
        std::exit(-1);

    }

}


int main(){

    mainMenu();

    return 0;
}