// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcGe/AcGePoint2d.h"
#include "AcGe/AcGePoint3d.h"

/** _ */
class BRX_IMPORTEXPORT AcGeFileIO
{
public:
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeAugPolyline3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeBoundBlock2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeBoundBlock3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeBoundedPlane&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCircArc2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCircArc3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCompositeCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCompositeCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCone&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCubicSplineCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCubicSplineCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCurveBoundary&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCurveCurveInt2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCurveCurveInt3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeCylinder&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeDoubleArray&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeEllipArc2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeEllipArc3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeExternalBoundedSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeExternalCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeExternalCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeExternalSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeIntArray&,const AcGeLibVersion&);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeInterval&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeKnotVector&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeLibVersion&);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeLine2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeLine3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeLineSeg2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeLineSeg3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeMatrix2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeMatrix3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeNurbCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeNurbCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeNurbSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeOffsetCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeOffsetCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeOffsetSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePlane&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePoint2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePoint2dArray&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePoint3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePoint3dArray&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePointOnCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePointOnCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePointOnSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePolyline2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePolyline3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePosition2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGePosition3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeRay2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeRay3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeScale2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeScale3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeSphere&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeTol&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeTorus&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeVector2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeVector2dArray&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeVector3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus inFields(AcGeFiler*,AcGeVector3dArray&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeAugPolyline3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeBoundBlock2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeBoundBlock3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeBoundedPlane&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCircArc2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCircArc3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCompositeCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCompositeCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCone&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCubicSplineCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCubicSplineCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCurveBoundary&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCurveCurveInt2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCurveCurveInt3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeCylinder&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeDoubleArray&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeEllipArc2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeEllipArc3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeExternalBoundedSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeExternalCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeExternalCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeExternalSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeIntArray&,const AcGeLibVersion&);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeInterval&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeKnotVector&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeLibVersion&);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeLine2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeLine3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeLineSeg2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeLineSeg3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeMatrix2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeMatrix3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeNurbCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeNurbCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeNurbSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeOffsetCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeOffsetCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeOffsetSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePlane&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePoint2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePoint2dArray&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePoint3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePoint3dArray&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePointOnCurve2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePointOnCurve3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePointOnSurface&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePolyline2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePolyline3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePosition2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGePosition3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeRay2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeRay3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeScale2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeScale3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeSphere&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeTol&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeTorus&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeVector2d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeVector2dArray&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeVector3d&,const AcGeLibVersion& = AcGe::gLibVersion);
    static Acad::ErrorStatus outFields(AcGeFiler*,const AcGeVector3dArray&,const AcGeLibVersion& = AcGe::gLibVersion);
};