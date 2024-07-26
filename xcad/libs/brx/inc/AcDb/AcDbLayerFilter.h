// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcDb/AcDbFilter.h"

/** _ */
class BRX_EXPORT AcDbLayerFilter: public AcDbFilter
{
public:
    ACDB_DECLARE_MEMBERS(AcDbLayerFilter);

    AcDbLayerFilter();
    virtual ~AcDbLayerFilter();

    virtual AcRxClass* indexClass() const;
    virtual Adesk::Boolean isValid() const;

    Acad::ErrorStatus add(const ACHAR*);
    Acad::ErrorStatus getAt(int,const ACHAR*&) const;
    Acad::ErrorStatus remove(const ACHAR*);
    int layerCount() const;
};
