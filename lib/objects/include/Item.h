//
//  Item.h
//  adventure2019
//
//  Created by admin on 2019-02-06.
//  Copyright © 2019 maximpuchkov. All rights reserved.
//

#ifndef Item_h
#define Item_h

#include <set>
#include <unordered_set>
#include <string>
#include <functional>
#include <iostream>
#include "Constructor.h"
#include "ItemDescription.h"


using std::string;

using objects::Object;



/**
 @class Item
 
 @brief ...
 */
class Item : public Object {
public:
    
    /// Default item constructor with an object ID, identifying keywords,
    ///     item description, and extra actions.
    Item(ObjectID id,
         const std::set<Keyword> &keywords,
         const ItemDescription &description,
         const Extras &extras);
    
    
    /// Retrieve object ID
    ObjectID getID() const override;
    
    
    /// Display item's first keyword
    string display() const override;
    
    
    /// Display item's long description, list of keywords,
    /// and extra actions.
    string display_long() const override;
    
    
    /// Examine an Extra attribute of an item
    bool examine(const Keyword &keyword) const override;
    
    
    bool hasKeyword(const Keyword &keyword) const;
    
    
    // Keyword at(unsigned int index) const;
    
    
private:
    
    string display_keywords() const;
    
    ObjectID id;
    
    std::set<Keyword> keywords;
    
    // std::multimap<unsigned int, Keyword> extraActions;
    
    ItemDescription description;
    
    Extras extras;
    
    
};


/// Item's hashing function
template<>
struct std::hash<Item> {
    std::size_t operator()(const Item &item) const;
};







/**
 *  @class Item
 *
 *  @brief Any in-game item
 */

    /*
    Item();
    Item(const string &shortDescription);
    Item(const string &shortDescription, const string &longDescription);
    Item(const Item &item);
    Item(Item &&other);
    virtual ~Item();
    */
    /*
    virtual string getShortDescription() const;
    virtual string getLongDescription() const;
    unsigned long getID() const;
    void setLongDescription(string &&longDescription);
    */
    /*
    virtual Item& operator=(Item &&other) noexcept;
    */
    /*
    bool operator==(Item &other) const;
    bool operator==(const Item &other) const;
    */

/*
template<>
struct std::hash<Item> {
    size_t operator()(const Item &item) const;
};
*/

#endif /* Item_h */
