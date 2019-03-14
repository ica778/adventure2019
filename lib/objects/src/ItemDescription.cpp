//
//  ItemDescription.cpp
//  adventure2019
//
//  Created by admin on 2019-03-05.
//  Copyright © 2019 maximpuchkov. All rights reserved.
//

#include "ItemDescription.h"


ItemDescription::ItemDescription()
: shortdesc(NO_DESCRIPTION), longdesc({NO_DESCRIPTION})
{ }


ItemDescription::ItemDescription(const string &shortdesc, const vector<string> &longdesc)
: shortdesc(shortdesc), longdesc(longdesc)
{ }


// ItemDescription::ItemDescription(objects::Text description);


void ItemDescription::clear() {
    this->shortdesc.empty();
    this->longdesc.empty();
}


string ItemDescription::getShort() const {
    return this->shortdesc;
}


vector<string> ItemDescription::getLong() const {
    return this->longdesc;
}
