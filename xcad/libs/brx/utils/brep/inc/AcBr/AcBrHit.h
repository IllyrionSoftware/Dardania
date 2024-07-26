// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcBr/AcBrGlobal.h"

class AcRxObject;
class AcBrEntity;
class AcGePoint3d;
class AcBrHitPath;

class AcBrHit: public AcRxObject
{
public:
    ACRX_DECLARE_MEMBERS(AcBrHit);

    AcBrHit();
    AcBrHit(const AcBrHit&);
    ~AcBrHit();

    AcBr::ErrorStatus getEntityAssociated(AcBrEntity*&) const;
    AcBr::ErrorStatus getEntityEntered(AcBrEntity*&) const;
    AcBr::ErrorStatus getEntityHit(AcBrEntity*&) const;
    AcBr::ErrorStatus getPoint(AcGePoint3d&) const;
    AcBr::ErrorStatus getPoint(AcGePoint3d*&) const;
    AcBr::ErrorStatus getValidationLevel(AcBr::ValidationLevel&) const;
    AcBr::ErrorStatus setHitPath(AcBrHitPath&);
    AcBr::ErrorStatus setValidationLevel(const AcBr::ValidationLevel& = AcBr::kFullValidation);
    Adesk::Boolean brepChanged() const;
    Adesk::Boolean isEqualTo(const AcRxObject*) const;
    Adesk::Boolean isNull() const;

    AcBrHit& operator=(const AcBrHit&);
};
