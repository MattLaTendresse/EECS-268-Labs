//
//  Executive.h
//  Lab1
//
//  Created by Matt LaTendresse on 2/13/21.
//

#ifndef Executive_h
#define Executive_h
#include "game.h"

class Executive {
    
private:
    Game* m_games;
    int m_Size;
    int choice;
    std::string m_name;
    int m_year=0;
    double m_gibbRating=0;
    double m_pubRating=0;
    double m_Weight=0;
    int m_MaxPlayers=0;
    int m_MaxTime=0;

    
    
public:
    Executive(char arvg[1]);
    void run();
    void printAll();
    void blast();
    void ranking();
    void versus();
    void recommend();
    void endProg();
    
};

#endif /* Executive_h */

