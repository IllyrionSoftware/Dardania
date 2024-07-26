// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

// CComObjectRoot class and related functionality

#ifndef _BS_COM_CCOMOBJECTROOT_INCLUDED_
#define _BS_COM_CCOMOBJECTROOT_INCLUDED_

#ifndef _WIN32  // on Linux/Mac

#include "com_defs.h"
#include "CComSingleThreadModel.h"
#include "CComMultiThreadModel.h"
#include "CComObjectRootEx.h"


typedef CComObjectRootEx<CComObjectThreadModel> CComObjectRoot;


#endif // !_WIN32

#endif // _BS_COM_CCOMOBJECTROOT_INCLUDED_
