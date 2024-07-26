// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcGe/AcGeCurve3d.h"

/** _ */
class BRX_IMPORTEXPORT AcGeCompositeCurve3d: public AcGeCurve3d
{
public:
    AcGeCompositeCurve3d();
    //BRX START
    ~AcGeCompositeCurve3d();
    //BRX END

    AcGeCompositeCurve3d(const AcGeCompositeCurve3d&);
    AcGeCompositeCurve3d(const AcGeVoidPointerArray&);
    AcGeCompositeCurve3d(const AcGeVoidPointerArray&,const AcGeIntArray&);

    AcGeCompositeCurve3d& setCurveList(const AcGeVoidPointerArray&);
    AcGeCompositeCurve3d& setCurveList(const AcGeVoidPointerArray&,const AcGeIntArray&);
    double globalToLocalParam(double,int&) const;
    double localToGlobalParam(double,int) const;
    void getCurveList(AcGeVoidPointerArray&) const;

    AcGeCompositeCurve3d& operator=(const AcGeCompositeCurve3d&);
};
