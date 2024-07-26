// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcRibbonBase.h"

class AcRibbonPanel;
class AcRibbonTabImp;
class AcRibbonItem;

typedef AcArray <AcRibbonPanel*> AcPanelCollection;

class BRX_EXPORT AcRibbonTab : public AcRibbonBase
{
    friend class AcRibbonInternal;

public:
    AcRibbonTab();
    virtual ~AcRibbonTab();

    void setTitle(const ACHAR* acTitle);
    void title(AcString& acTitle) const; //deprecated
    AcString title() const;

    void setName(const ACHAR* acName);
    void name(AcString& acName) const; //deprecated
    AcString name() const;

    void setId(const ACHAR* acId);
    void id(AcString& acId) const; //deprecated
    AcString id() const;

    AcRibbonControl* ribbonCtrl() const;

    AcRibbonUtils::AcResult addPanel(AcRibbonPanel* pAcPanel);
    AcRibbonUtils::AcResult removePanel(AcRibbonPanel* pAcPanel);

    AcRibbonUtils::AcResult panels(AcPanelCollection&);

    bool isEnabled() const;
    bool enable(bool isEnabled);

    bool isVisible() const;
    bool setVisible(bool isVisible);

    AcRibbonPanel* findPanel(const ACHAR* id);
    AcRibbonItem* findItem(const ACHAR* id);
    AcRibbonItem* findItem(const ACHAR* id, bool searchSubItems);
    AcRibbonItem* findItem(const ACHAR* id, AcRibbonPanel*& pParentPanel);
    AcRibbonItem* findItem(const ACHAR* id,
                            AcRibbonPanel*& pParentPanel,
                            bool searchSubItems);

protected:
    AcRibbonTab(AcRibbonTabImp*);

private:
    AcRibbonTabImp* m_pBrxImp;
};

