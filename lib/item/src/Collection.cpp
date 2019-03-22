//
//  Collection.cpp
//  adventure2019
//
//  Created by admin on 2019-02-06.
//  Copyright © 2019 maximpuchkov. All rights reserved.
//

#include "Collection.h"
using namespace objects;



Identifier Collection::id() const {
    return this->collectionID;
}


Key Collection::brief() const {
    return this->keywords.first();
}


Text Collection::details() const {
    return this->keywords.asString();
}


bool Collection::hasKeyword(const Key &keyword) const {
    return this->keywords.contains(keyword);
}


bool Collection::examine(const Key &keyword) const {
    
    // .....
    return true;
    
}
