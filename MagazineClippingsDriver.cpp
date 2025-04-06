#include <iostream>
#include <vector>
#include "MagazineClippings.h"

using namespace std;

string output_result(bool b);
string arr_to_str(vector<string> vec);

int main()
{
    vector<vector<string>> clippings {
                         {"a"},
                         {"ab"},
                         {"a", "b"},
                         {"a", "b", "c"},
                         {"I write a lot.", "To and fro.", "Here be deadly dragons!"},
                         {"b"},
                         {"bc"},
                         {"b","c"},
                         {"a","b","d"},
                         {"I write a lot.","To and fro."},
                         {"I write a lot.","To and fro.","Here be deadly dragons"}
                         };

    cout << "\n\n" << arr_to_str(clippings[0]) << " can create 'a': "
            << output_result(can_create_note("a", clippings[0]))
            << "\n\n" << arr_to_str(clippings[1]) << " can create 'a': "
            << output_result(can_create_note("a", clippings[1]))
            << "\n\n" << arr_to_str(clippings[2]) << " can create 'a': "
            << output_result(can_create_note("a", clippings[2]))
            << "\n\n" << arr_to_str(clippings[3]) << " can create 'abc': "
            << output_result(can_create_note("abc", clippings[3]))
            << "\n\n" << arr_to_str(clippings[4]) << " can create 'The bird is red!': "
            << output_result(can_create_note("The bird is red!", clippings[4]))
            << "\n\n" << arr_to_str(clippings[5]) << " can create 'a': "
            << output_result(can_create_note("a", clippings[5]))
            << "\n\n" << arr_to_str(clippings[6]) << " can create 'a': "
            << output_result(can_create_note("a", clippings[6]))
            << "\n\n" << arr_to_str(clippings[7]) << " can create 'a': "
            << output_result(can_create_note("a", clippings[7]))
            << "\n\n" << arr_to_str(clippings[8]) << " can create 'abc': "
            << output_result(can_create_note("abc", clippings[8]))
            << "\n\n" << arr_to_str(clippings[9]) << " can create 'The bird is red': "
            << output_result(can_create_note("The bird is red", clippings[9]))
            << "\n\n" << arr_to_str(clippings[10]) << " can create 'The bird is red!': "
            << output_result(can_create_note("The bird is red!", clippings[10]));

    return 0;
}

string output_result(bool b)
{
    if(b)
    {
        return "True";
    }
    else
    {
        return "False";
    }
}

string arr_to_str(vector<string> vec)
{
    string str{"[ "};

    for(size_t i = 0; i < vec.size(); i++)
    {
        if(i == vec.size() - 1)
        {
            str += vec[i] + " ]";
        }
        else
        {
            str += vec[i] + ", ";
        }
    }

    return str;
}
