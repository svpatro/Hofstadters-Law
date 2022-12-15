# Hofstadter's Law

Final project for Intermediate C++ - Hosted on Github for compatibility purposes.

> Hofstadter's Law - "It always takes longer than you expect, even when you take into account Hofstader's Law."

### Project Specifications:

- User input via console
- Input validation
- Conditional Statements (if/else)
- Arithmetic Operations
- Arrays
- Loops (while/for)
- File I/O
- Object-Oriented Programming
- Interitance/Abstraction/Polymorphism
- Enumerated Type (enum)
- Generic/Template class/function/method

### Minimum Viable Product:

The minimum viable product of this project will satisfy the following user stories:

    1. Begin the program with a menu which allows the user to perform a series of tasks:

        a. Print all content in the database
        b. Print only music, only movies, only TV shows, only podcasts, or only photos
        c. Print all content which can be listened to
        d. Print all content which can be viewed
        e. Quit the program


    2. Suppose we have three devices plugged in. The first device is an MP3 player- it can only store audio files. The second device is a smartphone- it can store any type of file. The third device is a camera- it can only store visual files.  Allow the user to attempt to load content onto any of these devices.  (Note: You can simply have a printout saying "<some content> was loaded onto the <device>", this is only a simulation. However, make sure that only the correct types of files can be loaded onto any device)

    3. Ensure that your database has at least 5 examples of each file type*.
        a. Music: title, creator name (artist), year, genre
        b. Movie: title, creator name (director), year, genre
        c. TV Show: title, creator name (director), year, season, episode, genre
        d. Podcast: title, creator name, year, season, episode
        e. Photo: title, year

    4. Allow the user to sort subsets of the database based on at least two types of criteria. For example, sort all episodic files based on their episode number or sort all files which have a creator based on their creator’s name

    5. Come up with 3 interesting queries which you can run on your database. You can use your own or use some of these examples (Note- your query must return something, don’t choose a query which does not have an answer):
        a. What is the oldest music file in the database which belongs to the ‘Rock’ genre?
        b. Which creator has the most movies in the database before 2000?
        c. How many photos in the database have a filename which begins with the letter ‘J’?
        d. Which year has the most files in the database?
        e. Which has more files in the database- odd numbered years or even numbered years?

    6. The entire program compiles, satisfies the requirements on the rubric (see Canvas), and does not have any unhandled exceptions. This includes protection against a malicious user attempting to break the program. Additionally, the program is free of infinite loops or other undesirable behaviors.



### Stretch Goals:

- Allow the user to retrieve a ‘shuffled’ collection of all the music in the database. Print this collection out and ensure the order is different every time.

- Add a 4th query to the MVP which returns an interesting ranking of some sort. For example: print the top 5 most common genres and the number of times they appear or: print the 3 most common letters in the ‘title’ property of each file and the number of times each is used

- Allow the user to add a new file to the database. This can be of any type and does NOT need to persist between program runs

- Implement the above stretch goal AND allow the newly created multimedia instance to persist between program runs (such as modifying the .csv file using file I/O)

- Add a ‘duration’ property to the appropriate classes. Implement some query related to duration such as retrieving all files with a higher-than-average runtime or retrieving the longest file in each category. Note: the duration property must use the built-in duration class.

- Allow multiple genres to be assigned to a single variable without using arrays, vectors, etc. (you’ll have to get creative with bit-shifting or other built-in classes)

- Include ‘Album’ as a category of multimedia which stores a collection of Songs. Accomplish this while only using a single .csv file and no hard-coding.

- Add a ‘rating’ field to every filetype- but different filetypes are rated differently. For example: songs are rated from 1-5 as whole integers, movies are a percentage rating, and photos are a thumb up/thumb down. Accomplish this with a single variable (hint: use templates!)

- Use a template container we did not discuss in class. The implementation must be appropriate for the use-case.

- Utilize a regular expression in a query.

- Write your program with redundancy so that a missing, modified, or moved dataset will not throw any unhandled exceptions and will instead alert the user to the problem.