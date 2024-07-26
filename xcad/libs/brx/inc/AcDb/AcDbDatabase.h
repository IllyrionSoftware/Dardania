// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcDb/AcDbAuditInfo.h"
#include "AcDb/AcDbRecover.h"
#include "AcDb/AcDbRecoverCallBack.h"
#include "AcDb/AcDbAnnotationScale.h"
#include "AcEd/AcEdGlobal.h"
#include "AcGe/AcGeLine3d.h"
#include "AcGi/AcGiDrawable.h"
#include "AcRx/AcRxDictionary.h"
#include "AcRx/AcRxDictionaryIterator.h"
#include "AcRx/AcRxDLinkerReactor.h"
#include "AcRx/AcRxDynamicLinker.h"
#include "AcRx/AcRxService.h"
#include "AcUt/AcUtGlobal.h"
#include "Ads/AdsMigrate.h"
#include "Misc/AcHeapOperators.h"

class AcDbUndoController;
class AcDbObjectContextManager;
class AcDbDataLinkManager;

/** _ */
class BRX_IMPORTEXPORT AcDbDatabase: public AcRxObject, public AcHeapOperators
{
public:
    ACRX_DECLARE_MEMBERS(AcDbDatabase);

    AcDbDatabase(bool = true, bool = false);
    virtual ~AcDbDatabase();

    #include "AcDb/AcDbDimensioningVariables.h"

    Acad::ErrorStatus addAcDbObject(AcDbObject*);
    Acad::ErrorStatus addAcDbObject(AcDbObjectId&, AcDbObject*);
    Acad::ErrorStatus applyPartialOpenFilters(const AcDbSpatialFilter*, const AcDbLayerFilter*);
    Acad::ErrorStatus audit(AcDbAuditInfo*);
    Acad::ErrorStatus auditXData(AcDbAuditInfo*);
    Acad::ErrorStatus closeInput(bool = false);
    Acad::ErrorStatus countHardReferences(const AcDbObjectIdArray&, Adesk::UInt32*);
    Acad::ErrorStatus deepCloneObjects(AcDbObjectIdArray&, AcDbObjectId&, AcDbIdMapping&, bool = false);
    Acad::ErrorStatus deepCloneObjects(const AcDbObjectIdArray&, const AcDbObjectId&, AcDbIdMapping&, bool = false);
    Acad::ErrorStatus dxfIn(const ACHAR*, const ACHAR* = NULL);
    Acad::ErrorStatus dxfOut(const ACHAR*, const int = 16, AcDb::AcDbDwgVersion = AcDb::kDHL_CURRENT, const bool = false);
    Acad::ErrorStatus evaluateFields(int, const ACHAR* = NULL, AcDbDatabase* = NULL, int* = NULL, int* = NULL);
    Acad::ErrorStatus getAcDbObjectId(AcDbObjectId&, bool, const AcDbHandle&, Adesk::UInt32 = 0);
    Acad::ErrorStatus getBlockTable(AcDbBlockTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getBlockTable(AcDbSymbolTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getColorDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getDimapost(ACHAR*&) const;
    Acad::ErrorStatus getDimblk(ACHAR*&) const;
    Acad::ErrorStatus getDimblk1(ACHAR*&) const;
    Acad::ErrorStatus getDimblk2(ACHAR*&) const;
    Acad::ErrorStatus getDimpost(ACHAR*&) const;
    Acad::ErrorStatus getDimRecentStyleList(AcDbObjectIdArray&) const;
    Acad::ErrorStatus getDimstyleChildData(const AcRxClass*, AcDbDimStyleTableRecord*&, AcDbObjectId&) const;
    Acad::ErrorStatus getDimstyleData(AcDbDimStyleTableRecord*&) const;
    Acad::ErrorStatus getDimStyleTable(AcDbDimStyleTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getDimStyleTable(AcDbSymbolTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getDetailViewStyleDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSectionViewStyleDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getFilename(const ACHAR*&) const;
    Acad::ErrorStatus getFingerprintGuid(ACHAR*&) const;
    Acad::ErrorStatus getGroupDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getHyperlinkBase(ACHAR*&) const;
    Acad::ErrorStatus getLayerTable(AcDbLayerTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getLayerTable(AcDbSymbolTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getLayoutDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getLinetypeTable(AcDbLinetypeTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getLinetypeTable(AcDbSymbolTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getMaterialDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getScaleListDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getMLeaderStyleDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getMenu(ACHAR*&) const;
    Acad::ErrorStatus getMLStyleDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getNamedObjectsDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getPlotSettingsDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getPlotStyleNameDictionary(AcDbDictionaryWithDefault*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getProjectName(ACHAR*&) const;
    Acad::ErrorStatus getRegAppTable(AcDbRegAppTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getRegAppTable(AcDbSymbolTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSectionManager(AcDbSectionManager*&, AcDb::OpenMode = AcDb::kForRead) const;
    Acad::ErrorStatus getStyleSheet(ACHAR*&) const;
    Acad::ErrorStatus getSymbolTable(AcDbBlockTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSymbolTable(AcDbDimStyleTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSymbolTable(AcDbLayerTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSymbolTable(AcDbLinetypeTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSymbolTable(AcDbRegAppTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSymbolTable(AcDbTextStyleTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSymbolTable(AcDbUCSTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSymbolTable(AcDbViewportTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getSymbolTable(AcDbViewTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getTableStyleDictionary(AcDbDictionary*&, AcDb::OpenMode);
    Acad::ErrorStatus getTextStyleTable(AcDbSymbolTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getTextStyleTable(AcDbTextStyleTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getTimeZoneInfo(AcDb::TimeZone, double&, AcString&) const;
    Acad::ErrorStatus getUCSTable(AcDbSymbolTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getUCSTable(AcDbUCSTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getVersionGuid(ACHAR*&) const;
    Acad::ErrorStatus getViewportArray(AcDbObjectIdArray&, bool = true) const;
    Acad::ErrorStatus getViewportTable(AcDbSymbolTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getViewportTable(AcDbViewportTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getViewTable(AcDbSymbolTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getViewTable(AcDbViewTable*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getVisualStyleDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);
    Acad::ErrorStatus getVisualStyleList(AcArray<const ACHAR*>&);
    Acad::ErrorStatus insert(AcDbObjectId&, const ACHAR*, AcDbDatabase*, bool = true);
    Acad::ErrorStatus insert(AcDbObjectId&, const ACHAR*, const ACHAR*, AcDbDatabase*, bool = true);
    Acad::ErrorStatus insert(const AcGeMatrix3d&, AcDbDatabase*, bool = true);
    Acad::ErrorStatus loadLineTypeFile(const ACHAR*, const ACHAR*);
    Acad::ErrorStatus purge(AcDbObjectIdArray&);
    Acad::ErrorStatus purge(AcDbObjectIdGraph&);

    Acad::ErrorStatus restoreForwardingXrefSymbols();
    Acad::ErrorStatus restoreOriginalXrefSymbols();
    Acad::ErrorStatus save();
    Acad::ErrorStatus saveAs(const ACHAR*, const SecurityParams* = NULL);
    Acad::ErrorStatus saveAs(const ACHAR*, const bool, const AcDb::AcDbDwgVersion = AcDb::kDHL_CURRENT, const SecurityParams* = NULL);
    Acad::ErrorStatus set3dDwfPrec(double);
    Acad::ErrorStatus setAngbase(double);
    Acad::ErrorStatus setAngdir(bool);
    Acad::ErrorStatus setAnnoAllVisible(bool);
    Acad::ErrorStatus setAnnotativeDwg(bool);
    Acad::ErrorStatus setAttdia(bool);
    Acad::ErrorStatus setAttmode(Adesk::Int16);
    Acad::ErrorStatus setAttreq(bool);
    Acad::ErrorStatus setAunits(Adesk::Int16);
    Acad::ErrorStatus setAuprec(Adesk::Int16);
    Acad::ErrorStatus setBlipmode(bool);
    Acad::ErrorStatus setCameraDisplay(const bool);
    Acad::ErrorStatus setCameraHeight(const double);
    Acad::ErrorStatus setCannoscale(AcDbAnnotationScale*);
    Acad::ErrorStatus setCecolor(const AcCmColor&);
    Acad::ErrorStatus setCeltscale(double);
    Acad::ErrorStatus setCeltype(AcDbObjectId);
    Acad::ErrorStatus setCelweight(AcDb::LineWeight);
    Acad::ErrorStatus setCePlotStyleName(AcDb::PlotStyleNameType, AcDbObjectId = AcDbObjectId::kNull);
    Acad::ErrorStatus setChamfera(double);
    Acad::ErrorStatus setChamferb(double);
    Acad::ErrorStatus setChamferc(double);
    Acad::ErrorStatus setChamferd(double);
    Acad::ErrorStatus setClayer(AcDbObjectId);
    Acad::ErrorStatus setCmaterial(AcDbObjectId);
    Acad::ErrorStatus setCmljust(Adesk::Int16);
    Acad::ErrorStatus setCmlscale(double);
    Acad::ErrorStatus setCmlstyleID(AcDbObjectId);
    Acad::ErrorStatus setCoords(Adesk::Int16);
    Acad::ErrorStatus setCshadow(Adesk::UInt8);
    Acad::ErrorStatus setDelUsedObj(Adesk::Int16);
    Acad::ErrorStatus setDgnframe(Adesk::UInt8);
    Acad::ErrorStatus setDimaso(bool);
    Acad::ErrorStatus setDimAssoc(Adesk::UInt8);
    Acad::ErrorStatus setDimfit(int);
    Acad::ErrorStatus setDimsho(bool);
    Acad::ErrorStatus setDimstyle(AcDbObjectId);
    Acad::ErrorStatus setDimstyleData(AcDbDimStyleTableRecord*);
    Acad::ErrorStatus setDimstyleData(AcDbObjectId);
    Acad::ErrorStatus setDimunit(int);
    Acad::ErrorStatus setDispSilh(bool);
    Acad::ErrorStatus setDragmode(Adesk::Int16);
    Acad::ErrorStatus setDragVisStyle(AcDbObjectId);
    Acad::ErrorStatus setDrawOrderCtl(Adesk::UInt8);
    Acad::ErrorStatus setDwfframe(Adesk::UInt8);
    Acad::ErrorStatus setElevation(double);
    Acad::ErrorStatus setEndCaps(AcDb::EndCaps);
    Acad::ErrorStatus setExtmax(const AcGePoint3d&);
    Acad::ErrorStatus setExtmin(const AcGePoint3d&);
    Acad::ErrorStatus setFacetres(double);
    Acad::ErrorStatus setFilletrad(double);
    Acad::ErrorStatus setFillmode(bool);
    Acad::ErrorStatus setFingerprintGuid(const ACHAR*);
    Acad::ErrorStatus setHaloGap(Adesk::UInt8);
    Acad::ErrorStatus setHandseed(const AcDbHandle&);
    Acad::ErrorStatus setHideText(Adesk::UInt8);
    Acad::ErrorStatus setHpInherit(const bool);
    Acad::ErrorStatus setHpOrigin(const AcGePoint2d&);
    Acad::ErrorStatus setHyperlinkBase(const ACHAR*);
    Acad::ErrorStatus setInsbase(const AcGePoint3d&);
    Acad::ErrorStatus setInsunits(const AcDb::UnitsValue);
    Acad::ErrorStatus setInterfereColor(const AcCmColor&);
    Acad::ErrorStatus setInterfereObjVisStyle(AcDbObjectId);
    Acad::ErrorStatus setInterfereVpVisStyle(AcDbObjectId);
    Acad::ErrorStatus setIntersectColor(Adesk::UInt16);
    Acad::ErrorStatus setIntersectDisplay(Adesk::UInt8);
    Acad::ErrorStatus setIsolines(Adesk::Int16);
    Acad::ErrorStatus setJoinStyle(AcDb::JoinStyle);
    Acad::ErrorStatus setLatitude(double);
    Acad::ErrorStatus setLensLength(const double);
    Acad::ErrorStatus setLightGlyphDisplay(Adesk::UInt8);
    Acad::ErrorStatus setLimcheck(bool);
    Acad::ErrorStatus setLimmax(const AcGePoint2d&);
    Acad::ErrorStatus setLimmin(const AcGePoint2d&);
    Acad::ErrorStatus setLineWeightDisplay(bool);
    Acad::ErrorStatus setLoftAng1(double);
    Acad::ErrorStatus setLoftAng2(double);
    Acad::ErrorStatus setLoftMag1(double);
    Acad::ErrorStatus setLoftMag2(double);
    Acad::ErrorStatus setLoftNormals(Adesk::UInt8);
    Acad::ErrorStatus setLoftParam(Adesk::UInt16);
    Acad::ErrorStatus setLongitude(double);
    Acad::ErrorStatus setLtscale(double);
    Acad::ErrorStatus setLunits(Adesk::Int16);
    Acad::ErrorStatus setLuprec(Adesk::Int16);
    Acad::ErrorStatus setMaxactvp(Adesk::Int16);
    Acad::ErrorStatus setMeasurement(AcDb::MeasurementValue);
    Acad::ErrorStatus setMirrtext(bool);
    Acad::ErrorStatus setMLeaderstyle(AcDbObjectId);
    Acad::ErrorStatus setMLeaderscale(double);
    Acad::ErrorStatus setMsltscale(bool);
    Acad::ErrorStatus setNorthDirection(double);
    Acad::ErrorStatus setObscuredColor(Adesk::UInt16);
    Acad::ErrorStatus setObscuredLineType(Adesk::UInt8);
    Acad::ErrorStatus setOleStartUp(bool);
    Acad::ErrorStatus setOrthomode(bool);
    Acad::ErrorStatus setPdmode(Adesk::Int16);
    Acad::ErrorStatus setPdsize(double);
    Acad::ErrorStatus setPelevation(double);
    Acad::ErrorStatus setPextmax(const AcGePoint3d&);
    Acad::ErrorStatus setPextmin(const AcGePoint3d&);
    Acad::ErrorStatus setPickstyle(Adesk::Int16);
    Acad::ErrorStatus setPinsbase(const AcGePoint3d&);
    Acad::ErrorStatus setPlimcheck(bool);
    Acad::ErrorStatus setPlimmax(const AcGePoint2d&);
    Acad::ErrorStatus setPlimmin(const AcGePoint2d&);
    Acad::ErrorStatus setPlineEllipse(bool);
    Acad::ErrorStatus setPlinegen(bool);
    Acad::ErrorStatus setPlinewid(double);
    Acad::ErrorStatus setProjectName(const ACHAR*);
    Acad::ErrorStatus setPsltscale(bool);
    Acad::ErrorStatus setPsolHeight(double);
    Acad::ErrorStatus setPsolWidth(double);
    Acad::ErrorStatus setPucsBase(const AcDbObjectId&);
    Acad::ErrorStatus setQtextmode(bool);
    Acad::ErrorStatus setRealWorldScale(const bool);
    Acad::ErrorStatus setRegenmode(bool);
    Acad::ErrorStatus setSaveproxygraphics(Adesk::Int16);
    Acad::ErrorStatus setShadedge(Adesk::Int16);
    Acad::ErrorStatus setShadedif(Adesk::Int16);
    Acad::ErrorStatus setShadowPlaneLocation(double);
    Acad::ErrorStatus setShowHist(Adesk::UInt8);
    Acad::ErrorStatus setSketchinc(double);
    Acad::ErrorStatus setSkpoly(bool);
    Acad::ErrorStatus setSolidHist(Adesk::UInt8);
    Acad::ErrorStatus setSortEnts(Adesk::UInt8);
    Acad::ErrorStatus setSplframe(bool);
    Acad::ErrorStatus setSplinesegs(Adesk::Int16);
    Acad::ErrorStatus setSplinetype(Adesk::Int16);
    Acad::ErrorStatus setStepSize(double);
    Acad::ErrorStatus setStepsPerSec(double);
    Acad::ErrorStatus setStyleSheet(const ACHAR*);
    Acad::ErrorStatus setSurftab1(Adesk::Int16);
    Acad::ErrorStatus setSurftab2(Adesk::Int16);
    Acad::ErrorStatus setSurftype(Adesk::Int16);
    Acad::ErrorStatus setSurfu(Adesk::Int16);
    Acad::ErrorStatus setSurfv(Adesk::Int16);
    Acad::ErrorStatus setTablestyle(AcDbObjectId);
    Acad::ErrorStatus setTextsize(double);
    Acad::ErrorStatus setTextstyle(AcDbObjectId);
    Acad::ErrorStatus setThickness(double);
    Acad::ErrorStatus setThumbnailBitmap(void*);
    Acad::ErrorStatus setTilemode(bool);
    Acad::ErrorStatus setTileModeLightSynch(Adesk::UInt8);
    Acad::ErrorStatus setTimeZone(AcDb::TimeZone);
    Acad::ErrorStatus setTimeZoneAsUtcOffset(double);
    Acad::ErrorStatus setTracewid(double);
    Acad::ErrorStatus setTreedepth(Adesk::Int16);
    Acad::ErrorStatus setTStackAlign(int);
    Acad::ErrorStatus setTStackSize(int);
    Acad::ErrorStatus setUcs(const AcGePoint3d&, const AcGeVector3d&, const AcGeVector3d&);
    Acad::ErrorStatus setUcsBase(AcDbObjectId);
    Acad::ErrorStatus setUnitmode(Adesk::Int16);
    Acad::ErrorStatus setUseri1(Adesk::Int16);
    Acad::ErrorStatus setUseri2(Adesk::Int16);
    Acad::ErrorStatus setUseri3(Adesk::Int16);
    Acad::ErrorStatus setUseri4(Adesk::Int16);
    Acad::ErrorStatus setUseri5(Adesk::Int16);
    Acad::ErrorStatus setUserr1(double);
    Acad::ErrorStatus setUserr2(double);
    Acad::ErrorStatus setUserr3(double);
    Acad::ErrorStatus setUserr4(double);
    Acad::ErrorStatus setUserr5(double);
    Acad::ErrorStatus setUsrtimer(bool);
    Acad::ErrorStatus setVersionGuid(const ACHAR*);
    Acad::ErrorStatus setViewportScaleDefault(double);
    Acad::ErrorStatus setVisretain(bool);
    Acad::ErrorStatus setWorldPucsBaseOrigin(const AcGePoint3d&, AcDb::OrthographicView);
    Acad::ErrorStatus setWorldUcsBaseOrigin(const AcGePoint3d&, AcDb::OrthographicView);
    Acad::ErrorStatus setWorldview(bool);
    Acad::ErrorStatus setXrefEditEnabled(bool);
    AcCmTransparency cetransparency() const;

    Acad::ErrorStatus updateExt(bool = false);
    Acad::ErrorStatus wblock(AcDbDatabase*&);
    Acad::ErrorStatus wblock(AcDbDatabase*&, AcDbObjectId);
    Acad::ErrorStatus wblock(AcDbDatabase*&, const AcDbObjectIdArray&, const AcGePoint3d&);
    Acad::ErrorStatus wblock(AcDbDatabase*, const AcDbObjectIdArray&, const AcGePoint3d&, AcDb::DuplicateRecordCloning);
    Acad::ErrorStatus wblockCloneObjects(AcDbObjectIdArray&, AcDbObjectId&, AcDbIdMapping&, AcDb::DuplicateRecordCloning, bool = false);
    Acad::ErrorStatus wblockCloneObjects(const AcDbObjectIdArray&, const AcDbObjectId&, AcDbIdMapping&, AcDb::DuplicateRecordCloning, bool = false);
    AcCmColor cecolor() const;
    AcCmColor interfereColor() const;
    AcDb::AcDbDwgVersion lastSavedAsVersion() const;
    AcDb::AcDbDwgVersion originalFileSavedByVersion() const;
    AcDb::AcDbDwgVersion originalFileVersion() const;
    AcDb::EndCaps endCaps() const;
    AcDb::JoinStyle joinStyle() const;
    AcDb::LineWeight celweight() const;
    AcDb::MaintenanceReleaseVersion lastSavedAsMaintenanceVersion() const;
    AcDb::MaintenanceReleaseVersion originalFileMaintenanceVersion() const;
    AcDb::MaintenanceReleaseVersion originalFileSavedByMaintenanceVersion() const;
    AcDb::MeasurementValue measurement() const;
    AcDb::PlotStyleNameType getCePlotStyleNameId(AcDbObjectId&) const;
    AcDb::TimeZone timeZone() const;
    AcDb::UnitsValue insunits() const;
    AcDbHandle handseed() const;
    AcDbLayerStateManager* getLayerStateManager() const;
    AcDbObjectId blockTableId() const;
    AcDbObjectId byBlockLinetype() const;
    AcDbObjectId byBlockMaterial() const;
    AcDbObjectId byLayerLinetype() const;
    AcDbObjectId byLayerMaterial() const;
    AcDbObjectId celtype() const;
    AcDbObjectId clayer() const;
    AcDbObjectId cmaterial() const;
    AcDbObjectId cmlstyleID() const;
    AcDbObjectId colorDictionaryId() const;
    AcDbObjectId continuousLinetype() const;
    AcDbObjectId currentSpaceId() const;
    AcDbObjectId dimstyle() const;
    AcDbObjectId dimStyleTableId() const;
    AcDbObjectId dragVisStyle() const;
    AcDbObjectId getDimstyleChildId(const AcRxClass*, AcDbObjectId&) const;
    AcDbObjectId getDimstyleParentId(AcDbObjectId&) const;
    AcDbObjectId getSectionManager() const;
    AcDbObjectId globalMaterial() const;
    AcDbObjectId groupDictionaryId() const;
    AcDbObjectId interfereObjVisStyle() const;
    AcDbObjectId interfereVpVisStyle() const;
    AcDbObjectId layerTableId() const;
    AcDbObjectId layerZero() const;
    AcDbObjectId layoutDictionaryId() const;
    AcDbObjectId linetypeTableId() const;
    AcDbObjectId materialDictionaryId() const;
    AcDbObjectId mleaderstyle() const;
    AcDbObjectId mLStyleDictionaryId() const;
    AcDbObjectId namedObjectsDictionaryId() const;
    AcDbObjectId paperSpaceVportId() const;
    AcDbObjectId plotSettingsDictionaryId() const;
    AcDbObjectId plotStyleNameDictionaryId() const;
    AcDbObjectId mleaderStyleDictionaryId() const;
    AcDbObjectId scaleListDictionaryId() const;
    AcDbObjectId sectionViewStyleDictionaryId() const;
    AcDbObjectId detailViewStyleDictionaryId() const;

    AcDbObjectId pucsBase() const;
    AcDbObjectId pucsname() const;
    AcDbObjectId regAppTableId() const;
    AcDbObjectId tablestyle() const;
    AcDbObjectId tableStyleDictionaryId() const;
    AcDbObjectId textstyle() const;
    AcDbObjectId textStyleTableId() const;
    AcDbObjectId ucsBase() const;
    AcDbObjectId ucsname() const;
    AcDbObjectId UCSTableId() const;
    AcDbObjectId viewportTableId() const;
    AcDbObjectId viewTableId() const;
    AcDbObjectId visualStyleDictionaryId() const;
    AcDbObjectId xrefBlockId() const;
    AcDbTransactionManager* transactionManager() const;
    AcFileDependencyManager* fileDependencyManager() const;
    AcGePoint2d hpOrigin() const;
    AcGePoint2d limmax() const;
    AcGePoint2d limmin() const;
    AcGePoint2d plimmax() const;
    AcGePoint2d plimmin() const;
    AcGePoint3d extmax() const;
    AcGePoint3d extmin() const;
    AcGePoint3d insbase() const;
    AcGePoint3d pextmax() const;
    AcGePoint3d pextmin() const;
    AcGePoint3d pinsbase() const;
    AcGePoint3d pucsorg() const;
    AcGePoint3d ucsorg() const;
    AcGePoint3d worldPucsBaseOrigin(AcDb::OrthographicView) const;
    AcGePoint3d worldUcsBaseOrigin(AcDb::OrthographicView) const;
    AcGeVector3d pucsxdir() const;
    AcGeVector3d pucsydir() const;
    AcGeVector3d ucsxdir() const;
    AcGeVector3d ucsydir() const;
    AcGsModel* gsHighlightModel() const;
    AcGsModel* gsModel() const;
    Adesk::Int16 attmode() const;
    Adesk::Int16 aunits() const;
    Adesk::Int16 auprec() const;
    Adesk::Int16 cmljust() const;
    Adesk::Int16 coords() const;
    Adesk::Int16 delUsedObj() const;
    Adesk::Int16 dragmode() const;
    Adesk::Int16 isolines() const;
    Adesk::Int16 lunits() const;
    Adesk::Int16 luprec() const;
    Adesk::Int16 maxactvp() const;
    Adesk::Int16 pdmode() const;
    Adesk::Int16 pickstyle() const;
    Adesk::Int16 saveproxygraphics() const;
    Adesk::Int16 shadedge() const;
    Adesk::Int16 shadedif() const;
    Adesk::Int16 splinesegs() const;
    Adesk::Int16 splinetype() const;
    Adesk::Int16 surftab1() const;
    Adesk::Int16 surftab2() const;
    Adesk::Int16 surftype() const;
    Adesk::Int16 surfu() const;
    Adesk::Int16 surfv() const;
    Adesk::Int16 treedepth() const;
    Adesk::Int16 unitmode() const;
    Adesk::Int16 useri1() const;
    Adesk::Int16 useri2() const;
    Adesk::Int16 useri3() const;
    Adesk::Int16 useri4() const;
    Adesk::Int16 useri5() const;
    Adesk::Int32 numberOfSaves() const;
    Adesk::UInt16 intersectColor() const;
    Adesk::UInt16 loftParam() const;
    Adesk::UInt16 obscuredColor() const;
    Adesk::UInt8 cshadow() const;
    Adesk::UInt8 dgnframe() const;
    Adesk::UInt8 dimAssoc() const;
    Adesk::UInt8 drawOrderCtl() const;
    Adesk::UInt8 dwfframe() const;
    Adesk::UInt8 haloGap() const;
    Adesk::UInt8 hideText() const;
    Adesk::UInt8 intersectDisplay() const;
    Adesk::UInt8 lightGlyphDisplay() const;
    Adesk::UInt8 loftNormals() const;
    Adesk::UInt8 maintenanceReleaseVersion() const;
    Adesk::UInt8 obscuredLineType() const;
    Adesk::UInt8 showHist() const;
    Adesk::UInt8 solidHist() const;
    Adesk::UInt8 sortEnts() const;
    Adesk::UInt8 tileModeLightSynch() const;
    bool angdir() const;
    bool annoAllVisible() const;
    bool annotativeDwg() const;
    bool attdia() const;
    bool attreq() const;
    bool blipmode() const;
    bool cameraDisplay() const;
    AcDbAnnotationScale* cannoscale() const;
    bool dimaso() const;
    bool dimsho() const;
    bool dispSilh() const;
    bool dwgFileWasSavedByAutodeskSoftware() const;
    bool fillmode() const;
    bool hpInherit() const;
    bool isEMR() const;
    bool isPartiallyOpened() const;
    bool isPucsOrthographic(AcDb::OrthographicView&) const;
    bool isUcsOrthographic(AcDb::OrthographicView&) const;
    bool limcheck() const;
    bool lineWeightDisplay() const;
    bool mirrtext() const;
    bool msltscale() const;
    bool oleStartUp() const;
    bool orthomode() const;
    bool plimcheck() const;
    bool plineEllipse() const;
    bool plinegen() const;
    bool plotStyleMode() const;
    bool psltscale() const;
    bool qtextmode() const;
    bool realWorldScale() const;
    bool regenmode() const;
    bool retainOriginalThumbnailBitmap() const;
    bool skpoly() const;
    bool splframe() const;
    bool tilemode() const;
    bool undoRecording() const;
    bool usrtimer() const;
    bool visretain() const;
    bool worldview() const;
    bool xrefEditEnabled() const;
    const AcDbDate tdcreate() const;
    const AcDbDate tdindwg() const;
    const AcDbDate tducreate() const;
    const AcDbDate tdupdate() const;
    const AcDbDate tdusrtimer() const;
    const AcDbDate tduupdate() const;
    const ACHAR* classDxfName(const AcRxClass*);
    const ACHAR* originalFileName() const;
    double angbase() const;
    double cameraHeight() const;
    double celtscale() const;
    double chamfera() const;
    double chamferb() const;
    double chamferc() const;
    double chamferd() const;
    double cmlscale() const;
    double elevation() const;
    double facetres() const;
    double filletrad() const;
    double get3dDwfPrec() const;
    double latitude() const;
    double lensLength() const;
    double loftAng1() const;
    double loftAng2() const;
    double loftMag1() const;
    double loftMag2() const;
    double longitude() const;
    double ltscale() const;
    double mleaderscale() const;
    double northDirection() const;
    double pdsize() const;
    double pelevation() const;
    double plinewid() const;
    double psolHeight() const;
    double psolWidth() const;
    double shadowPlaneLocation() const;
    double sketchinc() const;
    double stepSize() const;
    double stepsPerSec() const;
    double textsize() const;
    double thickness() const;
    double tracewid() const;
    double userr1() const;
    double userr2() const;
    double userr3() const;
    double userr4() const;
    double userr5() const;
    double viewportScaleDefault() const;
    int approxNumObjects() const;
    int dimfit() const;
    int dimunit() const;
    int tstackalign() const;
    int tstacksize() const;
    void abortDeepClone(AcDbIdMapping&);
    void disablePartialOpen();
    void disableUndoRecording(bool);
    void forceWblockDatabaseCopy();
    void setGsHighlightModel(AcGsModel*);
    void setGsModel(AcGsModel*);
    void setRetainOriginalThumbnailBitmap(bool);
    void* thumbnailBitmap() const;
    Acad::ErrorStatus setCetransparency(const AcCmTransparency&);

    Acad::ErrorStatus setPucs(const AcGePoint3d&, const AcGeVector3d&, const AcGeVector3d&);
    Acad::ErrorStatus setPucsname(const AcDbObjectId&);

    static Acad::ErrorStatus markObjectNonPersistent(AcDbObjectId, bool);
    static AcDb::LineWeight getNearestLineWeight(int);
    static bool isObjectNonPersistent(AcDbObjectId);
    static bool isValidLineWeight(int);

    bool setSecurityParams(const SecurityParams*, bool = true);
    const SecurityParams* cloneSecurityParams();
    static void disposeSecurityParams(const SecurityParams*);

    // for new readDwgFile() methods
    enum OpenMode
    {
        kForReadAndReadShare = 1, // use _SH_DENYWR
        kForReadAndWriteNoShare,  // use _SH_DENYRW
        kForReadAndAllShare,      // use _SH_DENYNO
        kTryForReadShare,         // use _SH_DENYWR, if fails, use _SH_DENYNO
    };

    Acad::ErrorStatus readDwgFile(const ACHAR*, const int = _SH_DENYWR, bool = false, const ACHAR* = NULL);
    Acad::ErrorStatus readDwgFile(const ACHAR*, OpenMode, bool = false, const ACHAR* = NULL);

    AcDbUndoController* undoController() const;
    AcDbObjectContextManager* objectContextManager() const;

    Acad::ErrorStatus addReactor(AcDbDatabaseReactor*) const;
    Acad::ErrorStatus removeReactor(AcDbDatabaseReactor*) const;

    AcDbDataLinkManager* getDataLinkManager() const;
    Acad::ErrorStatus updateDataLink(AcDb::UpdateDirection, AcDb::UpdateOption);

    AcDbObjectId dataLinkDictionaryId() const;
    Acad::ErrorStatus getDataLinkDictionary(AcDbDictionary*&, AcDb::OpenMode = AcDb::kForRead);

    Acad::ErrorStatus reclaimMemoryFromErasedObjects(const AcDbObjectIdArray&);
    
    template<class SymbolTable> AcDbObjectId getSymbolTableId() const;
    
    // BRX specific
    bool isUndoing() const;
    // end  BRX specific
};

template<>
inline AcDbObjectId AcDbDatabase::getSymbolTableId<AcDbBlockTable>() const
{
    return blockTableId();
}

template<>
inline AcDbObjectId AcDbDatabase::getSymbolTableId<AcDbDimStyleTable>() const
{
    return dimStyleTableId();
}

template<>
inline AcDbObjectId AcDbDatabase::getSymbolTableId<AcDbLayerTable>() const
{
    return layerTableId();
}

template<>
inline AcDbObjectId AcDbDatabase::getSymbolTableId<AcDbLinetypeTable>() const
{
    return linetypeTableId();
}

template<>
inline AcDbObjectId AcDbDatabase::getSymbolTableId<AcDbRegAppTable>() const
{
    return regAppTableId();
}

template<>
inline AcDbObjectId AcDbDatabase::getSymbolTableId<AcDbTextStyleTable>() const
{
    return textStyleTableId();
}

template<>
inline AcDbObjectId AcDbDatabase::getSymbolTableId<AcDbUCSTable>() const
{
    return UCSTableId();
}

template<>
inline AcDbObjectId AcDbDatabase::getSymbolTableId<AcDbViewportTable>() const
{
    return viewportTableId();
}

template<>
inline AcDbObjectId AcDbDatabase::getSymbolTableId<AcDbViewTable>() const
{
    return viewTableId();
}
