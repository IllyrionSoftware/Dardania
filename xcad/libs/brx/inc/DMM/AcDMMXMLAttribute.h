// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include <vector>

/** _ */
class BRX_IMPORTEXPORT AcDMMXMLAttribute
{
public:
    AcDMMXMLAttribute();
    AcDMMXMLAttribute(const wchar_t*,const wchar_t*,const wchar_t*,const wchar_t*);
    AcDMMXMLAttribute(const AcDMMXMLAttribute&);
    ~AcDMMXMLAttribute();

    const wchar_t* GetAttributeName() const;
    const wchar_t* GetAttributeValue() const;
    const wchar_t* GetNamespace() const;
    const wchar_t* GetNamespaceUrl() const;
    void SetAttributeName(const wchar_t*);
    void SetAttributeValue(const wchar_t*);
    void SetNamespace(const wchar_t*);
    void SetNamespaceUrl(const wchar_t*);

    const AcDMMXMLAttribute& operator=(const AcDMMXMLAttribute&);
};

typedef AcArray<AcDMMXMLAttribute, AcArrayObjectCopyReallocator<AcDMMXMLAttribute> > AcDMMXMLAttributeVec;
