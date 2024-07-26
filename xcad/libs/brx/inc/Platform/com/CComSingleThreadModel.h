// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

// CComSingleThreadModel class and related functionality

#ifndef _BS_COM_CCOMSINGLETHREADMODEL_INCLUDED_
#define _BS_COM_CCOMSINGLETHREADMODEL_INCLUDED_

#ifndef _WIN32  // on Linux/Mac

#include "com_defs.h"

class CComSingleThreadModel
{
public:
    // typedef CComFakeCriticalSection AutoCriticalSection;
    // typedef CComFakeCriticalSection AutoDeleteCriticalSection;
    // typedef CComFakeCriticalSection CriticalSection;
    // typedef CComSingleThreadModel ThreadModelNoCS;

    static ULONG WINAPI Increment(LPLONG refcnt) noexcept(false) { return ++(*refcnt); };
    static ULONG WINAPI Decrement(LPLONG refcnt) noexcept(false) { return --(*refcnt); };
};

#endif // !_WIN32

#endif // _BS_COM_CCOMSINGLETHREADMODEL_INCLUDED_
