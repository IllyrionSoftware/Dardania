// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcDb/AcDbObjectId.h"

class BrxXrefOwnedData;

/** _ */
class BRX_IMPORTEXPORT AcEdXrefFileLock
{
    //BRX START
    BrxXrefOwnedData* m_pData;
    //BRX END

public:
    AcEdXrefFileLock();
    ~AcEdXrefFileLock();

    Acad::ErrorStatus consistencyCheck(int&,const AcDbObjectId&);
    Acad::ErrorStatus consistencyCheck(int&,const AcDbObjectId&,AcDbObjectIdArray&);
    Acad::ErrorStatus consistencyChecklocal(int&,const AcDbObjectId&);
    Acad::ErrorStatus lockFile(int&,const AcDbObjectId&);
    Acad::ErrorStatus releaseFile(int&,bool = false,bool = true);
    Acad::ErrorStatus reloadFile(int&,const AcDbObjectIdArray&,const int = -1);
    Acad::ErrorStatus reloadFile(int&,const int = -1);
    Acad::ErrorStatus xloadctlType(int&,const AcDbObjectId&);
    AcDbObjectIdArray getoutofSyncIdArray() const;
    int getlockxloadctlType() const;
};
