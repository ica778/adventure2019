//
//  KeywordSet.h
//  objects
//  com.maximpuchkov.Faworki.adventure2019.KeywordSet
//
//  Package:             objects
//  Project:             adventure2019
//  Workspace:           Faworki
//  Organization:        maximpuchkov
//  Prefix:              com
//
//  Author:              Maxim Puchkov (mpuchkov@sfu.ca)
//  Full username:       admin
//  Created on:          2019-03-17 at 3:16 PM
//  System:              macOS 10.13
//  Tools:               Xcode v.10.1 (10B61); Swift 4.0
//
//  Created by admin (Maxim Puchkov).
//  Copyright © 2019 Maxim Puchkov. All rights reserved.
//

#ifndef KeywordSet_h
#define KeywordSet_h

#include "Object.h"
namespace objects {


struct KeywordSet {
public:
    
    /* Constructors */
    KeywordSet();
    KeywordSet(const std::vector<Key> &container);

    
    /* Keywords */
    Set all() const;
    Key first() const;
    Key last() const;
    Text asString() const;
    Text asString(const Text &delimeter) const;
    
    
    /* Set functions */
    void insert(); /* undefined */
    void erase(); /* undefined */
    bool contains(const Key &key) const;
    bool empty() const;
    void clear();
    size_t size() const;
    
    
    /* Operators */
    KeywordSet& operator=(KeywordSet &);
    KeywordSet& operator=(const KeywordSet &);
    bool operator==(KeywordSet &ks) const;
    bool operator==(const KeywordSet &ks) const;
    bool operator!=(KeywordSet &ks) const;
    bool operator!=(const KeywordSet &ks) const;
    
    
    /* Convert */
    std::vector<Key> toVector() const;
    
private:
    
    Set set;
    const Text SET_DELIMETER = ", ";
    
};


}

#endif /* KeywordSet_h */