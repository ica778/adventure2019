//
//  Builder.cpp
//  adventure2019: builder
//  com.maximpuchkov.Faworki.adventure2019.Builder
//
//  Created by mpuchkov on 2019-03-21. macOS 10.13, Xcode 10.1.
//  Copyright © 2019 Maxim Puchkov. All rights reserved.
//


#include "Builder.h"


Builder::Builder() {
    debug::PrefixMessage = "Builder";
    debug::print("Builder created.");
}

Builder::~Builder() {
    debug::print("Builder destroyed.");
}
