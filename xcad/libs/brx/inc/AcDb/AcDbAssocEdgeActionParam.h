// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcDbAssocActionParam.h"
#include "AcDbEdgeRef.h"

class BRX_IMPORTEXPORT AcDbAssocEdgeActionParam : public AcDbAssocActionParam
{
  public:
    ACDB_DECLARE_MEMBERS(AcDbAssocEdgeActionParam);

    AcDbAssocEdgeActionParam();
    ~AcDbAssocEdgeActionParam();

    Acad::ErrorStatus getDependentOnCompoundObject(AcDbCompoundObjectId&) const;
    virtual Acad::ErrorStatus getEdgeRef(AcArray<AcDbEdgeRef>&) const;
    virtual Acad::ErrorStatus setEdgeRef(const AcDbEdgeRef&, bool = true, bool = false, int = 0);
    virtual Acad::ErrorStatus setEdgeSubentityGeometry(const AcGeCurve3d*);
};
