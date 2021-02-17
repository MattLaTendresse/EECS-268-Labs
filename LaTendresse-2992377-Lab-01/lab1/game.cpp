/*
 File Name: game.cpp
 Auothor: Matt LaTendresse
 KU ID:
 Assignment: EECS268 Lab 1
 Date:
 */

#include "game.h"
#include <string>
#include <iostream>
#include <fstream>
#include <iostream>

//constructor
Game::Game()
{
    //set all variables
    std::string m_name="";
    m_year = 0;
    m_gibbRating = 0;
    m_pubRating = 0;
    m_pubRating = 0;
    m_MaxPlayers = 0;
    m_MaxTime = 0;
}


//getters
void Game::setGame(std::string name,int year ,double gibbRating, double pubRating, int MaxPlayers, double weight, int MaxTime)
{
    m_name = name;
    m_year = year;
    m_gibbRating = gibbRating;
    m_pubRating = pubRating;
    m_MaxPlayers = MaxPlayers;
    m_Weight = weight;
    m_MaxTime = MaxTime;
}

std::string Game::getName() const{
    return m_name;
}

int Game::getYear() const{
    return m_year;
}

double Game::getgRating() const{
    return m_gibbRating;
}

double Game::getpRating() const{
    return m_pubRating;
}

double Game::getWeight() const{
    return m_Weight;
}

int Game::getMaxPlayers()const{
    return m_MaxPlayers;
}

int Game::getMaxTime() const{
    return m_MaxTime;
}



//setters
void Game::setName(std::string name)
{
    m_name=name;
}

void Game::setYear(int year)
{
    m_year = year;
}

void Game::setgibbRating(double gibbRating)
{
    m_gibbRating = gibbRating;
}

void Game::setpubRating(double pubRating)
{
    m_pubRating = pubRating;
}

void Game::setWeight(double weight)
{
    m_Weight= weight;
}

void Game::setMaxPlayers(int maxPlayers)
{
    m_MaxPlayers = maxPlayers;
}

void Game::setMaxTime(int maxTime)
{
    m_MaxTime = maxTime;
}



