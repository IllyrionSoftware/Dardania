// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcRx/AcRxOverrule.h"


/** _ */
class BRX_IMPORTEXPORT AcDbGeometryOverrule : public AcRxOverrule
{
public:
    ACRX_DECLARE_MEMBERS(AcDbGeometryOverrule);

    AcDbGeometryOverrule();

    virtual Acad::ErrorStatus getGeomExtents(const AcDbEntity*, AcDbExtents&);
    virtual Acad::ErrorStatus intersectWith(const AcDbEntity*, const AcDbEntity*, AcDb::Intersect, AcGePoint3dArray&, Adesk::GsMarker = 0, Adesk::GsMarker = 0);
    virtual Acad::ErrorStatus intersectWith(const AcDbEntity*, const AcDbEntity*, AcDb::Intersect, const AcGePlane&, AcGePoint3dArray&, Adesk::GsMarker = 0, Adesk::GsMarker = 0);
};
