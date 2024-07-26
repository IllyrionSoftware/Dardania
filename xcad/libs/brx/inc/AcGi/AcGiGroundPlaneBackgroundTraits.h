// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcGi/AcGiNonEntityTraits.h"

/** _ */
class AcGiGroundPlaneBackgroundTraits: public AcGiNonEntityTraits
{
public:
    ACRX_DECLARE_MEMBERS(AcGiGroundPlaneBackgroundTraits);

    virtual AcCmEntityColor colorGroundPlaneFar() const = 0;
    virtual AcCmEntityColor colorGroundPlaneNear() const = 0;
    virtual AcCmEntityColor colorSkyHorizon() const = 0;
    virtual AcCmEntityColor colorSkyZenith() const = 0;
    virtual AcCmEntityColor colorUndergroundAzimuth() const = 0;
    virtual AcCmEntityColor colorUndergroundHorizon() const = 0;
    virtual void setColorGroundPlaneFar(const AcCmEntityColor&) = 0;
    virtual void setColorGroundPlaneNear(const AcCmEntityColor&) = 0;
    virtual void setColorSkyHorizon(const AcCmEntityColor&) = 0;
    virtual void setColorSkyZenith(const AcCmEntityColor&) = 0;
    virtual void setColorUndergroundAzimuth(const AcCmEntityColor&) = 0;
    virtual void setColorUndergroundHorizon(const AcCmEntityColor&) = 0;
};
