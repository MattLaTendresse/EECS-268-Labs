/*
@author Matt LaTendresse
@file   BrowserHistoryInterface.h
@date   3/30/2021
@brief  BrowserHistory Interface class defines the pure virtual methods for our list to use later on
*/

#ifndef BrowserHistoryInterface_h
#define BrowserHistoryInterface_h
#include "ListInterface.h"
#include <string>

class BrowserHistoryInterface
{
  public:
  /**
  * @post All memory allocated by the implementing class should be freed.
  *       This, as with all virtual destructors, is an empty definition since we
  *       have no knowledge of specific implementation details.
  */
  virtual ~BrowserHistoryInterface(){}

  /**
  * @pre none
  * @post the browser navigate to the given url
  * @param url, a string representing a URL
  */
  virtual void navigateTo(std::string url) = 0;

  /**
  * @pre none
  * @post if possible, the browser navigates forward in the history otherwise it keeps focus
  *         on the current URL
  */
  virtual void forward() = 0;

  /**
  * @pre none
  * @post if possible, the browser navigates backwards in the history otherwise it keeps focus
  *         on the current URL
  */
  virtual void back() = 0;

  /**
  * @return the current URL
  */
  virtual std::string current() const = 0;

  /**
  * @pre None
  * @post The list is cleared out, then the current browser history is copied into the given list
  * @param destination, an empty list of strings
  */
  virtual void copyCurrentHistory(ListInterface<std::string>& destination) = 0;
};

#endif /* BrowserHistoryInterface_h */

