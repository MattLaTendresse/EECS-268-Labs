/*
@author Matt LaTendresse
@file   Browser.h
@date   3/30/2021
@brief  this file creates the methods to be implemented into out browser class
*/

#ifndef Browser_h
#define Browser_h
#include "BrowserHistoryInterface.h"
#include "ListInterface.h"
#include "List.h"
#include <string>
#include <iostream>

class Browser 
{
private:
    List<std::string>* m_history;
    int m_current;
public:
    //ADD COMMENTS
    Browser();
    ~Browser();
    /**
    * @pre there is an Browser object
    * @post the browser navigate to the given url
    * @return none
    */
    void navigateTo(std::string url);
    /**
    * @pre there is an Browser object
    * @post if possible, the browser navigates forward in the history otherwise it keeps focus
     *         on the current URL
    * @return none
    */
    void forward();
    /**
    * @pre there is an Browser object
    * @post the back method is ran on the Brower object
    * @return none
    */
    void back();
    /**
    * @pre there is an Browser object
    * @post none
    * @return string, the current url
    */
    std::string current() const;
    /**
    * @pre there is an Browser object
    * @post the Browser is printed
    * @return none
    */
    void print();
    /**
    * @pre None
    * @post The list is cleared out, then the current browser history is copied into the given list
    * @param destination, an empty list of strings
    */
    void copyCurrentHistory(List<std::string>& destination);
};
#endif /* Browser_h */

