//
//  Object.h
//  Objects
//  com.maximpuchkov.Objects.Objects.Object
//
//  Package:             Objects
//  Project:             Objects
//  Workspace:           Objects
//  Organization:        maximpuchkov
//  Prefix:              com
//
//  Author:              Maxim Puchkov (mpuchkov@sfu.ca)
//  Full username:       admin
//  Created on:          2019-03-15 at 4:07 PM
//  System:              macOS 10.13
//  Tools:               Xcode v.10.1 (10B61); Swift 4.0
//
//  Created by admin (Maxim Puchkov).
//  Copyright © 2019 Maxim Puchkov. All rights reserved.
//

#ifndef Object_h
#define Object_h


#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include "UUID.h"


using std::string;
using std::vector;


namespace objects {
    
inline namespace typenames {
using ObjectID = identity::uuid_t;
using Keyword = string;
using Text = string;
using ExtrasBinding = std::pair<string, string>;
using Extras = vector<ExtrasBinding>;
}



class Object {
public:
    
    // Object() { std::cout << "Object\n"; }
    
    virtual ObjectID getID() const = 0;
    
    virtual bool examine(const Keyword &keyword) const = 0;
    
    virtual string display() const = 0;
    
    virtual string display_long() const = 0;
        
    // virtual Keywords
    
};
    
}





#endif /* Object_h */
