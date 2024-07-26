// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "Atil/Defs.h"


namespace Atil
{;


class ATIL_IMPORTEXPORT DataBuffer
{
public:
    typedef Byte* DataPtr;

public:
    DataBuffer() : m_size(0), m_data(nullptr) {}
    DataBuffer(int size) : m_size(size), m_data(nullptr) {}
    DataBuffer(const DataBuffer& rh);
    virtual ~DataBuffer();

    virtual DataBuffer& operator= (const DataBuffer& rh);
    virtual DataPtr dataPtr() { return m_data; }
    virtual const DataPtr dataPtr() const { return m_data; }
    virtual int numBytes() const { return m_size; }
    virtual void setSize(int size);

protected:
    int m_size;
    DataPtr m_data;
};


} //namespace Atil
