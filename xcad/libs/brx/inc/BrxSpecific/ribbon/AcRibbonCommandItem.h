// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcRibbonBase.h"
#include "AcRibbonItem.h"

class AcRibbonItemImp;

class BRX_EXPORT AcRibbonCommandItem : public AcRibbonItem
{
public:
    typedef void(*CommandHandler)(const AcRibbonItem& sender, const void* param); //execute the command

public:
    AcRibbonCommandItem();
    virtual ~AcRibbonCommandItem();

    void setCommandHandler(CommandHandler handler);
    CommandHandler commandHandler() const;
    void setCommandParameter(const void*);
    const void* commandParameter() const;

    void setMenuMacro(const ACHAR*);
    void menuMacro(AcString&) const; //deprecated
    AcString menuMacro() const;

    //For legacy code, setCommandParameter() can still be used to get/set the menu macro
    inline void setCommandParameter(const ACHAR* macro) { setMenuMacro(macro); } //deprecated
    inline void commandParameter(AcString& macro) const { menuMacro(macro); } //deprecated

protected:
    AcRibbonCommandItem(AcRibbonItemImp*);
};

