//
//  Item.cpp
//  adventure2019
//
//  Created by admin on 2019-02-06.
//  Copyright © 2019 maximpuchkov. All rights reserved.
//

#include "Item.h"
#include "ItemHash.h"


namespace items {


/* Constructors */

Item::Item()
{ }


Item::Item(const Keywords &keywords,
           const Description &description,
           const Actions &actions)
: keywords(keywords), description(description), actions(actions)
{ }


Item::Item(Identifier id,
           const Keywords &keywords,
           const Description &description,
           const Actions &actions)
: itemID(id), keywords(keywords), description(description), actions(actions)
{ }


Item::~Item()
{ }






/* Object Interface */

Identifier Item::id() const {
    return this->itemID;
}


Key Item::brief() const {
    return this->keywords.asString();
}


Text Item::toString() const {
    return this->description.full();
}


Text Item::examine(const Key &keyword) const {
    
    // .....
    return "callee: Item::examine(const Key&)";
    
}






/* Operators */

Item& Item::operator=(Item &other) {
    this->itemID = other.id();
    this->keywords = other.keywords;
    this->description = other.description;
    this->actions = other.actions;
    return *this;
}


Item& Item::operator=(const Item &other) {
    this->itemID = other.id();
    this->keywords = other.keywords;
    this->description = other.description;
    this->actions = other.actions;
    return *this;
}

} /* namespace items */



namespace std {


size_t hash<Item>::operator()(const Item &item) const {
    return hash<unsigned long>{}(item.id());
}


} /* namespace std */