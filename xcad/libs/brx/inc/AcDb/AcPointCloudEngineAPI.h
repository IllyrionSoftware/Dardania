// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

class BRX_IMPORTEXPORT IPointCloudFilter
{
public:
    virtual int testCell(double, double, double, double, double, double) const = 0;
    virtual bool testPoint(float, float, float) const = 0;
    virtual void prepareForCell(double&, double&, double&, double&, double&, double&, long) {}
    virtual IPointCloudFilter* clone() const = 0;
    virtual void freeObject(void) = 0;
    virtual bool isInverted() const { return false; }
    virtual void setIsInverted(bool) {}
};

class BRX_IMPORTEXPORT IPointCloudFilter2 : public IPointCloudFilter
{
public:
    virtual IPointCloudFilter2* transformFilter(const double*) const = 0;
    virtual int testPoint(const double*) const = 0;
    virtual ~IPointCloudFilter2() {};
};
