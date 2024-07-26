// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcGe/AcGePoint2d.h"

#ifdef _WIN32
#pragma warning(disable:4290)
#endif

/** _ */
class BRX_EXPORT AcAxPoint2dArray: public AcGePoint2dArray
{
public:
    AcAxPoint2dArray& append(const AcGePoint2d&);
    AcAxPoint2dArray& append(const SAFEARRAY*) noexcept(false);
    AcAxPoint2dArray& append(const VARIANT&) noexcept(false);
    AcAxPoint2dArray& append(const VARIANT*) noexcept(false);
    SAFEARRAY* asSafeArrayPtr() const noexcept(false);
    VARIANT& setVariant(VARIANT&) const noexcept(false);
    VARIANT* setVariant(VARIANT*) const noexcept(false);
};