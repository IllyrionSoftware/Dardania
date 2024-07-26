// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

// CComMultiThreadModel class and related functionality

#ifndef _BS_COM_CCOMMULTITHREADMODEL_INCLUDED_
#define _BS_COM_CCOMMULTITHREADMODEL_INCLUDED_

#ifndef _WIN32  // on Linux/Mac

#include "com_defs.h"


inline LONG InterlockedIncrement (LPLONG refcnt) { return ++(*refcnt); };
inline LONG InterlockedDecrement (LPLONG refcnt) { return --(*refcnt); };

class CComMultiThreadModelNoCS
{
public:
    // typedef CComFakeCriticalSection AutoCriticalSection;
    // typedef CComFakeCriticalSection AutoDeleteCriticalSection;
    // typedef CComFakeCriticalSection CriticalSection;
    // typedef CComMultiThreadModelNoCS ThreadModelNoCS;

    static ULONG WINAPI Increment(LPLONG refcnt) noexcept(false) { return InterlockedIncrement(refcnt); };
    static ULONG WINAPI Decrement(LPLONG refcnt) noexcept(false) { return InterlockedDecrement(refcnt); };
};

class CComMultiThreadModel
{
public:
    // typedef CComAutoCriticalSection AutoCriticalSection;
    // typedef CComAutoDeleteCriticalSection AutoDeleteCriticalSection;
    // typedef CComCriticalSection CriticalSection;
    // typedef CComMultiThreadModelNoCS ThreadModelNoCS;

    static ULONG WINAPI Increment(LPLONG refcnt) noexcept(false) { return InterlockedIncrement(refcnt); };
    static ULONG WINAPI Decrement(LPLONG refcnt) noexcept(false) { return InterlockedDecrement(refcnt); };
};

#endif // !_WIN32

#endif // _BS_COM_CCOMMULTITHREADMODEL_INCLUDED_
