// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcRx/AcRxOverrule.h"


/** _ */
class BRX_IMPORTEXPORT AcDbGripOverrule: public AcRxOverrule
{
public:
    ACRX_DECLARE_MEMBERS(AcDbGripOverrule);

    AcDbGripOverrule();

    virtual Acad::ErrorStatus getGripPoints(const AcDbEntity*, AcGePoint3dArray&, AcDbIntArray&, AcDbIntArray&);
    virtual Acad::ErrorStatus getGripPoints(const AcDbEntity*, AcDbGripDataPtrArray&, const double, const int, const AcGeVector3d&, const int);
    virtual Acad::ErrorStatus getStretchPoints(const AcDbEntity*, AcGePoint3dArray&);
    virtual void gripStatus(AcDbEntity*, const AcDb::GripStat);
    virtual Acad::ErrorStatus moveGripPointsAt(AcDbEntity*, const AcDbIntArray&, const AcGeVector3d&);
    virtual Acad::ErrorStatus moveGripPointsAt(AcDbEntity*, const AcDbVoidPtrArray&, const AcGeVector3d&, const int);
    virtual Acad::ErrorStatus moveStretchPointsAt(AcDbEntity*, const AcDbIntArray&, const AcGeVector3d&);
};
