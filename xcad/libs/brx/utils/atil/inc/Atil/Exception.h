// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "Atil/Defs.h"
#include "Atil/StringBuffer.h"


namespace Atil
{;


class ATIL_IMPORTEXPORT Exception
{
public:
    Exception(const StringBuffer& msg) : m_msg(msg) {}
    Exception() {}
    Exception(const Exception& rh) : m_msg(rh.m_msg) {}
    virtual ~Exception() {}

    virtual const StringBuffer* getMessage() { return &m_msg; }

protected:
    StringBuffer m_msg;
};


} //namespace Atil
