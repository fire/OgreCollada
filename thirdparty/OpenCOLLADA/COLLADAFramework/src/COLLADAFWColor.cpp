/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of COLLADAStreamWriter.

    Licensed under the MIT Open Source License, 
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/

#include "COLLADAFWStableHeaders.h"
#include "COLLADAFWColor.h"
#include <assert.h>

namespace COLLADAFW
{

    //---------------------------------------------------------------
    const Color Color::WHITE = Color ( 1.0, 1.0, 1.0, 1.0 );
    const Color Color::BLACK = Color ( 0.0, 0.0, 0.0, 1.0 );

    //---------------------------------------------------------------
    void Color::set ( double r, double g, double b, double a, String sid )
    {
        mR = r;
        mG = g;
        mB = b;
        mA = a;
        mSid = sid;
    }

    //---------------------------------------------------------------
    bool Color::isValid() const
    {
        if (!(( mR >= 0 && mR <= 1 ) &&
            ( mG >= 0 && mG <= 1 ) &&
            ( mB >= 0 && mB <= 1 ) &&
            ( mA >= 0 && mA <= 1 )))
        {
//            assert("Current color is not valid!");
            return false;
        }

        return true;
    }

} // namespace COLLADAFW