// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcDb/AcDbObject.h"

/** _ */
class BRX_IMPORTEXPORT AcDbDictionaryIterator: public AcRxObject
{
public:
    ACRX_DECLARE_MEMBERS(AcDbDictionaryIterator);
protected:
    AcDbDictionaryIterator();
public:
    virtual ~AcDbDictionaryIterator();

    virtual Acad::ErrorStatus getObject(AcDbObject*&,AcDb::OpenMode) = 0;
    virtual AcDbObjectId objectId() const = 0;
    virtual bool done() const = 0;
    virtual bool next() = 0;
    virtual bool setPosition(AcDbObjectId) = 0;
    virtual const ACHAR* name() const = 0;
};
