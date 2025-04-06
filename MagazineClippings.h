#ifndef MAGAZINECLIPPING_H_INC
#define MAGAZINECLIPPINGS_H_INC

#include <string>
#include <vector>
#include <unordered_map>

//determines if a given message (note) can be constructed using the
//characters available from an array of strings (articles). if this is
//possible, the function returns true. if it isn't, then the function
//returns false. be sure to pass the size of the articles array.
bool can_create_note(std::string note, std::vector<std::string> articles);

#endif
