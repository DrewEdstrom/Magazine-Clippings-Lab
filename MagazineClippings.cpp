#include <string>
#include <vector>
#include <unordered_map>
#include "MagazineClippings.h"

using namespace std;

//determines if a given message (note) can be constructed using the
//characters available from an array of strings (articles). if this is
//possible, the function returns true. if it isn't, then the function
//returns false. be sure to pass the size of the articles array.
bool can_create_note(string note, vector<string> articles)
{
    //the pool of characters we have to pull from, where the key is the
    //character and the value is how many instances of its associated
    //character are available
    unordered_map<char, int> char_pool;

    //process each article in articles[]
    for(string article: articles)
    {
        //for each character in article
        for(char c: article)
        {
            //if the character isn't whitespace
            if(c != ' ')
            {
                //increment the number of available instances of the
                //character c, defaulting to lowercase as the case is
                //irrelevant
                ++char_pool[static_cast<char>(tolower(c))];
            }
        }
    }

    //for each character in the desired note
    for(char c: note)
    {
        //if the character isn't whitespace
        if(c != ' ')
        {
            //check to see if character is available from the char_pool
            if(char_pool[static_cast<char>(tolower(c))] > 0)
            {
                //if it is, decrement the number of available instances to
                //reflect that an instance has been "used up"
                --char_pool[static_cast<char>(tolower(c))];
            }
            //otherwise
            else
            {
                //we cannot build the desired note as we lack sufficient
                //characters to do so
                return false;
            }
        }
    }

    //at this point, we have confirmed that the desired note can be
    //constructed from the articles provided
    return true;
}
