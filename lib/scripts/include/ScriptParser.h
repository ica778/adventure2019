/////////////////////////////////////////////////////////////////////////////
//                                  ScriptParser
//
// This file is distributed under the MIT License. See the LICENSE file
// for details.
/////////////////////////////////////////////////////////////////////////////


#include <vector>
#include <string>
#include <sstream>
#include "Environment.h"


using std::vector;
using std::string;
using std::istream_iterator;
using std::istringstream;


using arguments = const vector<string>&;
using function = std::function<void(arguments)>;


struct Script {
    function fn;
    arguments args;
};


/**
 *  @class ScriptParser
 *
 *  @brief Parses scripts and local input.
 *
 *  Parses and validates string input structure.
 */
class ScriptParser {
public:
    
    ScriptParser();
    
    ~ScriptParser();
    
    Script parseScript(string &&input, Environment<string, function> &&env) const noexcept(false);
    
    // void createCommand(const string &name, command function);
    
private:
    
    // static void init(ScriptParser *p);
    
    // Environment<string, command> env;
    
};
