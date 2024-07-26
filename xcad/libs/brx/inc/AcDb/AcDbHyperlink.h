// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "Misc/MiscGlobal.h"

/** _ */
class BRX_IMPORTEXPORT AcDbHyperlink
{
public:
    enum HLinkFlags
    {
        kUndefined = 0,
        kConvertDwgToDwf
    };

    AcDbHyperlink();
    virtual ~AcDbHyperlink();

    virtual bool isOutermostContainer() const = 0;
    virtual const ACHAR* description() const = 0;
    virtual const ACHAR* getDisplayString() const = 0;
    virtual const ACHAR* name() const = 0;
    virtual const ACHAR* subLocation() const = 0;
    virtual const int getNestedLevel() const = 0;
    virtual const long flags() const;
    virtual void setDescription(const ACHAR*) = 0;
    virtual void setFlags(const long);
    virtual void setName(const ACHAR*) = 0;
    virtual void setSubLocation(const ACHAR*) = 0;
};
