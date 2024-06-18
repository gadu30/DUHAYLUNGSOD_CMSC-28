#include "Movie.h"
#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

void progDesc(){
    cout << "                          PROGRAM DESCRIPTION" << endl;
    cout << " This program asks the user to input the details of a movie and display the information" << endl;
    cout << "                       Programmed by: Gabriel I. Duhaylungsod" << endl;
    cout << "                                  Date: May 17, 2024" << endl;
}

using namespace std;

int main(){
    
    progDesc();

    string title, synopsis, mpaa, genre;
    string directorFname, directorLname, directorGender;
    string actorFname, actorLname, actorGender;

    cout << "Enter movie title: " << endl;
    getline(cin, title);

    cout << "Enter synopsis: " << endl;
    getline(cin, synopsis);

    cout << "Enter MPAA: " << endl;
    getline(cin, mpaa);

    cout << "Enter genre: " << endl;
    getline(cin, genre);
    
    cout << "Name the director: " << endl;
    cout << "First Name: " << endl;
    getline(cin, directorFname);

    cout << "Last Name: " << endl;
    getline(cin, directorLname);

    cout << "Gender: " << endl;
    cin >> directorGender;
    cin.ignore(); // To ignore the newline character in the input buffer
    person director(directorFname, directorLname, directorGender);

    cout << "Name the actor/actress: " << endl;
    cout << "First Name: " << endl;
    getline(cin, actorFname);

    cout << "Last Name: " << endl;
    getline(cin, actorLname);

    cout << "Gender: " << endl;
    cin >> actorGender;
    cin.ignore(); // To ignore the newline character in the input buffer
    person actor(actorFname, actorLname, actorGender);

    movie movieh(director, actor, title, synopsis, genre, mpaa);

    cout << "Movie details" << endl;
    cout << "Movie Title: " << movieh.getTitle() << endl;
    cout << "Synopsis: " << movieh.getSynopsis() << endl;
    cout << "MPAA Rating: " << movieh.getMpaa() << endl;
    cout << "Genre: " << movieh.getGenre() << endl;
    cout << "Directed by: " << movieh.getDirector().getFullName() << endl;
    cout << "Starring: " << movieh.getActor().getFullName() << endl;

    return 0;
}