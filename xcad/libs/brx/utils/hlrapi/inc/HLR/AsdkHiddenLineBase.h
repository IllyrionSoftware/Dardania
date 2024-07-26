// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcDb/AcDbGlobal.h"
#include "AcRx/AcRxObject.h"
#include "HlrGlobal.h"

#if defined(_DEBUG) && !defined(BRX_BCAD_DEBUG)
#undef _DEBUG
#include <map>
#define _DEBUG
#else
#include <map>
#endif

class HLR_IMPORTEXPORT AsdkHiddenLineBase: public AcRxObject
{
protected:
    std::map<AcDbEntity*,AcDbVoidPtrArray*> m_entityBodies;

public:
    ACRX_DECLARE_MEMBERS(AsdkHiddenLineBase);

    virtual Acad::ErrorStatus getBody(void*,int);
    virtual Acad::ErrorStatus prepare(AcDbEntity*,AcDbVoidPtrArray&,int,const AcDbViewport*);

    static Acad::ErrorStatus saveData(AcDbEntity*,void*);
    static Adesk::Boolean retrieveData(AcDbEntity*,AcDbVoidPtrArray&,const AcDbViewport* = NULL);
    static void clear();
    static void clear(AcDbEntity*);
    static void clear(AcDbEntity*,AcDbViewport*);
};
