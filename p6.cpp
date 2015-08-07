/*
*	p6.cpp
*
*	Created on: May 01 2015
*	Author: Darren Langley (N0485381)
*/

#ifndef P6_CPP_
#define P6_CPP_

#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void p6(string&, const string&, char);

/*
int main()
{
	clock_t t1, t2;
	string theStr = "The Coding Challenge!";
	t1 = clock();
	p6(theStr, "aeiou", '_');
	cout << theStr << endl;
	t2 = clock();
	double seconds = (double)(t2 - t1) / CLOCKS_PER_SEC;
	double milli = seconds * 1000;
	double minutes = seconds / 60;
	cout << "Milliseconds: " << milli << endl;
	cout << "Seconds: " << seconds << endl;
	cout << "Minutes: " << minutes << endl;
}
*/


void p6(string& toBeProcessed, const string& toBeIgnored, char ch)
{
	for (int i = 0; i < toBeProcessed.length(); ++i)
	{
		if (string::npos != toBeIgnored.find(toBeProcessed[i]))
		{
			toBeProcessed[i] = ch;
		}
	}
}

#endif