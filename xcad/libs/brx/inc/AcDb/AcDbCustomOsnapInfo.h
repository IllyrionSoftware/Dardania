// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcRx/AcRxObject.h"
#include "Misc/AcArray.h"

class AcDbEntity;
class AcGeCurve3d;
class AcGePoint3d;
class AcGeMatrix3d;

/** _ */
class BRX_IMPORTEXPORT AcDbCustomOsnapInfo: public AcRxObject
{
public:
    ACRX_DECLARE_MEMBERS(AcDbCustomOsnapInfo);

    virtual Acad::ErrorStatus getOsnapInfo(AcDbEntity*,
                                           Adesk::GsMarker,
                                           const AcGePoint3d&,
                                           const AcGePoint3d&,
                                           const AcGeMatrix3d&,
                                           AcGePoint3dArray&,
                                           AcDbIntArray&,
                                           AcArray<AcGeCurve3d*>&,
                                           AcDbIntArray&) = 0;
};
