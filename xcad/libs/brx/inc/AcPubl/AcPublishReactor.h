// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcPubl/AcPublishAggregationInfo.h"
#include "AcPubl/AcPublishBeforeJobInfo.h"
#include "AcPubl/AcPublishBeginJobInfo.h"
#include "AcPubl/AcPublishReactorInfo.h"
#include "AcPubl/AcPublishSheetInfo.h"

/** _ */
class BRX_IMPORTEXPORT AcPublishReactor: public AcRxObject
{
protected:
    AcPublishReactor() {}
public:
    virtual ~AcPublishReactor() {}

    virtual void OnAboutToBeginBackgroundPublishing(AcPublishBeforeJobInfo*) {}
    virtual void OnAboutToBeginPublishing(AcPublishBeginJobInfo*) {}
    virtual void OnAboutToEndPublishing(AcPublishReactorInfo*) {}
    virtual void OnAboutToMoveFile(AcPublishReactorInfo*) {}
    virtual void OnBeginAggregation(AcPublishAggregationInfo*) {}
    virtual void OnBeginPublishingSheet(AcPublishSheetInfo*) {}
    virtual void OnCancelledOrFailedPublishing(AcPublishReactorInfo*) {}
    virtual void OnEndPublish(AcPublishReactorInfo*) {}
};