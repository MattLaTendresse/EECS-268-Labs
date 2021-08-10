/*
@author Matt LaTendresse
@file   Browser.cpp
@date   3/30/2021
@brief  this file implements all the inherited functions from Browser.h
*/

#include <stdio.h>
#include "Browser.h"

Browser::Browser()
{
    m_history = new List<std::string>();
    m_current = 0;
}

Browser::~Browser()
{
    delete m_history;
}

void Browser::navigateTo(std::string url)
{
    //add to the front
    if (m_current == 0 )
    {
        m_history->insert(1, url);
        m_current++;
    }
    //add to the end
    else{
    m_history->insert(m_current+1, url);
        m_current++;
    }
    //removing if adding to middle
    if (m_current < m_history->length())
    {
        /*possibly add a length + 1
          didnt run for last entry*/
        for(int i = m_current+1;i<=m_history->length();i++)
        {
            //m_history->remove(m_history->length()-1);
            m_history->remove(m_history->length());

        }
        /*this is probably wrong
         it set m_current back to 1*/
        m_current--;
    }
}

void Browser::forward()
{
    if (m_current<m_history->length())
    {
        m_current++;
    }
}

void Browser::back()
{
    if (m_current > 1) {
        m_current--;
    }
}

std::string Browser::current() const
{
    return m_history->getEntry(m_current);
}

void Browser::copyCurrentHistory(List<std::string> & destination)
{
    for (int i=destination.length();i>0; i--)
    {
        m_history->insert(1, destination.getEntry(i));
    }
}

void Browser::print()
{
    std::cout<<"Oldest\n";
    std::cout<<"===========\n";
    for (int i=1; i<m_history->length()+1; i++)
    {
        if (i == m_current)
        {
            std::cout<<m_history->getEntry(i)<<" <==current\n";
        }
        else{
            std::cout<<m_history->getEntry(i)<<std::endl;
        }
    }
    std::cout<<"===========\n";
    std::cout<<"Newest\n\n";
}


