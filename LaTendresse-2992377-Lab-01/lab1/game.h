/*
 File Name: game.cpp
 Auothor: Matt LaTendresse
 KU ID:
 Assignment: EECS268 Lab 1
 Date:
 */


//in charge of ->
//define a game

#ifndef game_h
#define game_h
#include <string>

class Game {
    
private:
    //initialize all variables for a game
    std::string m_name;
    int m_year=0;
    double m_gibbRating=0;
    double m_pubRating=0;
    double m_Weight=0;
    int m_MaxPlayers=0;
    int m_MaxTime=0;

    
public:
    Game();

    
    //getters
    std::string getName() const;
    int getYear() const;
    double getgRating() const;
    double getpRating() const;
    double getWeight() const;
    int getMaxPlayers() const;
    int getMaxTime() const;
    
    //setters
    void setGame(std::string name,int year ,double gibbRating, double pubRating, int MaxPlayers, double weight, int MaxTime);
    void setName(std::string name);
    void setYear(int year);
    void setgibbRating(double gibbRating);
    void setpubRating(double pubRating);
    void setWeight(double weight);
    void setMaxPlayers(int maxPlayers);
    void setMaxTime(int maxTime);
      
};
#endif /* game_h */

