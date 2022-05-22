#include <string>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string reverse(string in)
{
	reverse(in.begin(),in.end());
	return in;
}

int count(string within, char find)
{
    int x= 0;
    for (int i= 0; i<within.length() ;i++)
    if ( within[i]== find)
    {
    	x=x+1;
    }

	return x;
}


string onlyAlpha(string within)
{
	for (int i = 0; i < within.size(); i++) {

	        if (within[i] < 'A' || within[i] > 'Z' && within[i] < 'a' || within[i] > 'z')
	        {
                within.erase(i, 1);
	            i--;
	        }
	    }
	return within;
}

int count(string within, string find)
{
	int count=0;
	int j =0 ;
	for (int i = 0; i < within.length(); i++)
	{
	   if (within[i] == find[j] )
			{
				j= j+1;
			}
	   else
	   {
		   j=0;
	   }
	    if (j== find.length())
	    {
	    	count= count+1;
	    }
	}
	return count;
}

string markDoubles(string within)
{

    for (int i=0; i<within.length(); i++)
    {
    	if (within[i]== within[i+1])
    	{
    		within.insert(i+1,"2");
    	}
    }
    return within;
}

bool isPalindrome(string within)
{
    if( equal(within.begin(), within.begin() + within.size()/2, within.rbegin()) )
    {
    	return true;
    }
    else
    {
     return false;
    }
}

string swapCase(string within)
{
	for (int i = 0; i< within.size(); i++)
	{
	        if (isupper(within[i]))
	        {
	            within[i] = tolower(within[i]);
	        }
	        else if (islower(within[i]))
	        {
	            within[i] = toupper(within[i]);
	        }
	}
	return within;
}

int countNs(string within)
{
	return count(within,'n');
}


