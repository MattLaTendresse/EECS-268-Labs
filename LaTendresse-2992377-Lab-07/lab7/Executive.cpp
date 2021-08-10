//
//  Executive.cpp
//  lab7
//
//  Created by Matt LaTendresse on 4/6/21.
//  this file initializes the methods defined in the Executive.h file and
//  runs the methods that actually get the time for the operations we are timing 

#include "Executive.h"
#include <time.h>
#include <fstream>
#include <iostream>

Executive::Executive()
{
    
}

void Executive::run()
{  

    std::ofstream myOutFile;
    std::string fileName = "myOutputFile.txt";
    myOutFile.open(fileName);
    int a=1000;
    int b=1000;
    int c=1000;
    int d=1000;
    int e=1000;
    int g=1000;

    try {

        myOutFile<<"Test Stack pop"<<"\n";
        while (a!=101000)
        {

            myOutFile<<testPop(a)<<"\n";
            a=a+1000;
        }

        myOutFile<<"Test Stack's destructor"<<"\n";
        while (b!=101000)
        {

            myOutFile<<testDest(b)<<"\n";
            b=b+1000;
        }

        myOutFile<<"Test Queue's enqueu"<<"\n";
        while (c!=101000)
        {

            myOutFile<<testEnque(c)<<"\n";
            c=c+1000;
        }

        myOutFile<<"Test Linked List getEntry at specifically index 1"<<"\n";
        while (d!=101000)
        {

            myOutFile<<testListFirstIndex(d)<<"\n";
            d=d+1000;
        }

        myOutFile<<"Test Linked List getEntry at specifically the last index"<<"\n";
        while (e!=101000)
        {

            myOutFile<<testListLastIndex(e)<<"\n";
            e=e+1000;
        }

        myOutFile<<"Test Printing all elements in a LinkedList using getEntry"<<"\n";
        while (g!=101000)
        {

            myOutFile<<testPrintList(g)<<"\n";
            g=g+1000;
        }

    } catch (std::runtime_error& rte) {
        myOutFile<<rte.what()<<"\n";
    }
    myOutFile.close();
}

//this one is weird
double Executive::testPop(int entry)
{
    Stack<int> popTest;
    for (int i = 0; i<=entry; i++)
    {
        popTest.push(i);
    }
    //start time
    clock_t startTime = clock();
    popTest.pop();
    //end time
    clock_t endTime = clock();
    //return time
    return ((double)(endTime-startTime)/CLOCKS_PER_SEC);

}

double Executive::testDest(int entry)
{
    Stack<int> popTest;
    for (int i = 0; i<=entry; i++)
    {
        popTest.push(i);
    }
    //start time
    clock_t startTime = clock();

    popTest.~Stack<int>();
    
    //end time
    clock_t endTime = clock();
    //return time
    return ((double)(endTime-startTime)/CLOCKS_PER_SEC);
}

double Executive::testEnque(int entry)
{
    Queue<int> testQueue;
    clock_t startTime = clock();
    for (int i = 0; i<=entry; i++) {
        testQueue.enqueue(i);
    }
    clock_t endTime = clock();
    return ((double)(endTime-startTime)/CLOCKS_PER_SEC);
}


double Executive::testListFirstIndex(int entry)
{
    LinkedList<int> list;
    for (int i=1; i<=entry+1; i++){
            list.insert(i,i);
    }
    clock_t startTime = clock();
    list.getEntry(1);
    clock_t endTime = clock();
    return ((double)(endTime-startTime)/CLOCKS_PER_SEC);
}

double Executive::testListLastIndex(int entry)
{
    LinkedList<int> list;
    for (int i=1; i<=entry+1; i++){
            list.insert(i,i);
    }
    clock_t startTime = clock();
    list.getEntry(list.length());
    clock_t endTime = clock();
    return ((double)(endTime-startTime)/CLOCKS_PER_SEC);
}

double Executive::testPrintList(int entry)
{
    LinkedList<int> list;
    for (int i=1;i<=entry+1;i++) {
        list.insert(i,i);
    }
    clock_t startTime = clock();
    for (int i = 1; i<=list.length()-1; i++) {
        list.getEntry(i);
    }
    clock_t endTime = clock();
    return ((double)(endTime-startTime)/CLOCKS_PER_SEC);
}

