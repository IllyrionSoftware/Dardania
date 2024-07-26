// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcRx/AcRxObject.h"

class AcDbObject;

/** _ */
class BRX_IMPORTEXPORT AcDbAnnotativeObjectPE: public AcRxObject
{
public:
    ACRX_DECLARE_MEMBERS(AcDbAnnotativeObjectPE);

    virtual Acad::ErrorStatus setForceAnnoAllVisible(AcDbObject*, bool) const;
    virtual bool forceAnnoAllVisible(AcDbObject*) const;

    virtual Acad::ErrorStatus setAnnotative(AcDbObject*, const bool) = 0;
    virtual bool annotative(AcDbObject*) const = 0;

    virtual Acad::ErrorStatus resetScaleDependentProperties(AcDbObject*);
    virtual Acad::ErrorStatus setFromStyle(AcDbObject*, bool&) = 0;
};
