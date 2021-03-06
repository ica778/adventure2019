#ifndef CHARACTERDB_H
#define CHARACTERDB_H

#include "Character.h"
#include "JsonParser.h"
#include "json.hpp"

#include <unordered_map>
#include <string>
#include <iostream> 
#include <fstream>

using namespace std;
using nlohmann::json;

class CharacterDB {
  private:
    JsonParser jsonParser;
    json characters_json;
    std::string json_filePath = "../adventure2019/data/db/characters.json";
  public:
    CharacterDB();
    ~CharacterDB();

    bool createCharacter(const std::string&);

    bool updateCharacter(Character&);

    Character getCharacter(const std::string&);

    bool deleteCharacter(const std::string& );
};
#endif
