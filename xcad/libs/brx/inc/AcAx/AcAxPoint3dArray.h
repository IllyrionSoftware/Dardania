// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcGe/AcGePoint3d.h"

#ifdef _WIN32
#pragma warning(disable:4290)
#endif

/** _ */
class BRX_EXPORT AcAxPoint3dArray: public AcGePoint3dArray
{
public:
    AcAxPoint3dArray& append(const AcGePoint3d&);
    AcAxPoint3dArray& append(const SAFEARRAY*) noexcept(false);
    AcAxPoint3dArray& append(const VARIANT&) noexcept(false);
    AcAxPoint3dArray& append(const VARIANT*) noexcept(false);
    SAFEARRAY* asSafeArrayPtr() const noexcept(false);
    VARIANT& setVariant(VARIANT&) const noexcept(false);
    VARIANT* setVariant(VARIANT*) const noexcept(false);
};