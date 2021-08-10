/*
@author Matt LaTendresse
@file   Executive.h
@date   3/30/2021
@brief  this file creates all the methods for the Executive class
*/
#ifndef Executive_h
#define Executive_h
#include <string>
#include "List.h"
#include "BrowserHistoryInterface.h"
#include "Browser.h"

class Executive 
{
private:
    Browser m_browser;
public:
    
    Executive();
   //~Executive(){};
    /**
    * @pre there is an executve object
    * @post the run method is ran on the executive object
    * @return none
    */
    void run(std::string fileName);
   
};

#endif /* Executive_h */

