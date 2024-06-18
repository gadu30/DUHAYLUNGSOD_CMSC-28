#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class movie{
    private:
        person director;
        person actor;
        string title;
        string synopsis;
        string genre;
        string mpaa;

    public:
        movie(){}
        movie (person directorParam, person actorParam, string titleParam, string synopsisParam, string genreParam, string mpaaParam){
            director = directorParam;
            actor = actorParam;
            title = titleParam;
            synopsis = synopsisParam;
            genre = genreParam;
            mpaa = mpaaParam;
        }

        person getDirector(){
            return director;
        }

        person getActor(){
            return actor;
        }

        string getTitle(){
            return title;
        }

        string getSynopsis(){
            return synopsis;
        }

        string getGenre(){
            return genre;
        }

        string getMpaa(){
            return mpaa;
        }

        void setDirector(person newDirector){
            director = newDirector;
        }

        void setActor(person newActor){
            actor = newActor;
        }

        void setTitle(string newTitle){
            title = newTitle;
        }

        void setSynopsis(string newSynopsis){
            synopsis = newSynopsis;
        }

        void setGenre(string newGenre){
            genre = newGenre;
        }

        void setMpaa(string newMpaa){
            mpaa = newMpaa;
        }
};

#endif