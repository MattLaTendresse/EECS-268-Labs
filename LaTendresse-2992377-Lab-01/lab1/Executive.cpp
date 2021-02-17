//
//  Executive.cpp
//  Lab1
//
//  Created by Matt LaTendresse on 2/13/21.
//

#include "Executive.h"
#include <iostream>
#include <fstream>
#include <string>
#include <limits>

Executive::Executive(char argv[1])
{
    std::fstream inFile(argv);
    inFile >> m_Size;
    m_games = new Game[m_Size];
    //array is made then populated from argument given when prog opened
    if (inFile.is_open())
    {
        for (int i =0; i< m_Size; i++)
        {
            //read in from file
            inFile >> m_name >> m_year >> m_gibbRating >> m_pubRating >> m_Weight >> m_MaxPlayers >> m_MaxTime;
            m_games[i].setGame(m_name, m_year, m_gibbRating, m_pubRating, m_Weight, m_MaxPlayers, m_MaxTime);
        }
        
    }
    else
    {
        std::cout<<"file not found"<<std::endl;
    }
    inFile.close();
}
    
    

//print menu
void Executive::run ()
{
        
    int choice = 0;
    std::cout<<"Please choose an input"<<std::endl;
    std::cout<<"1. Print all games"<<std::endl;
    std::cout<<"2. Blast from the past"<<std::endl;
    std::cout<<"3. Print a ranking game"<<std::endl;
    std::cout<<"4. The people VS Dr Gibbons"<<std::endl;
    std::cout<<"5. Find game recommendations"<<std::endl;
    std::cout<<"6. Exit Program"<<std::endl;
    std::cout<<"Choice: "<<std::endl;
    while (!(std::cin >> choice))
    {
        std::cin.clear(); // clear failbit from character
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore bad input
        std::cout<<"Please enter an integer"<<std::endl;
    }
    std::cout<<std::endl;
//run menu functions
    if(choice == 1){
        printAll();
    }
    else if(choice == 2){
        blast();
    }
    else if(choice ==3){
        ranking();
    }
    else if(choice ==4){
        versus();
    }
    else if(choice == 5){
        recommend();
    }
    else if(choice == 6){
        endProg();
    }
}

//menu option 1
void Executive::printAll()
{
    for (int i =0; i < m_Size; i++) {
        std::cout<<m_games[i].getName() <<' '<<"("<< m_games[i].getYear()<<")  [GR= "<< m_games[i].getgRating()<<", PR= "<<m_games[i].getpRating()<<", WT= "<<m_games[i].getWeight()<<", MP= "<<m_games[i].getMaxTime() <<"]"<<std::endl;
    }
    //returns menu again for more inputs
    run();
}


//menu option 2
void Executive::blast()
{
    for(int j =0;j< m_Size;j++)
    {
        int temp=0;
        //go through array getting largest year
        for (int i = 0; i < m_Size; i++)
        {
            if (temp < m_games[i].getYear())
            {
                temp = m_games[i].getYear();
            }
           
        }
         if (m_games[j].getYear() == temp)
         {
             std::cout<< m_games[j].getName() <<' '<<"("<< m_games[j].getYear()<<")  [GR= "<< m_games[j].getgRating()<<", PR= "<<m_games[j].getpRating()<<", WT= "<<m_games[j].getWeight()<<", MP= "<<m_games[j].getMaxTime() <<"]"<<std::endl;
         }
    }
    run();
}

//menu option 3
void Executive::ranking()
{
    int userRank=0;
    std::cout<<"Please enter a number, 1-10, the number entered will display all games with Gibbons rating up to that number " << std::endl;
    while (!(std::cin >> userRank))
    {
        std::cin.clear(); // clear failbit from character
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore bad input
        std::cout<<"Please enter an integer"<<std::endl;
    }
    
    //loop to iterate through array
    for (int i =0; i < m_Size; i++)
    {
        m_games[i].getgRating();
        //if the value of the gRating is less than or equal to user rating it's printed
        if (m_games[i].getgRating() <= userRank)
        {
            std::cout<< m_games[i].getName() <<' '<<"("<< m_games[i].getYear()<<")  [GR= "<< m_games[i].getgRating()<<", PR= "<<m_games[i].getpRating()<<", WT= "<<m_games[i].getWeight()<<", MP= "<<m_games[i].getMaxTime() <<"]"<<std::endl;
        }
    }
    run();
}

//menu option 4
void Executive::versus()
{
    double userNum=0;
    std::cout<<"Please enter a number, 0-10, the number entered will display all games with people's rating and Dr. Gibbons rating are seperated by that much or more" << std::endl;
    std::cin>>userNum;
    
    for (int i =0; i < m_Size; i++)
    {
        double diff=0,pRating=0,gRating=0;
        pRating = m_games[i].getpRating();
        gRating = m_games[i].getgRating();
        diff = pRating - gRating;
        if (diff >= userNum )
        {
            std::cout<< m_games[i].getName() <<' '<<"("<< m_games[i].getYear()<<")  [GR= "<< m_games[i].getgRating()<<", PR= "<<m_games[i].getpRating()<<", WT= "<<m_games[i].getWeight()<<", MP= "<<m_games[i].getMaxTime() <<"]"<<std::endl;
        }
    }
    run();
}


//menu option 5
void Executive::recommend()
{
    int playTime, playCount, minRank;
    std::cout<<"Please enter a play time (minutes): "<<std::endl;
    std::cin>>playTime;
    std::cout<<"Please enter a player count: "<<std::endl;
    std::cin>>playCount;
    std::cout<<"Please enter a min rank: "<<std::endl;
    std::cin>>minRank;
for (int i=0; i < m_Size; i++)
{
        if (m_games[i].getMaxTime() <= playTime)
        {
            std::cout<< m_games[i].getName() <<' '<<"("<< m_games[i].getYear()<<")  [GR= "<< m_games[i].getgRating()<<", PR= "<<m_games[i].getpRating()<<", WT= "<<m_games[i].getWeight()<<", MP= "<<m_games[i].getMaxTime() <<"]"<<std::endl;
        }
        if (m_games[i].getMaxPlayers() < playCount)
        {
            std::cout<< m_games[i].getName() <<' '<<"("<< m_games[i].getYear()<<")  [GR= "<< m_games[i].getgRating()<<", PR= "<<m_games[i].getpRating()<<", WT= "<<m_games[i].getWeight()<<", MP= "<<m_games[i].getMaxTime() <<"]"<<std::endl;
        }
        if (m_games[i].getgRating() >= minRank)
        {
            std::cout<< m_games[i].getName() <<' '<<"("<< m_games[i].getYear()<<")  [GR= "<< m_games[i].getgRating()<<", PR= "<<m_games[i].getpRating()<<", WT= "<<m_games[i].getWeight()<<", MP= "<<m_games[i].getMaxTime() <<"]"<<std::endl;
        }
    }
    run();
}



//menu option 6
void Executive::endProg()
{
    std::cout<<"Goodbye!"<<std::endl;
    delete [] m_games;
}












