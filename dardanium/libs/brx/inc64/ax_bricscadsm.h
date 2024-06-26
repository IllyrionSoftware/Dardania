

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for OdSmX.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ax_bricscadsm_h__
#define __ax_bricscadsm_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAcSmPersist_FWD_DEFINED__
#define __IAcSmPersist_FWD_DEFINED__
typedef interface IAcSmPersist IAcSmPersist;

#endif 	/* __IAcSmPersist_FWD_DEFINED__ */


#ifndef __IAcSmObjectId_FWD_DEFINED__
#define __IAcSmObjectId_FWD_DEFINED__
typedef interface IAcSmObjectId IAcSmObjectId;

#endif 	/* __IAcSmObjectId_FWD_DEFINED__ */


#ifndef __IAcSmComponent_FWD_DEFINED__
#define __IAcSmComponent_FWD_DEFINED__
typedef interface IAcSmComponent IAcSmComponent;

#endif 	/* __IAcSmComponent_FWD_DEFINED__ */


#ifndef __IAcSmSubset_FWD_DEFINED__
#define __IAcSmSubset_FWD_DEFINED__
typedef interface IAcSmSubset IAcSmSubset;

#endif 	/* __IAcSmSubset_FWD_DEFINED__ */


#ifndef __IAcSmSheetSet_FWD_DEFINED__
#define __IAcSmSheetSet_FWD_DEFINED__
typedef interface IAcSmSheetSet IAcSmSheetSet;

#endif 	/* __IAcSmSheetSet_FWD_DEFINED__ */


#ifndef __IAcSmSheet_FWD_DEFINED__
#define __IAcSmSheet_FWD_DEFINED__
typedef interface IAcSmSheet IAcSmSheet;

#endif 	/* __IAcSmSheet_FWD_DEFINED__ */


#ifndef __IAcSmViewCategories_FWD_DEFINED__
#define __IAcSmViewCategories_FWD_DEFINED__
typedef interface IAcSmViewCategories IAcSmViewCategories;

#endif 	/* __IAcSmViewCategories_FWD_DEFINED__ */


#ifndef __IAcSmSheetViews_FWD_DEFINED__
#define __IAcSmSheetViews_FWD_DEFINED__
typedef interface IAcSmSheetViews IAcSmSheetViews;

#endif 	/* __IAcSmSheetViews_FWD_DEFINED__ */


#ifndef __IAcSmEnumSheetView_FWD_DEFINED__
#define __IAcSmEnumSheetView_FWD_DEFINED__
typedef interface IAcSmEnumSheetView IAcSmEnumSheetView;

#endif 	/* __IAcSmEnumSheetView_FWD_DEFINED__ */


#ifndef __IAcSmSheetView_FWD_DEFINED__
#define __IAcSmSheetView_FWD_DEFINED__
typedef interface IAcSmSheetView IAcSmSheetView;

#endif 	/* __IAcSmSheetView_FWD_DEFINED__ */


#ifndef __IAcSmFiler_FWD_DEFINED__
#define __IAcSmFiler_FWD_DEFINED__
typedef interface IAcSmFiler IAcSmFiler;

#endif 	/* __IAcSmFiler_FWD_DEFINED__ */


#ifndef __IAcSmAcDbDatabase_FWD_DEFINED__
#define __IAcSmAcDbDatabase_FWD_DEFINED__
typedef interface IAcSmAcDbDatabase IAcSmAcDbDatabase;

#endif 	/* __IAcSmAcDbDatabase_FWD_DEFINED__ */


#ifndef __IAcSmDatabase_FWD_DEFINED__
#define __IAcSmDatabase_FWD_DEFINED__
typedef interface IAcSmDatabase IAcSmDatabase;

#endif 	/* __IAcSmDatabase_FWD_DEFINED__ */


#ifndef __IAcSmDatabase_Internal_FWD_DEFINED__
#define __IAcSmDatabase_Internal_FWD_DEFINED__
typedef interface IAcSmDatabase_Internal IAcSmDatabase_Internal;

#endif 	/* __IAcSmDatabase_Internal_FWD_DEFINED__ */


#ifndef __IAcSmCustomPropertyValue_FWD_DEFINED__
#define __IAcSmCustomPropertyValue_FWD_DEFINED__
typedef interface IAcSmCustomPropertyValue IAcSmCustomPropertyValue;

#endif 	/* __IAcSmCustomPropertyValue_FWD_DEFINED__ */


#ifndef __IAcSmEnumProperty_FWD_DEFINED__
#define __IAcSmEnumProperty_FWD_DEFINED__
typedef interface IAcSmEnumProperty IAcSmEnumProperty;

#endif 	/* __IAcSmEnumProperty_FWD_DEFINED__ */


#ifndef __IAcSmCustomPropertyBag_FWD_DEFINED__
#define __IAcSmCustomPropertyBag_FWD_DEFINED__
typedef interface IAcSmCustomPropertyBag IAcSmCustomPropertyBag;

#endif 	/* __IAcSmCustomPropertyBag_FWD_DEFINED__ */


#ifndef __IAcSmFileReference_FWD_DEFINED__
#define __IAcSmFileReference_FWD_DEFINED__
typedef interface IAcSmFileReference IAcSmFileReference;

#endif 	/* __IAcSmFileReference_FWD_DEFINED__ */


#ifndef __IAcSmAcDbObjectReference_FWD_DEFINED__
#define __IAcSmAcDbObjectReference_FWD_DEFINED__
typedef interface IAcSmAcDbObjectReference IAcSmAcDbObjectReference;

#endif 	/* __IAcSmAcDbObjectReference_FWD_DEFINED__ */


#ifndef __IAcSmNamedAcDbObjectReference_FWD_DEFINED__
#define __IAcSmNamedAcDbObjectReference_FWD_DEFINED__
typedef interface IAcSmNamedAcDbObjectReference IAcSmNamedAcDbObjectReference;

#endif 	/* __IAcSmNamedAcDbObjectReference_FWD_DEFINED__ */


#ifndef __IAcSmAcDbLayoutReference_FWD_DEFINED__
#define __IAcSmAcDbLayoutReference_FWD_DEFINED__
typedef interface IAcSmAcDbLayoutReference IAcSmAcDbLayoutReference;

#endif 	/* __IAcSmAcDbLayoutReference_FWD_DEFINED__ */


#ifndef __IAcSmEnumComponent_FWD_DEFINED__
#define __IAcSmEnumComponent_FWD_DEFINED__
typedef interface IAcSmEnumComponent IAcSmEnumComponent;

#endif 	/* __IAcSmEnumComponent_FWD_DEFINED__ */


#ifndef __IAcSmAcDbViewReference_FWD_DEFINED__
#define __IAcSmAcDbViewReference_FWD_DEFINED__
typedef interface IAcSmAcDbViewReference IAcSmAcDbViewReference;

#endif 	/* __IAcSmAcDbViewReference_FWD_DEFINED__ */


#ifndef __IAcSmAcDbBlockRecordReference_FWD_DEFINED__
#define __IAcSmAcDbBlockRecordReference_FWD_DEFINED__
typedef interface IAcSmAcDbBlockRecordReference IAcSmAcDbBlockRecordReference;

#endif 	/* __IAcSmAcDbBlockRecordReference_FWD_DEFINED__ */


#ifndef __IAcSmEnumAcDbBlockRecordReference_FWD_DEFINED__
#define __IAcSmEnumAcDbBlockRecordReference_FWD_DEFINED__
typedef interface IAcSmEnumAcDbBlockRecordReference IAcSmEnumAcDbBlockRecordReference;

#endif 	/* __IAcSmEnumAcDbBlockRecordReference_FWD_DEFINED__ */


#ifndef __IAcSmCalloutBlocks_FWD_DEFINED__
#define __IAcSmCalloutBlocks_FWD_DEFINED__
typedef interface IAcSmCalloutBlocks IAcSmCalloutBlocks;

#endif 	/* __IAcSmCalloutBlocks_FWD_DEFINED__ */


#ifndef __IAcSmSheetSelSet_FWD_DEFINED__
#define __IAcSmSheetSelSet_FWD_DEFINED__
typedef interface IAcSmSheetSelSet IAcSmSheetSelSet;

#endif 	/* __IAcSmSheetSelSet_FWD_DEFINED__ */


#ifndef __IAcSmEnumSheetSelSet_FWD_DEFINED__
#define __IAcSmEnumSheetSelSet_FWD_DEFINED__
typedef interface IAcSmEnumSheetSelSet IAcSmEnumSheetSelSet;

#endif 	/* __IAcSmEnumSheetSelSet_FWD_DEFINED__ */


#ifndef __IAcSmSheetSelSets_FWD_DEFINED__
#define __IAcSmSheetSelSets_FWD_DEFINED__
typedef interface IAcSmSheetSelSets IAcSmSheetSelSets;

#endif 	/* __IAcSmSheetSelSets_FWD_DEFINED__ */


#ifndef __IAcSmEnumFileReference_FWD_DEFINED__
#define __IAcSmEnumFileReference_FWD_DEFINED__
typedef interface IAcSmEnumFileReference IAcSmEnumFileReference;

#endif 	/* __IAcSmEnumFileReference_FWD_DEFINED__ */


#ifndef __IAcSmResources_FWD_DEFINED__
#define __IAcSmResources_FWD_DEFINED__
typedef interface IAcSmResources IAcSmResources;

#endif 	/* __IAcSmResources_FWD_DEFINED__ */


#ifndef __IAcSmPublishOptions_FWD_DEFINED__
#define __IAcSmPublishOptions_FWD_DEFINED__
typedef interface IAcSmPublishOptions IAcSmPublishOptions;

#endif 	/* __IAcSmPublishOptions_FWD_DEFINED__ */


#ifndef __IAcSmEvents_FWD_DEFINED__
#define __IAcSmEvents_FWD_DEFINED__
typedef interface IAcSmEvents IAcSmEvents;

#endif 	/* __IAcSmEvents_FWD_DEFINED__ */


#ifndef __IAcSmEnumPersist_FWD_DEFINED__
#define __IAcSmEnumPersist_FWD_DEFINED__
typedef interface IAcSmEnumPersist IAcSmEnumPersist;

#endif 	/* __IAcSmEnumPersist_FWD_DEFINED__ */


#ifndef __IAcSmPersistProxy_FWD_DEFINED__
#define __IAcSmPersistProxy_FWD_DEFINED__
typedef interface IAcSmPersistProxy IAcSmPersistProxy;

#endif 	/* __IAcSmPersistProxy_FWD_DEFINED__ */


#ifndef __IAcSmObjectReference_FWD_DEFINED__
#define __IAcSmObjectReference_FWD_DEFINED__
typedef interface IAcSmObjectReference IAcSmObjectReference;

#endif 	/* __IAcSmObjectReference_FWD_DEFINED__ */


#ifndef __IAcSmProjectPointLocation_FWD_DEFINED__
#define __IAcSmProjectPointLocation_FWD_DEFINED__
typedef interface IAcSmProjectPointLocation IAcSmProjectPointLocation;

#endif 	/* __IAcSmProjectPointLocation_FWD_DEFINED__ */


#ifndef __IAcSmEnumProjectPointLocation_FWD_DEFINED__
#define __IAcSmEnumProjectPointLocation_FWD_DEFINED__
typedef interface IAcSmEnumProjectPointLocation IAcSmEnumProjectPointLocation;

#endif 	/* __IAcSmEnumProjectPointLocation_FWD_DEFINED__ */


#ifndef __IAcSmProjectPointLocations_FWD_DEFINED__
#define __IAcSmProjectPointLocations_FWD_DEFINED__
typedef interface IAcSmProjectPointLocations IAcSmProjectPointLocations;

#endif 	/* __IAcSmProjectPointLocations_FWD_DEFINED__ */


#ifndef __IAcSmEnumDatabase_FWD_DEFINED__
#define __IAcSmEnumDatabase_FWD_DEFINED__
typedef interface IAcSmEnumDatabase IAcSmEnumDatabase;

#endif 	/* __IAcSmEnumDatabase_FWD_DEFINED__ */


#ifndef __IAcSmSheetSetMgr_FWD_DEFINED__
#define __IAcSmSheetSetMgr_FWD_DEFINED__
typedef interface IAcSmSheetSetMgr IAcSmSheetSetMgr;

#endif 	/* __IAcSmSheetSetMgr_FWD_DEFINED__ */


#ifndef __IAcSmViewCategory_FWD_DEFINED__
#define __IAcSmViewCategory_FWD_DEFINED__
typedef interface IAcSmViewCategory IAcSmViewCategory;

#endif 	/* __IAcSmViewCategory_FWD_DEFINED__ */


#ifndef __IAcSmEnumViewCategory_FWD_DEFINED__
#define __IAcSmEnumViewCategory_FWD_DEFINED__
typedef interface IAcSmEnumViewCategory IAcSmEnumViewCategory;

#endif 	/* __IAcSmEnumViewCategory_FWD_DEFINED__ */


#ifndef __IOdSmInternal_FWD_DEFINED__
#define __IOdSmInternal_FWD_DEFINED__
typedef interface IOdSmInternal IOdSmInternal;

#endif 	/* __IOdSmInternal_FWD_DEFINED__ */


#ifndef __AcSmPersist_FWD_DEFINED__
#define __AcSmPersist_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmPersist AcSmPersist;
#else
typedef struct AcSmPersist AcSmPersist;
#endif /* __cplusplus */

#endif 	/* __AcSmPersist_FWD_DEFINED__ */


#ifndef __AcSmComponent_FWD_DEFINED__
#define __AcSmComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmComponent AcSmComponent;
#else
typedef struct AcSmComponent AcSmComponent;
#endif /* __cplusplus */

#endif 	/* __AcSmComponent_FWD_DEFINED__ */


#ifndef __AcSmObjectId_FWD_DEFINED__
#define __AcSmObjectId_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmObjectId AcSmObjectId;
#else
typedef struct AcSmObjectId AcSmObjectId;
#endif /* __cplusplus */

#endif 	/* __AcSmObjectId_FWD_DEFINED__ */


#ifndef __AcSmEnumComponent_FWD_DEFINED__
#define __AcSmEnumComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumComponent AcSmEnumComponent;
#else
typedef struct AcSmEnumComponent AcSmEnumComponent;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumComponent_FWD_DEFINED__ */


#ifndef __AcSmSubset_FWD_DEFINED__
#define __AcSmSubset_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmSubset AcSmSubset;
#else
typedef struct AcSmSubset AcSmSubset;
#endif /* __cplusplus */

#endif 	/* __AcSmSubset_FWD_DEFINED__ */


#ifndef __AcSmAcDbBlockRecordReference_FWD_DEFINED__
#define __AcSmAcDbBlockRecordReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmAcDbBlockRecordReference AcSmAcDbBlockRecordReference;
#else
typedef struct AcSmAcDbBlockRecordReference AcSmAcDbBlockRecordReference;
#endif /* __cplusplus */

#endif 	/* __AcSmAcDbBlockRecordReference_FWD_DEFINED__ */


#ifndef __AcSmAcDbDatabase_FWD_DEFINED__
#define __AcSmAcDbDatabase_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmAcDbDatabase AcSmAcDbDatabase;
#else
typedef struct AcSmAcDbDatabase AcSmAcDbDatabase;
#endif /* __cplusplus */

#endif 	/* __AcSmAcDbDatabase_FWD_DEFINED__ */


#ifndef __AcSmAcDbLayoutReference_FWD_DEFINED__
#define __AcSmAcDbLayoutReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmAcDbLayoutReference AcSmAcDbLayoutReference;
#else
typedef struct AcSmAcDbLayoutReference AcSmAcDbLayoutReference;
#endif /* __cplusplus */

#endif 	/* __AcSmAcDbLayoutReference_FWD_DEFINED__ */


#ifndef __AcSmAcDbObjectReference_FWD_DEFINED__
#define __AcSmAcDbObjectReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmAcDbObjectReference AcSmAcDbObjectReference;
#else
typedef struct AcSmAcDbObjectReference AcSmAcDbObjectReference;
#endif /* __cplusplus */

#endif 	/* __AcSmAcDbObjectReference_FWD_DEFINED__ */


#ifndef __AcSmAcDbViewReference_FWD_DEFINED__
#define __AcSmAcDbViewReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmAcDbViewReference AcSmAcDbViewReference;
#else
typedef struct AcSmAcDbViewReference AcSmAcDbViewReference;
#endif /* __cplusplus */

#endif 	/* __AcSmAcDbViewReference_FWD_DEFINED__ */


#ifndef __AcSmCalloutBlocks_FWD_DEFINED__
#define __AcSmCalloutBlocks_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmCalloutBlocks AcSmCalloutBlocks;
#else
typedef struct AcSmCalloutBlocks AcSmCalloutBlocks;
#endif /* __cplusplus */

#endif 	/* __AcSmCalloutBlocks_FWD_DEFINED__ */


#ifndef __AcSmCustomPropertyBag_FWD_DEFINED__
#define __AcSmCustomPropertyBag_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmCustomPropertyBag AcSmCustomPropertyBag;
#else
typedef struct AcSmCustomPropertyBag AcSmCustomPropertyBag;
#endif /* __cplusplus */

#endif 	/* __AcSmCustomPropertyBag_FWD_DEFINED__ */


#ifndef __AcSmCustomPropertyValue_FWD_DEFINED__
#define __AcSmCustomPropertyValue_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmCustomPropertyValue AcSmCustomPropertyValue;
#else
typedef struct AcSmCustomPropertyValue AcSmCustomPropertyValue;
#endif /* __cplusplus */

#endif 	/* __AcSmCustomPropertyValue_FWD_DEFINED__ */


#ifndef __AcSmDatabase_FWD_DEFINED__
#define __AcSmDatabase_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmDatabase AcSmDatabase;
#else
typedef struct AcSmDatabase AcSmDatabase;
#endif /* __cplusplus */

#endif 	/* __AcSmDatabase_FWD_DEFINED__ */


#ifndef __AcSmSheetSet_FWD_DEFINED__
#define __AcSmSheetSet_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmSheetSet AcSmSheetSet;
#else
typedef struct AcSmSheetSet AcSmSheetSet;
#endif /* __cplusplus */

#endif 	/* __AcSmSheetSet_FWD_DEFINED__ */


#ifndef __AcSmEnumAcDbBlockRecordReference_FWD_DEFINED__
#define __AcSmEnumAcDbBlockRecordReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumAcDbBlockRecordReference AcSmEnumAcDbBlockRecordReference;
#else
typedef struct AcSmEnumAcDbBlockRecordReference AcSmEnumAcDbBlockRecordReference;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumAcDbBlockRecordReference_FWD_DEFINED__ */


#ifndef __AcSmEnumDatabase_FWD_DEFINED__
#define __AcSmEnumDatabase_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumDatabase AcSmEnumDatabase;
#else
typedef struct AcSmEnumDatabase AcSmEnumDatabase;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumDatabase_FWD_DEFINED__ */


#ifndef __AcSmEnumFileReference_FWD_DEFINED__
#define __AcSmEnumFileReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumFileReference AcSmEnumFileReference;
#else
typedef struct AcSmEnumFileReference AcSmEnumFileReference;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumFileReference_FWD_DEFINED__ */


#ifndef __AcSmNamedAcDbObjectReference_FWD_DEFINED__
#define __AcSmNamedAcDbObjectReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmNamedAcDbObjectReference AcSmNamedAcDbObjectReference;
#else
typedef struct AcSmNamedAcDbObjectReference AcSmNamedAcDbObjectReference;
#endif /* __cplusplus */

#endif 	/* __AcSmNamedAcDbObjectReference_FWD_DEFINED__ */


#ifndef __AcSmProjectPointLocation_FWD_DEFINED__
#define __AcSmProjectPointLocation_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmProjectPointLocation AcSmProjectPointLocation;
#else
typedef struct AcSmProjectPointLocation AcSmProjectPointLocation;
#endif /* __cplusplus */

#endif 	/* __AcSmProjectPointLocation_FWD_DEFINED__ */


#ifndef __AcSmProjectPointLocations_FWD_DEFINED__
#define __AcSmProjectPointLocations_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmProjectPointLocations AcSmProjectPointLocations;
#else
typedef struct AcSmProjectPointLocations AcSmProjectPointLocations;
#endif /* __cplusplus */

#endif 	/* __AcSmProjectPointLocations_FWD_DEFINED__ */


#ifndef __AcSmPublishOptions_FWD_DEFINED__
#define __AcSmPublishOptions_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmPublishOptions AcSmPublishOptions;
#else
typedef struct AcSmPublishOptions AcSmPublishOptions;
#endif /* __cplusplus */

#endif 	/* __AcSmPublishOptions_FWD_DEFINED__ */


#ifndef __AcSmResources_FWD_DEFINED__
#define __AcSmResources_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmResources AcSmResources;
#else
typedef struct AcSmResources AcSmResources;
#endif /* __cplusplus */

#endif 	/* __AcSmResources_FWD_DEFINED__ */


#ifndef __AcSmSheet_FWD_DEFINED__
#define __AcSmSheet_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmSheet AcSmSheet;
#else
typedef struct AcSmSheet AcSmSheet;
#endif /* __cplusplus */

#endif 	/* __AcSmSheet_FWD_DEFINED__ */


#ifndef __AcSmSheetSelSet_FWD_DEFINED__
#define __AcSmSheetSelSet_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmSheetSelSet AcSmSheetSelSet;
#else
typedef struct AcSmSheetSelSet AcSmSheetSelSet;
#endif /* __cplusplus */

#endif 	/* __AcSmSheetSelSet_FWD_DEFINED__ */


#ifndef __AcSmSheetSelSets_FWD_DEFINED__
#define __AcSmSheetSelSets_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmSheetSelSets AcSmSheetSelSets;
#else
typedef struct AcSmSheetSelSets AcSmSheetSelSets;
#endif /* __cplusplus */

#endif 	/* __AcSmSheetSelSets_FWD_DEFINED__ */


#ifndef __AcSmSheetSetMgr_FWD_DEFINED__
#define __AcSmSheetSetMgr_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmSheetSetMgr AcSmSheetSetMgr;
#else
typedef struct AcSmSheetSetMgr AcSmSheetSetMgr;
#endif /* __cplusplus */

#endif 	/* __AcSmSheetSetMgr_FWD_DEFINED__ */


#ifndef __AcSmSheetView_FWD_DEFINED__
#define __AcSmSheetView_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmSheetView AcSmSheetView;
#else
typedef struct AcSmSheetView AcSmSheetView;
#endif /* __cplusplus */

#endif 	/* __AcSmSheetView_FWD_DEFINED__ */


#ifndef __AcSmSheetViews_FWD_DEFINED__
#define __AcSmSheetViews_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmSheetViews AcSmSheetViews;
#else
typedef struct AcSmSheetViews AcSmSheetViews;
#endif /* __cplusplus */

#endif 	/* __AcSmSheetViews_FWD_DEFINED__ */


#ifndef __AcSmViewCategories_FWD_DEFINED__
#define __AcSmViewCategories_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmViewCategories AcSmViewCategories;
#else
typedef struct AcSmViewCategories AcSmViewCategories;
#endif /* __cplusplus */

#endif 	/* __AcSmViewCategories_FWD_DEFINED__ */


#ifndef __AcSmViewCategory_FWD_DEFINED__
#define __AcSmViewCategory_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmViewCategory AcSmViewCategory;
#else
typedef struct AcSmViewCategory AcSmViewCategory;
#endif /* __cplusplus */

#endif 	/* __AcSmViewCategory_FWD_DEFINED__ */


#ifndef __AcSmEnumPersist_FWD_DEFINED__
#define __AcSmEnumPersist_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumPersist AcSmEnumPersist;
#else
typedef struct AcSmEnumPersist AcSmEnumPersist;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumPersist_FWD_DEFINED__ */


#ifndef __AcSmCalloutBlockReferences_FWD_DEFINED__
#define __AcSmCalloutBlockReferences_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmCalloutBlockReferences AcSmCalloutBlockReferences;
#else
typedef struct AcSmCalloutBlockReferences AcSmCalloutBlockReferences;
#endif /* __cplusplus */

#endif 	/* __AcSmCalloutBlockReferences_FWD_DEFINED__ */


#ifndef __AcSmEnumProperty_FWD_DEFINED__
#define __AcSmEnumProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumProperty AcSmEnumProperty;
#else
typedef struct AcSmEnumProperty AcSmEnumProperty;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumProperty_FWD_DEFINED__ */


#ifndef __AcSmEnumViewCategory_FWD_DEFINED__
#define __AcSmEnumViewCategory_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumViewCategory AcSmEnumViewCategory;
#else
typedef struct AcSmEnumViewCategory AcSmEnumViewCategory;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumViewCategory_FWD_DEFINED__ */


#ifndef __AcSmEnumSheetView_FWD_DEFINED__
#define __AcSmEnumSheetView_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumSheetView AcSmEnumSheetView;
#else
typedef struct AcSmEnumSheetView AcSmEnumSheetView;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumSheetView_FWD_DEFINED__ */


#ifndef __AcSmEnumProjectPointLocation_FWD_DEFINED__
#define __AcSmEnumProjectPointLocation_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumProjectPointLocation AcSmEnumProjectPointLocation;
#else
typedef struct AcSmEnumProjectPointLocation AcSmEnumProjectPointLocation;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumProjectPointLocation_FWD_DEFINED__ */


#ifndef __AcSmFileReference_FWD_DEFINED__
#define __AcSmFileReference_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmFileReference AcSmFileReference;
#else
typedef struct AcSmFileReference AcSmFileReference;
#endif /* __cplusplus */

#endif 	/* __AcSmFileReference_FWD_DEFINED__ */


#ifndef __AcSmEnumSheetSelSet_FWD_DEFINED__
#define __AcSmEnumSheetSelSet_FWD_DEFINED__

#ifdef __cplusplus
typedef class AcSmEnumSheetSelSet AcSmEnumSheetSelSet;
#else
typedef struct AcSmEnumSheetSelSet AcSmEnumSheetSelSet;
#endif /* __cplusplus */

#endif 	/* __AcSmEnumSheetSelSet_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __BricscadSm_LIBRARY_DEFINED__
#define __BricscadSm_LIBRARY_DEFINED__

/* library BricscadSm */
/* [helpstring][uuid][version] */ 














typedef /* [public][public][public][uuid] */  DECLSPEC_UUID("B9EB75EC-3432-4a18-AD38-4F41A0109350") 
enum __MIDL___MIDL_itf_OdSmX_0001_0066_0001
    {
        EMPTY	= 0,
        CUSTOM_SHEETSET_PROP	= 1,
        CUSTOM_SHEET_PROP	= 2,
        CUSTOM_SUBSET_PROP	= 4,
        IS_CHILD	= 8
    } 	PropertyFlags;

typedef /* [public][public][public][public][uuid] */  DECLSPEC_UUID("9646D733-C7EB-4306-99C5-A2F45DC7178A") 
enum __MIDL___MIDL_itf_OdSmX_0001_0067_0001
    {
        SHEET_ADDED	= 0,
        SHEET_DELETED	= 1,
        SHEET_SUBSET_CREATED	= 2,
        SHEET_SUBSET_DELETED	= 3,
        SHEET_SELECTION_SET_CREATED	= 4,
        SHEET_SELECTION_SET_DELETED	= 5,
        SHEET_VIEW_CREATED	= 6,
        SHEET_VIEW_DELETED	= 7,
        SHEET_VIEW_CATEGORY_CREATED	= 8,
        SHEET_VIEW_CATEGORY_DELETED	= 9,
        MODEL_RESOURCE_ADDED	= 10,
        MODEL_RESOURCE_DELETED	= 11,
        CALLOUT_BLOCK_ADDED	= 12,
        CALLOUT_BLOCK_DELETED	= 13,
        SHEETS_RENUMBERED	= 14,
        ACSM_DATABASE_CREATED	= 15,
        ACSM_DATABASE_OPENED	= 16,
        ACSM_DATABASE_IS_CLOSING	= 17,
        ACSM_DATABASE_WATCH_ERROR	= 18,
        ACSM_DATABASE_LOCKED	= 19,
        ACSM_DATABASE_UNLOCKED	= 20,
        ACSM_DATABASE_CHANGED	= 21,
        ACSM_DATABASE_INITNEW_BEGIN	= 22,
        ACSM_DATABASE_INITNEW_FAILED	= 23,
        ACSM_DATABASE_INITNEW_COMPLETE	= 24,
        ACSM_DATABASE_LOAD_BEGIN	= 25,
        ACSM_DATABASE_LOAD_FAILED	= 26,
        ACSM_DATABASE_LOAD_COMPLETE	= 27
    } 	AcSmEvent;

typedef /* [public][public][uuid] */  DECLSPEC_UUID("352629d3-ad04-45d5-9f78-73714132347f") 
enum __MIDL___MIDL_itf_OdSmX_0001_0067_0002
    {
        AcSmLockStatus_UnLocked	= 0,
        AcSmLockStatus_Locked_Local	= 1,
        AcSmLockStatus_Locked_Remote	= 2,
        AcSmLockStatus_Locked_ReadOnly	= 4,
        AcSmLockStatus_Locked_NotConnected	= 8,
        AcSmLockStatus_Locked_AccessDenied	= 16
    } 	AcSmLockStatus;

typedef /* [public][public][public][uuid] */  DECLSPEC_UUID("5a943186-ffc1-4708-86c8-123029970629") 
enum __MIDL___MIDL_itf_OdSmX_0001_0067_0003
    {
        AcSmObjectReference_SoftPointer	= 1,
        AcSmObjectReference_HardPointer	= 2
    } 	AcSmObjectReferenceFlags;


EXTERN_C const IID LIBID_BricscadSm;

#ifndef __IAcSmPersist_INTERFACE_DEFINED__
#define __IAcSmPersist_INTERFACE_DEFINED__

/* interface IAcSmPersist */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAcSmPersist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ab9e4650-c3a8-4747-8d89-80731a4644a1")
    IAcSmPersist : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE GetClassID( 
            /* [retval][out] */ GUID *p) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetIsDirty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ IAcSmFiler *pFiler) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ IAcSmFiler *pFiler) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetTypeName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InitNew( 
            /* [in] */ IAcSmPersist *pOwner) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetOwner( 
            /* [retval][out] */ IAcSmPersist **ppOwner) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetOwner( 
            /* [in] */ IAcSmPersist *pOwner) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDatabase( 
            /* [retval][out] */ IAcSmDatabase **ppDb) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetObjectId( 
            /* [retval][out] */ IAcSmObjectId **ppId) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDirectlyOwnedObjects( 
            /* [out] */ SAFEARRAY * *objects) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDirectlyOwnedObjectsArray( 
            /* [retval][out] */ SAFEARRAY * *objects) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmPersistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmPersist * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmPersist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmPersist * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmPersist * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmPersist * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmPersist * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmPersist * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmPersist * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmPersist * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmPersist * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmPersist * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmPersist * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmPersist * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmPersist * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmPersist * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmPersist * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmPersist * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmPersist * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmPersist * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmPersist * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        END_INTERFACE
    } IAcSmPersistVtbl;

    interface IAcSmPersist
    {
        CONST_VTBL struct IAcSmPersistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmPersist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmPersist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmPersist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmPersist_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmPersist_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmPersist_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmPersist_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmPersist_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmPersist_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmPersist_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmPersist_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmPersist_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmPersist_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmPersist_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmPersist_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmPersist_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmPersist_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmPersist_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmPersist_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmPersist_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmPersist_INTERFACE_DEFINED__ */


#ifndef __IAcSmObjectId_INTERFACE_DEFINED__
#define __IAcSmObjectId_INTERFACE_DEFINED__

/* interface IAcSmObjectId */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmObjectId;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42634426-cdfb-4e32-ad46-992ceb3b1596")
    IAcSmObjectId : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetHandle( 
            /* [retval][out] */ BSTR *hand) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDatabase( 
            /* [retval][out] */ IAcSmDatabase **ppDb) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPersistObject( 
            /* [retval][out] */ IAcSmPersist **ppObj) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetOwner( 
            /* [retval][out] */ IAcSmPersist **ppObj) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IsEqual( 
            /* [in] */ IAcSmObjectId *pId,
            /* [retval][out] */ VARIANT_BOOL *pResult) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE IsValid( 
            /* [retval][out] */ VARIANT_BOOL *pResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmObjectIdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmObjectId * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmObjectId * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmObjectId * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmObjectId * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmObjectId * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmObjectId * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmObjectId * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetHandle )( 
            IAcSmObjectId * This,
            /* [retval][out] */ BSTR *hand);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmObjectId * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPersistObject )( 
            IAcSmObjectId * This,
            /* [retval][out] */ IAcSmPersist **ppObj);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmObjectId * This,
            /* [retval][out] */ IAcSmPersist **ppObj);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsEqual )( 
            IAcSmObjectId * This,
            /* [in] */ IAcSmObjectId *pId,
            /* [retval][out] */ VARIANT_BOOL *pResult);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            IAcSmObjectId * This,
            /* [retval][out] */ VARIANT_BOOL *pResult);
        
        END_INTERFACE
    } IAcSmObjectIdVtbl;

    interface IAcSmObjectId
    {
        CONST_VTBL struct IAcSmObjectIdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmObjectId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmObjectId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmObjectId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmObjectId_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmObjectId_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmObjectId_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmObjectId_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmObjectId_GetHandle(This,hand)	\
    ( (This)->lpVtbl -> GetHandle(This,hand) ) 

#define IAcSmObjectId_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmObjectId_GetPersistObject(This,ppObj)	\
    ( (This)->lpVtbl -> GetPersistObject(This,ppObj) ) 

#define IAcSmObjectId_GetOwner(This,ppObj)	\
    ( (This)->lpVtbl -> GetOwner(This,ppObj) ) 

#define IAcSmObjectId_IsEqual(This,pId,pResult)	\
    ( (This)->lpVtbl -> IsEqual(This,pId,pResult) ) 

#define IAcSmObjectId_IsValid(This,pResult)	\
    ( (This)->lpVtbl -> IsValid(This,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmObjectId_INTERFACE_DEFINED__ */


#ifndef __IAcSmComponent_INTERFACE_DEFINED__
#define __IAcSmComponent_INTERFACE_DEFINED__

/* interface IAcSmComponent */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmComponent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0e463002-12a4-4828-b4cf-28d8cbf8c768")
    IAcSmComponent : public IAcSmPersist
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDesc( 
            /* [retval][out] */ BSTR *desc) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetDesc( 
            /* [in] */ BSTR desc) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetCustomPropertyBag( 
            /* [retval][out] */ IAcSmCustomPropertyBag **bag) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmComponentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmComponent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmComponent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmComponent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmComponent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmComponent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmComponent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmComponent * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmComponent * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmComponent * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmComponent * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmComponent * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmComponent * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmComponent * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmComponent * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmComponent * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmComponent * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmComponent * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmComponent * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmComponent * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmComponent * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmComponent * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmComponent * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmComponent * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmComponent * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmComponent * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        END_INTERFACE
    } IAcSmComponentVtbl;

    interface IAcSmComponent
    {
        CONST_VTBL struct IAcSmComponentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmComponent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmComponent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmComponent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmComponent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmComponent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmComponent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmComponent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmComponent_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmComponent_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmComponent_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmComponent_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmComponent_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmComponent_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmComponent_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmComponent_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmComponent_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmComponent_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmComponent_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmComponent_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmComponent_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmComponent_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmComponent_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmComponent_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmComponent_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmComponent_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmComponent_INTERFACE_DEFINED__ */


#ifndef __IAcSmSubset_INTERFACE_DEFINED__
#define __IAcSmSubset_INTERFACE_DEFINED__

/* interface IAcSmSubset */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmSubset;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8cceb838-acf5-4048-b9f0-09a843ca2ac4")
    IAcSmSubset : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetNewSheetLocation( 
            /* [retval][out] */ IAcSmFileReference **ppFileRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetNewSheetLocation( 
            /* [in] */ IAcSmFileReference *pFileRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDefDwtLayout( 
            /* [retval][out] */ IAcSmAcDbLayoutReference **ppLayoutRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetDefDwtLayout( 
            /* [in] */ IAcSmAcDbLayoutReference *pLayoutRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPromptForDwt( 
            /* [retval][out] */ VARIANT_BOOL *askForDwt) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetPromptForDwt( 
            /* [in] */ VARIANT_BOOL askForDwt) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetSheetEnumerator( 
            /* [retval][out] */ IAcSmEnumComponent **enumerator) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AddNewSheet( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [retval][out] */ IAcSmSheet **newSheet) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InsertComponent( 
            /* [in] */ IAcSmComponent *newSheet,
            /* [in] */ IAcSmComponent *beforeComp) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InsertComponentAfter( 
            /* [in] */ IAcSmComponent *newSheet,
            /* [in] */ IAcSmComponent *afterComp) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ImportSheet( 
            /* [in] */ IAcSmAcDbLayoutReference *pLayoutRef,
            /* [retval][out] */ IAcSmSheet **newSheet) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveSheet( 
            IAcSmSheet *sheet) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateSubset( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [retval][out] */ IAcSmSubset **subset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveSubset( 
            /* [in] */ IAcSmSubset *subset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE NotifyRegisteredEventHandlers( 
            /* [in] */ AcSmEvent eventcode,
            /* [in] */ IAcSmPersist *comp) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UpdateInMemoryDwgHints( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmSubsetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmSubset * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmSubset * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmSubset * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmSubset * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmSubset * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmSubset * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmSubset * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmSubset * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmSubset * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmSubset * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmSubset * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmSubset * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmSubset * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmSubset * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmSubset * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmSubset * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmSubset * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmSubset * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmSubset * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmSubset * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmSubset * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNewSheetLocation )( 
            IAcSmSubset * This,
            /* [retval][out] */ IAcSmFileReference **ppFileRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNewSheetLocation )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmFileReference *pFileRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefDwtLayout )( 
            IAcSmSubset * This,
            /* [retval][out] */ IAcSmAcDbLayoutReference **ppLayoutRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDefDwtLayout )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmAcDbLayoutReference *pLayoutRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPromptForDwt )( 
            IAcSmSubset * This,
            /* [retval][out] */ VARIANT_BOOL *askForDwt);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPromptForDwt )( 
            IAcSmSubset * This,
            /* [in] */ VARIANT_BOOL askForDwt);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSheetEnumerator )( 
            IAcSmSubset * This,
            /* [retval][out] */ IAcSmEnumComponent **enumerator);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddNewSheet )( 
            IAcSmSubset * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [retval][out] */ IAcSmSheet **newSheet);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertComponent )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmComponent *newSheet,
            /* [in] */ IAcSmComponent *beforeComp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertComponentAfter )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmComponent *newSheet,
            /* [in] */ IAcSmComponent *afterComp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ImportSheet )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmAcDbLayoutReference *pLayoutRef,
            /* [retval][out] */ IAcSmSheet **newSheet);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveSheet )( 
            IAcSmSubset * This,
            IAcSmSheet *sheet);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSubset )( 
            IAcSmSubset * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [retval][out] */ IAcSmSubset **subset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveSubset )( 
            IAcSmSubset * This,
            /* [in] */ IAcSmSubset *subset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyRegisteredEventHandlers )( 
            IAcSmSubset * This,
            /* [in] */ AcSmEvent eventcode,
            /* [in] */ IAcSmPersist *comp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateInMemoryDwgHints )( 
            IAcSmSubset * This);
        
        END_INTERFACE
    } IAcSmSubsetVtbl;

    interface IAcSmSubset
    {
        CONST_VTBL struct IAcSmSubsetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmSubset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmSubset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmSubset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmSubset_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmSubset_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmSubset_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmSubset_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmSubset_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmSubset_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmSubset_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmSubset_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmSubset_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmSubset_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmSubset_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmSubset_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmSubset_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmSubset_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmSubset_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmSubset_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmSubset_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmSubset_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmSubset_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmSubset_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmSubset_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmSubset_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmSubset_GetNewSheetLocation(This,ppFileRef)	\
    ( (This)->lpVtbl -> GetNewSheetLocation(This,ppFileRef) ) 

#define IAcSmSubset_SetNewSheetLocation(This,pFileRef)	\
    ( (This)->lpVtbl -> SetNewSheetLocation(This,pFileRef) ) 

#define IAcSmSubset_GetDefDwtLayout(This,ppLayoutRef)	\
    ( (This)->lpVtbl -> GetDefDwtLayout(This,ppLayoutRef) ) 

#define IAcSmSubset_SetDefDwtLayout(This,pLayoutRef)	\
    ( (This)->lpVtbl -> SetDefDwtLayout(This,pLayoutRef) ) 

#define IAcSmSubset_GetPromptForDwt(This,askForDwt)	\
    ( (This)->lpVtbl -> GetPromptForDwt(This,askForDwt) ) 

#define IAcSmSubset_SetPromptForDwt(This,askForDwt)	\
    ( (This)->lpVtbl -> SetPromptForDwt(This,askForDwt) ) 

#define IAcSmSubset_GetSheetEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetSheetEnumerator(This,enumerator) ) 

#define IAcSmSubset_AddNewSheet(This,name,desc,newSheet)	\
    ( (This)->lpVtbl -> AddNewSheet(This,name,desc,newSheet) ) 

#define IAcSmSubset_InsertComponent(This,newSheet,beforeComp)	\
    ( (This)->lpVtbl -> InsertComponent(This,newSheet,beforeComp) ) 

#define IAcSmSubset_InsertComponentAfter(This,newSheet,afterComp)	\
    ( (This)->lpVtbl -> InsertComponentAfter(This,newSheet,afterComp) ) 

#define IAcSmSubset_ImportSheet(This,pLayoutRef,newSheet)	\
    ( (This)->lpVtbl -> ImportSheet(This,pLayoutRef,newSheet) ) 

#define IAcSmSubset_RemoveSheet(This,sheet)	\
    ( (This)->lpVtbl -> RemoveSheet(This,sheet) ) 

#define IAcSmSubset_CreateSubset(This,name,desc,subset)	\
    ( (This)->lpVtbl -> CreateSubset(This,name,desc,subset) ) 

#define IAcSmSubset_RemoveSubset(This,subset)	\
    ( (This)->lpVtbl -> RemoveSubset(This,subset) ) 

#define IAcSmSubset_NotifyRegisteredEventHandlers(This,eventcode,comp)	\
    ( (This)->lpVtbl -> NotifyRegisteredEventHandlers(This,eventcode,comp) ) 

#define IAcSmSubset_UpdateInMemoryDwgHints(This)	\
    ( (This)->lpVtbl -> UpdateInMemoryDwgHints(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmSubset_INTERFACE_DEFINED__ */


#ifndef __IAcSmSheetSet_INTERFACE_DEFINED__
#define __IAcSmSheetSet_INTERFACE_DEFINED__

/* interface IAcSmSheetSet */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmSheetSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("537476a6-e9e9-4e25-b6ea-fb5b8b086153")
    IAcSmSheetSet : public IAcSmSubset
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetAltPageSetups( 
            /* [retval][out] */ IAcSmFileReference **ppDwtRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetAltPageSetups( 
            /* [in] */ IAcSmFileReference *pDwtRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDefAltPageSetup( 
            /* [retval][out] */ IAcSmNamedAcDbObjectReference **ppAltPageSetup) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetDefAltPageSetup( 
            /* [in] */ IAcSmNamedAcDbObjectReference *pAltPageSetup) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPromptForDwgName( 
            /* [retval][out] */ VARIANT_BOOL *askForName) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetPromptForDwgName( 
            /* [in] */ VARIANT_BOOL askForName) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetSheetSelSets( 
            /* [retval][out] */ IAcSmSheetSelSets **ppSheetSelSets) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetResources( 
            /* [retval][out] */ IAcSmResources **ppResources) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetCalloutBlocks( 
            /* [retval][out] */ IAcSmCalloutBlocks **ppCalloutBlocks) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetViewCategories( 
            /* [retval][out] */ IAcSmViewCategories **ppViewCategories) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDefLabelBlk( 
            /* [retval][out] */ IAcSmAcDbBlockRecordReference **ppLabelBlkRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetDefLabelBlk( 
            /* [in] */ IAcSmAcDbBlockRecordReference *pLabelBlkRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPublishOptions( 
            /* [retval][out] */ IAcSmPublishOptions **ppPublishOptions) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Sync( 
            /* [in] */ /* external definition not present */ IAcadDatabase *pXDb) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Register( 
            /* [in] */ IAcSmEvents *eventHandler,
            /* [retval][out] */ long *cookie) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Unregister( 
            /* [in] */ long cookie) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UpdateSheetCustomProps( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmSheetSetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmSheetSet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmSheetSet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmSheetSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmSheetSet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmSheetSet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmSheetSet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmSheetSet * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmSheetSet * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmSheetSet * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmSheetSet * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmSheetSet * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNewSheetLocation )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmFileReference **ppFileRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNewSheetLocation )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmFileReference *pFileRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefDwtLayout )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmAcDbLayoutReference **ppLayoutRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDefDwtLayout )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmAcDbLayoutReference *pLayoutRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPromptForDwt )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ VARIANT_BOOL *askForDwt);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPromptForDwt )( 
            IAcSmSheetSet * This,
            /* [in] */ VARIANT_BOOL askForDwt);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSheetEnumerator )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmEnumComponent **enumerator);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddNewSheet )( 
            IAcSmSheetSet * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [retval][out] */ IAcSmSheet **newSheet);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertComponent )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmComponent *newSheet,
            /* [in] */ IAcSmComponent *beforeComp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertComponentAfter )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmComponent *newSheet,
            /* [in] */ IAcSmComponent *afterComp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ImportSheet )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmAcDbLayoutReference *pLayoutRef,
            /* [retval][out] */ IAcSmSheet **newSheet);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveSheet )( 
            IAcSmSheetSet * This,
            IAcSmSheet *sheet);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateSubset )( 
            IAcSmSheetSet * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [retval][out] */ IAcSmSubset **subset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveSubset )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmSubset *subset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyRegisteredEventHandlers )( 
            IAcSmSheetSet * This,
            /* [in] */ AcSmEvent eventcode,
            /* [in] */ IAcSmPersist *comp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateInMemoryDwgHints )( 
            IAcSmSheetSet * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAltPageSetups )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmFileReference **ppDwtRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAltPageSetups )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmFileReference *pDwtRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefAltPageSetup )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmNamedAcDbObjectReference **ppAltPageSetup);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDefAltPageSetup )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmNamedAcDbObjectReference *pAltPageSetup);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPromptForDwgName )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ VARIANT_BOOL *askForName);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPromptForDwgName )( 
            IAcSmSheetSet * This,
            /* [in] */ VARIANT_BOOL askForName);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSheetSelSets )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmSheetSelSets **ppSheetSelSets);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetResources )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmResources **ppResources);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCalloutBlocks )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmCalloutBlocks **ppCalloutBlocks);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetViewCategories )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmViewCategories **ppViewCategories);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefLabelBlk )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmAcDbBlockRecordReference **ppLabelBlkRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDefLabelBlk )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmAcDbBlockRecordReference *pLabelBlkRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPublishOptions )( 
            IAcSmSheetSet * This,
            /* [retval][out] */ IAcSmPublishOptions **ppPublishOptions);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Sync )( 
            IAcSmSheetSet * This,
            /* [in] */ /* external definition not present */ IAcadDatabase *pXDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Register )( 
            IAcSmSheetSet * This,
            /* [in] */ IAcSmEvents *eventHandler,
            /* [retval][out] */ long *cookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Unregister )( 
            IAcSmSheetSet * This,
            /* [in] */ long cookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateSheetCustomProps )( 
            IAcSmSheetSet * This);
        
        END_INTERFACE
    } IAcSmSheetSetVtbl;

    interface IAcSmSheetSet
    {
        CONST_VTBL struct IAcSmSheetSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmSheetSet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmSheetSet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmSheetSet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmSheetSet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmSheetSet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmSheetSet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmSheetSet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmSheetSet_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmSheetSet_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmSheetSet_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmSheetSet_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmSheetSet_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmSheetSet_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmSheetSet_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmSheetSet_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmSheetSet_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmSheetSet_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmSheetSet_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmSheetSet_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmSheetSet_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmSheetSet_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmSheetSet_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmSheetSet_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmSheetSet_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmSheetSet_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmSheetSet_GetNewSheetLocation(This,ppFileRef)	\
    ( (This)->lpVtbl -> GetNewSheetLocation(This,ppFileRef) ) 

#define IAcSmSheetSet_SetNewSheetLocation(This,pFileRef)	\
    ( (This)->lpVtbl -> SetNewSheetLocation(This,pFileRef) ) 

#define IAcSmSheetSet_GetDefDwtLayout(This,ppLayoutRef)	\
    ( (This)->lpVtbl -> GetDefDwtLayout(This,ppLayoutRef) ) 

#define IAcSmSheetSet_SetDefDwtLayout(This,pLayoutRef)	\
    ( (This)->lpVtbl -> SetDefDwtLayout(This,pLayoutRef) ) 

#define IAcSmSheetSet_GetPromptForDwt(This,askForDwt)	\
    ( (This)->lpVtbl -> GetPromptForDwt(This,askForDwt) ) 

#define IAcSmSheetSet_SetPromptForDwt(This,askForDwt)	\
    ( (This)->lpVtbl -> SetPromptForDwt(This,askForDwt) ) 

#define IAcSmSheetSet_GetSheetEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetSheetEnumerator(This,enumerator) ) 

#define IAcSmSheetSet_AddNewSheet(This,name,desc,newSheet)	\
    ( (This)->lpVtbl -> AddNewSheet(This,name,desc,newSheet) ) 

#define IAcSmSheetSet_InsertComponent(This,newSheet,beforeComp)	\
    ( (This)->lpVtbl -> InsertComponent(This,newSheet,beforeComp) ) 

#define IAcSmSheetSet_InsertComponentAfter(This,newSheet,afterComp)	\
    ( (This)->lpVtbl -> InsertComponentAfter(This,newSheet,afterComp) ) 

#define IAcSmSheetSet_ImportSheet(This,pLayoutRef,newSheet)	\
    ( (This)->lpVtbl -> ImportSheet(This,pLayoutRef,newSheet) ) 

#define IAcSmSheetSet_RemoveSheet(This,sheet)	\
    ( (This)->lpVtbl -> RemoveSheet(This,sheet) ) 

#define IAcSmSheetSet_CreateSubset(This,name,desc,subset)	\
    ( (This)->lpVtbl -> CreateSubset(This,name,desc,subset) ) 

#define IAcSmSheetSet_RemoveSubset(This,subset)	\
    ( (This)->lpVtbl -> RemoveSubset(This,subset) ) 

#define IAcSmSheetSet_NotifyRegisteredEventHandlers(This,eventcode,comp)	\
    ( (This)->lpVtbl -> NotifyRegisteredEventHandlers(This,eventcode,comp) ) 

#define IAcSmSheetSet_UpdateInMemoryDwgHints(This)	\
    ( (This)->lpVtbl -> UpdateInMemoryDwgHints(This) ) 


#define IAcSmSheetSet_GetAltPageSetups(This,ppDwtRef)	\
    ( (This)->lpVtbl -> GetAltPageSetups(This,ppDwtRef) ) 

#define IAcSmSheetSet_SetAltPageSetups(This,pDwtRef)	\
    ( (This)->lpVtbl -> SetAltPageSetups(This,pDwtRef) ) 

#define IAcSmSheetSet_GetDefAltPageSetup(This,ppAltPageSetup)	\
    ( (This)->lpVtbl -> GetDefAltPageSetup(This,ppAltPageSetup) ) 

#define IAcSmSheetSet_SetDefAltPageSetup(This,pAltPageSetup)	\
    ( (This)->lpVtbl -> SetDefAltPageSetup(This,pAltPageSetup) ) 

#define IAcSmSheetSet_GetPromptForDwgName(This,askForName)	\
    ( (This)->lpVtbl -> GetPromptForDwgName(This,askForName) ) 

#define IAcSmSheetSet_SetPromptForDwgName(This,askForName)	\
    ( (This)->lpVtbl -> SetPromptForDwgName(This,askForName) ) 

#define IAcSmSheetSet_GetSheetSelSets(This,ppSheetSelSets)	\
    ( (This)->lpVtbl -> GetSheetSelSets(This,ppSheetSelSets) ) 

#define IAcSmSheetSet_GetResources(This,ppResources)	\
    ( (This)->lpVtbl -> GetResources(This,ppResources) ) 

#define IAcSmSheetSet_GetCalloutBlocks(This,ppCalloutBlocks)	\
    ( (This)->lpVtbl -> GetCalloutBlocks(This,ppCalloutBlocks) ) 

#define IAcSmSheetSet_GetViewCategories(This,ppViewCategories)	\
    ( (This)->lpVtbl -> GetViewCategories(This,ppViewCategories) ) 

#define IAcSmSheetSet_GetDefLabelBlk(This,ppLabelBlkRef)	\
    ( (This)->lpVtbl -> GetDefLabelBlk(This,ppLabelBlkRef) ) 

#define IAcSmSheetSet_SetDefLabelBlk(This,pLabelBlkRef)	\
    ( (This)->lpVtbl -> SetDefLabelBlk(This,pLabelBlkRef) ) 

#define IAcSmSheetSet_GetPublishOptions(This,ppPublishOptions)	\
    ( (This)->lpVtbl -> GetPublishOptions(This,ppPublishOptions) ) 

#define IAcSmSheetSet_Sync(This,pXDb)	\
    ( (This)->lpVtbl -> Sync(This,pXDb) ) 

#define IAcSmSheetSet_Register(This,eventHandler,cookie)	\
    ( (This)->lpVtbl -> Register(This,eventHandler,cookie) ) 

#define IAcSmSheetSet_Unregister(This,cookie)	\
    ( (This)->lpVtbl -> Unregister(This,cookie) ) 

#define IAcSmSheetSet_UpdateSheetCustomProps(This)	\
    ( (This)->lpVtbl -> UpdateSheetCustomProps(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmSheetSet_INTERFACE_DEFINED__ */


#ifndef __IAcSmSheet_INTERFACE_DEFINED__
#define __IAcSmSheet_INTERFACE_DEFINED__

/* interface IAcSmSheet */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmSheet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59bc91bb-fad8-44f9-86f9-5c99fa6b4edd")
    IAcSmSheet : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetNumber( 
            /* [retval][out] */ BSTR *num) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetNumber( 
            /* [in] */ BSTR num) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetTitle( 
            /* [retval][out] */ BSTR *title) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetTitle( 
            /* [in] */ BSTR title) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetLayout( 
            /* [retval][out] */ IAcSmAcDbLayoutReference **ppLayoutRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetLayout( 
            /* [in] */ IAcSmAcDbLayoutReference *pLayoutRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDoNotPlot( 
            /* [retval][out] */ VARIANT_BOOL *doNotPlot) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetDoNotPlot( 
            /* [in] */ VARIANT_BOOL doNotPlot) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetSheetViews( 
            /* [retval][out] */ IAcSmSheetViews **sheetviews) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmSheetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmSheet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmSheet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmSheet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmSheet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmSheet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmSheet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmSheet * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmSheet * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmSheet * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmSheet * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmSheet * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmSheet * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmSheet * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmSheet * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmSheet * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmSheet * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmSheet * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmSheet * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmSheet * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmSheet * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmSheet * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmSheet * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmSheet * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmSheet * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmSheet * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNumber )( 
            IAcSmSheet * This,
            /* [retval][out] */ BSTR *num);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNumber )( 
            IAcSmSheet * This,
            /* [in] */ BSTR num);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            IAcSmSheet * This,
            /* [retval][out] */ BSTR *title);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            IAcSmSheet * This,
            /* [in] */ BSTR title);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLayout )( 
            IAcSmSheet * This,
            /* [retval][out] */ IAcSmAcDbLayoutReference **ppLayoutRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLayout )( 
            IAcSmSheet * This,
            /* [in] */ IAcSmAcDbLayoutReference *pLayoutRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDoNotPlot )( 
            IAcSmSheet * This,
            /* [retval][out] */ VARIANT_BOOL *doNotPlot);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDoNotPlot )( 
            IAcSmSheet * This,
            /* [in] */ VARIANT_BOOL doNotPlot);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSheetViews )( 
            IAcSmSheet * This,
            /* [retval][out] */ IAcSmSheetViews **sheetviews);
        
        END_INTERFACE
    } IAcSmSheetVtbl;

    interface IAcSmSheet
    {
        CONST_VTBL struct IAcSmSheetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmSheet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmSheet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmSheet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmSheet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmSheet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmSheet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmSheet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmSheet_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmSheet_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmSheet_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmSheet_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmSheet_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmSheet_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmSheet_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmSheet_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmSheet_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmSheet_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmSheet_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmSheet_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmSheet_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmSheet_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmSheet_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmSheet_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmSheet_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmSheet_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmSheet_GetNumber(This,num)	\
    ( (This)->lpVtbl -> GetNumber(This,num) ) 

#define IAcSmSheet_SetNumber(This,num)	\
    ( (This)->lpVtbl -> SetNumber(This,num) ) 

#define IAcSmSheet_GetTitle(This,title)	\
    ( (This)->lpVtbl -> GetTitle(This,title) ) 

#define IAcSmSheet_SetTitle(This,title)	\
    ( (This)->lpVtbl -> SetTitle(This,title) ) 

#define IAcSmSheet_GetLayout(This,ppLayoutRef)	\
    ( (This)->lpVtbl -> GetLayout(This,ppLayoutRef) ) 

#define IAcSmSheet_SetLayout(This,pLayoutRef)	\
    ( (This)->lpVtbl -> SetLayout(This,pLayoutRef) ) 

#define IAcSmSheet_GetDoNotPlot(This,doNotPlot)	\
    ( (This)->lpVtbl -> GetDoNotPlot(This,doNotPlot) ) 

#define IAcSmSheet_SetDoNotPlot(This,doNotPlot)	\
    ( (This)->lpVtbl -> SetDoNotPlot(This,doNotPlot) ) 

#define IAcSmSheet_GetSheetViews(This,sheetviews)	\
    ( (This)->lpVtbl -> GetSheetViews(This,sheetviews) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmSheet_INTERFACE_DEFINED__ */


#ifndef __IAcSmViewCategories_INTERFACE_DEFINED__
#define __IAcSmViewCategories_INTERFACE_DEFINED__

/* interface IAcSmViewCategories */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmViewCategories;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b28b23eb-ff5e-4910-8ca6-ad54931013f3")
    IAcSmViewCategories : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IAcSmEnumViewCategory **enumerator) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateViewCategory( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [in] */ BSTR id,
            /* [retval][out] */ IAcSmViewCategory **viewCat) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE RemoveViewCategory( 
            /* [in] */ IAcSmViewCategory *viewCat) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDefaultViewCategory( 
            /* [retval][out] */ IAcSmViewCategory **ppItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmViewCategoriesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmViewCategories * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmViewCategories * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmViewCategories * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmViewCategories * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmViewCategories * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmViewCategories * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmViewCategories * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmViewCategories * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmViewCategories * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmViewCategories * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmViewCategories * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmViewCategories * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmViewCategories * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmViewCategories * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmViewCategories * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ IAcSmEnumViewCategory **enumerator);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateViewCategory )( 
            IAcSmViewCategories * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [in] */ BSTR id,
            /* [retval][out] */ IAcSmViewCategory **viewCat);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveViewCategory )( 
            IAcSmViewCategories * This,
            /* [in] */ IAcSmViewCategory *viewCat);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultViewCategory )( 
            IAcSmViewCategories * This,
            /* [retval][out] */ IAcSmViewCategory **ppItem);
        
        END_INTERFACE
    } IAcSmViewCategoriesVtbl;

    interface IAcSmViewCategories
    {
        CONST_VTBL struct IAcSmViewCategoriesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmViewCategories_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmViewCategories_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmViewCategories_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmViewCategories_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmViewCategories_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmViewCategories_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmViewCategories_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmViewCategories_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmViewCategories_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmViewCategories_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmViewCategories_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmViewCategories_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmViewCategories_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmViewCategories_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmViewCategories_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmViewCategories_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmViewCategories_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmViewCategories_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmViewCategories_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmViewCategories_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmViewCategories_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmViewCategories_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmViewCategories_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmViewCategories_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmViewCategories_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmViewCategories_GetEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetEnumerator(This,enumerator) ) 

#define IAcSmViewCategories_CreateViewCategory(This,name,desc,id,viewCat)	\
    ( (This)->lpVtbl -> CreateViewCategory(This,name,desc,id,viewCat) ) 

#define IAcSmViewCategories_RemoveViewCategory(This,viewCat)	\
    ( (This)->lpVtbl -> RemoveViewCategory(This,viewCat) ) 

#define IAcSmViewCategories_GetDefaultViewCategory(This,ppItem)	\
    ( (This)->lpVtbl -> GetDefaultViewCategory(This,ppItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmViewCategories_INTERFACE_DEFINED__ */


#ifndef __IAcSmSheetViews_INTERFACE_DEFINED__
#define __IAcSmSheetViews_INTERFACE_DEFINED__

/* interface IAcSmSheetViews */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmSheetViews;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5d2d1da2-97ca-48d9-93fd-bbc5b5852962")
    IAcSmSheetViews : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IAcSmEnumSheetView **enumerator) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Sync( 
            /* [in] */ IAcSmAcDbLayoutReference *pLayout,
            /* [in] */ /* external definition not present */ IAcadDatabase *pXDb) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmSheetViewsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmSheetViews * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmSheetViews * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmSheetViews * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmSheetViews * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmSheetViews * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmSheetViews * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmSheetViews * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmSheetViews * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmSheetViews * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmSheetViews * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmSheetViews * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmSheetViews * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmSheetViews * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmSheetViews * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmSheetViews * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IAcSmSheetViews * This,
            /* [retval][out] */ IAcSmEnumSheetView **enumerator);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Sync )( 
            IAcSmSheetViews * This,
            /* [in] */ IAcSmAcDbLayoutReference *pLayout,
            /* [in] */ /* external definition not present */ IAcadDatabase *pXDb);
        
        END_INTERFACE
    } IAcSmSheetViewsVtbl;

    interface IAcSmSheetViews
    {
        CONST_VTBL struct IAcSmSheetViewsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmSheetViews_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmSheetViews_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmSheetViews_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmSheetViews_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmSheetViews_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmSheetViews_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmSheetViews_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmSheetViews_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmSheetViews_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmSheetViews_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmSheetViews_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmSheetViews_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmSheetViews_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmSheetViews_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmSheetViews_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmSheetViews_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmSheetViews_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmSheetViews_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmSheetViews_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmSheetViews_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmSheetViews_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmSheetViews_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmSheetViews_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmSheetViews_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmSheetViews_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmSheetViews_GetEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetEnumerator(This,enumerator) ) 

#define IAcSmSheetViews_Sync(This,pLayout,pXDb)	\
    ( (This)->lpVtbl -> Sync(This,pLayout,pXDb) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmSheetViews_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumSheetView_INTERFACE_DEFINED__
#define __IAcSmEnumSheetView_INTERFACE_DEFINED__

/* interface IAcSmEnumSheetView */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmEnumSheetView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07bb6db5-2198-4ea2-8752-e5a520d01a47")
    IAcSmEnumSheetView : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [retval][out] */ IAcSmSheetView **sview) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumSheetViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumSheetView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumSheetView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumSheetView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumSheetView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumSheetView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumSheetView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumSheetView * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumSheetView * This,
            /* [retval][out] */ IAcSmSheetView **sview);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumSheetView * This);
        
        END_INTERFACE
    } IAcSmEnumSheetViewVtbl;

    interface IAcSmEnumSheetView
    {
        CONST_VTBL struct IAcSmEnumSheetViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumSheetView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumSheetView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumSheetView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumSheetView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumSheetView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumSheetView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumSheetView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumSheetView_Next(This,sview)	\
    ( (This)->lpVtbl -> Next(This,sview) ) 

#define IAcSmEnumSheetView_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumSheetView_INTERFACE_DEFINED__ */


#ifndef __IAcSmSheetView_INTERFACE_DEFINED__
#define __IAcSmSheetView_INTERFACE_DEFINED__

/* interface IAcSmSheetView */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmSheetView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f69ceaf1-819f-4b7a-b5e6-d39395415f55")
    IAcSmSheetView : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetNamedView( 
            /* [retval][out] */ IAcSmAcDbViewReference **ppViewRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetNamedView( 
            /* [in] */ IAcSmAcDbViewReference *pViewRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetCategory( 
            /* [retval][out] */ IAcSmViewCategory **ppViewCat) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetCategory( 
            /* [in] */ IAcSmViewCategory *pViewCat) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetNumber( 
            /* [retval][out] */ BSTR *num) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetNumber( 
            /* [in] */ BSTR num) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetTitle( 
            /* [retval][out] */ BSTR *title) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetTitle( 
            /* [in] */ BSTR title) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmSheetViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmSheetView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmSheetView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmSheetView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmSheetView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmSheetView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmSheetView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmSheetView * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmSheetView * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmSheetView * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmSheetView * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmSheetView * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmSheetView * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmSheetView * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmSheetView * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmSheetView * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmSheetView * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmSheetView * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmSheetView * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmSheetView * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmSheetView * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmSheetView * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmSheetView * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmSheetView * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmSheetView * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmSheetView * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNamedView )( 
            IAcSmSheetView * This,
            /* [retval][out] */ IAcSmAcDbViewReference **ppViewRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNamedView )( 
            IAcSmSheetView * This,
            /* [in] */ IAcSmAcDbViewReference *pViewRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCategory )( 
            IAcSmSheetView * This,
            /* [retval][out] */ IAcSmViewCategory **ppViewCat);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetCategory )( 
            IAcSmSheetView * This,
            /* [in] */ IAcSmViewCategory *pViewCat);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNumber )( 
            IAcSmSheetView * This,
            /* [retval][out] */ BSTR *num);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetNumber )( 
            IAcSmSheetView * This,
            /* [in] */ BSTR num);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            IAcSmSheetView * This,
            /* [retval][out] */ BSTR *title);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            IAcSmSheetView * This,
            /* [in] */ BSTR title);
        
        END_INTERFACE
    } IAcSmSheetViewVtbl;

    interface IAcSmSheetView
    {
        CONST_VTBL struct IAcSmSheetViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmSheetView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmSheetView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmSheetView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmSheetView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmSheetView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmSheetView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmSheetView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmSheetView_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmSheetView_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmSheetView_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmSheetView_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmSheetView_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmSheetView_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmSheetView_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmSheetView_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmSheetView_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmSheetView_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmSheetView_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmSheetView_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmSheetView_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmSheetView_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmSheetView_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmSheetView_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmSheetView_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmSheetView_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmSheetView_GetNamedView(This,ppViewRef)	\
    ( (This)->lpVtbl -> GetNamedView(This,ppViewRef) ) 

#define IAcSmSheetView_SetNamedView(This,pViewRef)	\
    ( (This)->lpVtbl -> SetNamedView(This,pViewRef) ) 

#define IAcSmSheetView_GetCategory(This,ppViewCat)	\
    ( (This)->lpVtbl -> GetCategory(This,ppViewCat) ) 

#define IAcSmSheetView_SetCategory(This,pViewCat)	\
    ( (This)->lpVtbl -> SetCategory(This,pViewCat) ) 

#define IAcSmSheetView_GetNumber(This,num)	\
    ( (This)->lpVtbl -> GetNumber(This,num) ) 

#define IAcSmSheetView_SetNumber(This,num)	\
    ( (This)->lpVtbl -> SetNumber(This,num) ) 

#define IAcSmSheetView_GetTitle(This,title)	\
    ( (This)->lpVtbl -> GetTitle(This,title) ) 

#define IAcSmSheetView_SetTitle(This,title)	\
    ( (This)->lpVtbl -> SetTitle(This,title) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmSheetView_INTERFACE_DEFINED__ */


#ifndef __IAcSmFiler_INTERFACE_DEFINED__
#define __IAcSmFiler_INTERFACE_DEFINED__

/* interface IAcSmFiler */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAcSmFiler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8e974876-ff7f-48d3-8435-a6328ccc496f")
    IAcSmFiler : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ IUnknown *pUnk,
            /* [in] */ IAcSmDatabase *pDb,
            /* [in] */ VARIANT_BOOL bForWrite) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ VARIANT_BOOL bSuccess) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDatabase( 
            /* [retval][out] */ IAcSmDatabase **ppDb) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE PushCurrentWriteObject( 
            /* [in] */ IAcSmPersist *pObj) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE PopCurrentWriteObject( 
            /* [in] */ long bSuccess) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE PushCurrentReadObject( 
            /* [in] */ IAcSmPersist *pObj) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE PopCurrentReadObject( 
            /* [in] */ long bSuccess) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetCurrentObject( 
            /* [retval][out] */ IAcSmPersist **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetCurrentObjectHeaderInfo( 
            /* [out] */ SAFEARRAY * *names,
            /* [out] */ SAFEARRAY * *values) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetRevisionNumber( 
            /* [retval][out] */ long *pRevisionNum) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ReadObject( 
            /* [retval][out] */ IAcSmPersist **ppObj) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ReadProperty( 
            /* [out] */ BSTR *ppPropname,
            /* [out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ReadRawData( 
            /* [out] */ unsigned char **p,
            /* [out] */ long *count) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE WriteObject( 
            /* [in] */ IAcSmPersist *pObj) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE WriteProperty( 
            /* [in] */ BSTR pPropname,
            /* [in] */ VARIANT *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE WriteRawData( 
            /* [in] */ unsigned char *p,
            /* [in] */ long count) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE ReadGuid( 
            /* [retval][out] */ GUID *pGuid) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE ReadInt( 
            /* [retval][out] */ long *pInt) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE ReadDouble( 
            /* [retval][out] */ double *pDbl) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE ReadString( 
            /* [retval][out] */ BSTR *pStr) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE ReadBytes( 
            /* [out] */ unsigned char **p,
            /* [out][in] */ long *count) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE WriteGuid( 
            /* [in] */ GUID id) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE WriteInt( 
            /* [in] */ long pInt) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE WriteDouble( 
            /* [in] */ double pDbl) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE WriteString( 
            /* [in] */ BSTR s) = 0;
        
        virtual /* [hidden][restricted] */ HRESULT STDMETHODCALLTYPE WriteBytes( 
            /* [in] */ unsigned char *p,
            /* [in] */ long count) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmFilerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmFiler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmFiler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmFiler * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IAcSmFiler * This,
            /* [in] */ IUnknown *pUnk,
            /* [in] */ IAcSmDatabase *pDb,
            /* [in] */ VARIANT_BOOL bForWrite);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IAcSmFiler * This,
            /* [in] */ VARIANT_BOOL bSuccess);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmFiler * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *PushCurrentWriteObject )( 
            IAcSmFiler * This,
            /* [in] */ IAcSmPersist *pObj);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *PopCurrentWriteObject )( 
            IAcSmFiler * This,
            /* [in] */ long bSuccess);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *PushCurrentReadObject )( 
            IAcSmFiler * This,
            /* [in] */ IAcSmPersist *pObj);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *PopCurrentReadObject )( 
            IAcSmFiler * This,
            /* [in] */ long bSuccess);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentObject )( 
            IAcSmFiler * This,
            /* [retval][out] */ IAcSmPersist **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentObjectHeaderInfo )( 
            IAcSmFiler * This,
            /* [out] */ SAFEARRAY * *names,
            /* [out] */ SAFEARRAY * *values);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRevisionNumber )( 
            IAcSmFiler * This,
            /* [retval][out] */ long *pRevisionNum);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadObject )( 
            IAcSmFiler * This,
            /* [retval][out] */ IAcSmPersist **ppObj);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadProperty )( 
            IAcSmFiler * This,
            /* [out] */ BSTR *ppPropname,
            /* [out] */ VARIANT *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadRawData )( 
            IAcSmFiler * This,
            /* [out] */ unsigned char **p,
            /* [out] */ long *count);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteObject )( 
            IAcSmFiler * This,
            /* [in] */ IAcSmPersist *pObj);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteProperty )( 
            IAcSmFiler * This,
            /* [in] */ BSTR pPropname,
            /* [in] */ VARIANT *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteRawData )( 
            IAcSmFiler * This,
            /* [in] */ unsigned char *p,
            /* [in] */ long count);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReadGuid )( 
            IAcSmFiler * This,
            /* [retval][out] */ GUID *pGuid);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReadInt )( 
            IAcSmFiler * This,
            /* [retval][out] */ long *pInt);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReadDouble )( 
            IAcSmFiler * This,
            /* [retval][out] */ double *pDbl);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReadString )( 
            IAcSmFiler * This,
            /* [retval][out] */ BSTR *pStr);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *ReadBytes )( 
            IAcSmFiler * This,
            /* [out] */ unsigned char **p,
            /* [out][in] */ long *count);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *WriteGuid )( 
            IAcSmFiler * This,
            /* [in] */ GUID id);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *WriteInt )( 
            IAcSmFiler * This,
            /* [in] */ long pInt);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *WriteDouble )( 
            IAcSmFiler * This,
            /* [in] */ double pDbl);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *WriteString )( 
            IAcSmFiler * This,
            /* [in] */ BSTR s);
        
        /* [hidden][restricted] */ HRESULT ( STDMETHODCALLTYPE *WriteBytes )( 
            IAcSmFiler * This,
            /* [in] */ unsigned char *p,
            /* [in] */ long count);
        
        END_INTERFACE
    } IAcSmFilerVtbl;

    interface IAcSmFiler
    {
        CONST_VTBL struct IAcSmFilerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmFiler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmFiler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmFiler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmFiler_Init(This,pUnk,pDb,bForWrite)	\
    ( (This)->lpVtbl -> Init(This,pUnk,pDb,bForWrite) ) 

#define IAcSmFiler_Close(This,bSuccess)	\
    ( (This)->lpVtbl -> Close(This,bSuccess) ) 

#define IAcSmFiler_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmFiler_PushCurrentWriteObject(This,pObj)	\
    ( (This)->lpVtbl -> PushCurrentWriteObject(This,pObj) ) 

#define IAcSmFiler_PopCurrentWriteObject(This,bSuccess)	\
    ( (This)->lpVtbl -> PopCurrentWriteObject(This,bSuccess) ) 

#define IAcSmFiler_PushCurrentReadObject(This,pObj)	\
    ( (This)->lpVtbl -> PushCurrentReadObject(This,pObj) ) 

#define IAcSmFiler_PopCurrentReadObject(This,bSuccess)	\
    ( (This)->lpVtbl -> PopCurrentReadObject(This,bSuccess) ) 

#define IAcSmFiler_GetCurrentObject(This,pVal)	\
    ( (This)->lpVtbl -> GetCurrentObject(This,pVal) ) 

#define IAcSmFiler_GetCurrentObjectHeaderInfo(This,names,values)	\
    ( (This)->lpVtbl -> GetCurrentObjectHeaderInfo(This,names,values) ) 

#define IAcSmFiler_GetRevisionNumber(This,pRevisionNum)	\
    ( (This)->lpVtbl -> GetRevisionNumber(This,pRevisionNum) ) 

#define IAcSmFiler_ReadObject(This,ppObj)	\
    ( (This)->lpVtbl -> ReadObject(This,ppObj) ) 

#define IAcSmFiler_ReadProperty(This,ppPropname,pVal)	\
    ( (This)->lpVtbl -> ReadProperty(This,ppPropname,pVal) ) 

#define IAcSmFiler_ReadRawData(This,p,count)	\
    ( (This)->lpVtbl -> ReadRawData(This,p,count) ) 

#define IAcSmFiler_WriteObject(This,pObj)	\
    ( (This)->lpVtbl -> WriteObject(This,pObj) ) 

#define IAcSmFiler_WriteProperty(This,pPropname,pVal)	\
    ( (This)->lpVtbl -> WriteProperty(This,pPropname,pVal) ) 

#define IAcSmFiler_WriteRawData(This,p,count)	\
    ( (This)->lpVtbl -> WriteRawData(This,p,count) ) 

#define IAcSmFiler_ReadGuid(This,pGuid)	\
    ( (This)->lpVtbl -> ReadGuid(This,pGuid) ) 

#define IAcSmFiler_ReadInt(This,pInt)	\
    ( (This)->lpVtbl -> ReadInt(This,pInt) ) 

#define IAcSmFiler_ReadDouble(This,pDbl)	\
    ( (This)->lpVtbl -> ReadDouble(This,pDbl) ) 

#define IAcSmFiler_ReadString(This,pStr)	\
    ( (This)->lpVtbl -> ReadString(This,pStr) ) 

#define IAcSmFiler_ReadBytes(This,p,count)	\
    ( (This)->lpVtbl -> ReadBytes(This,p,count) ) 

#define IAcSmFiler_WriteGuid(This,id)	\
    ( (This)->lpVtbl -> WriteGuid(This,id) ) 

#define IAcSmFiler_WriteInt(This,pInt)	\
    ( (This)->lpVtbl -> WriteInt(This,pInt) ) 

#define IAcSmFiler_WriteDouble(This,pDbl)	\
    ( (This)->lpVtbl -> WriteDouble(This,pDbl) ) 

#define IAcSmFiler_WriteString(This,s)	\
    ( (This)->lpVtbl -> WriteString(This,s) ) 

#define IAcSmFiler_WriteBytes(This,p,count)	\
    ( (This)->lpVtbl -> WriteBytes(This,p,count) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmFiler_INTERFACE_DEFINED__ */


#ifndef __IAcSmAcDbDatabase_INTERFACE_DEFINED__
#define __IAcSmAcDbDatabase_INTERFACE_DEFINED__

/* interface IAcSmAcDbDatabase */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAcSmAcDbDatabase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0070c60f-987a-4349-9e0a-3acba0cc9c5b")
    IAcSmAcDbDatabase : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetIAcadDatabase( 
            /* [retval][out] */ /* external definition not present */ IAcadDatabase **pIAcadDatabase) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetAcDbDatabase( 
            /* [retval][out] */ void **ppAcDbDatabase) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmAcDbDatabaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmAcDbDatabase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmAcDbDatabase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmAcDbDatabase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmAcDbDatabase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmAcDbDatabase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmAcDbDatabase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmAcDbDatabase * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIAcadDatabase )( 
            IAcSmAcDbDatabase * This,
            /* [retval][out] */ /* external definition not present */ IAcadDatabase **pIAcadDatabase);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcDbDatabase )( 
            IAcSmAcDbDatabase * This,
            /* [retval][out] */ void **ppAcDbDatabase);
        
        END_INTERFACE
    } IAcSmAcDbDatabaseVtbl;

    interface IAcSmAcDbDatabase
    {
        CONST_VTBL struct IAcSmAcDbDatabaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmAcDbDatabase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmAcDbDatabase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmAcDbDatabase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmAcDbDatabase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmAcDbDatabase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmAcDbDatabase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmAcDbDatabase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmAcDbDatabase_GetIAcadDatabase(This,pIAcadDatabase)	\
    ( (This)->lpVtbl -> GetIAcadDatabase(This,pIAcadDatabase) ) 

#define IAcSmAcDbDatabase_GetAcDbDatabase(This,ppAcDbDatabase)	\
    ( (This)->lpVtbl -> GetAcDbDatabase(This,ppAcDbDatabase) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmAcDbDatabase_INTERFACE_DEFINED__ */


#ifndef __IAcSmDatabase_INTERFACE_DEFINED__
#define __IAcSmDatabase_INTERFACE_DEFINED__

/* interface IAcSmDatabase */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmDatabase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5585723a-4859-4dd9-9913-996484d6060d")
    IAcSmDatabase : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE LoadFromFile( 
            /* [defaultvalue][in] */ BSTR templateDstFileName = (BSTR)L"0") = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetFileName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetTemplateDstFileName( 
            /* [retval][out] */ BSTR *filename) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetSheetSet( 
            /* [retval][out] */ IAcSmSheetSet **pVal) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE LockDb( 
            /* [in] */ IUnknown *pObject) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UnlockDb( 
            /* [in] */ IUnknown *pobject,
            /* [defaultvalue][in] */ VARIANT_BOOL bCommit = -1) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetLockStatus( 
            /* [retval][out] */ AcSmLockStatus *pLockStatus) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetLockOwnerInfo( 
            /* [out] */ BSTR *pstrUserName,
            /* [out] */ BSTR *pstrMachineName) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetNewObjectId( 
            /* [in] */ BSTR hand,
            /* [out] */ long *idcookie,
            /* [retval][out] */ IAcSmObjectId **ppId) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE RegisterOwner( 
            /* [in] */ long idcookie,
            /* [in] */ IAcSmPersist *pobject,
            /* [in] */ IAcSmPersist *pOwner) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IAcSmEnumPersist **ppEnum) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Register( 
            /* [in] */ IAcSmEvents *eventHandler,
            /* [retval][out] */ long *cookie) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Unregister( 
            /* [in] */ long cookie) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE NotifyRegisteredEventHandlers( 
            /* [in] */ AcSmEvent eventcode,
            /* [in] */ IAcSmPersist *comp) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FindObject( 
            /* [in] */ BSTR hand,
            /* [retval][out] */ IAcSmPersist **ppObject) = 0;
        
        virtual /* [helpcontext][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE FindAcDbObjectReferences( 
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbobject,
            /* [retval][out] */ SAFEARRAY * *ppObjects) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UpdateInMemoryDwgHints( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetIsTemporary( 
            /* [retval][out] */ VARIANT_BOOL *isTemporary) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetIsTemporary( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDbVersion( 
            /* [retval][out] */ BSTR *bs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmDatabaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmDatabase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmDatabase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmDatabase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmDatabase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmDatabase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmDatabase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmDatabase * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmDatabase * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmDatabase * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmDatabase * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmDatabase * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmDatabase * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmDatabase * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmDatabase * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmDatabase * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmDatabase * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmDatabase * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmDatabase * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmDatabase * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmDatabase * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmDatabase * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmDatabase * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmDatabase * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmDatabase * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmDatabase * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadFromFile )( 
            IAcSmDatabase * This,
            /* [defaultvalue][in] */ BSTR templateDstFileName);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IAcSmDatabase * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IAcSmDatabase * This,
            /* [in] */ BSTR newVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTemplateDstFileName )( 
            IAcSmDatabase * This,
            /* [retval][out] */ BSTR *filename);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSheetSet )( 
            IAcSmDatabase * This,
            /* [retval][out] */ IAcSmSheetSet **pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *LockDb )( 
            IAcSmDatabase * This,
            /* [in] */ IUnknown *pObject);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *UnlockDb )( 
            IAcSmDatabase * This,
            /* [in] */ IUnknown *pobject,
            /* [defaultvalue][in] */ VARIANT_BOOL bCommit);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLockStatus )( 
            IAcSmDatabase * This,
            /* [retval][out] */ AcSmLockStatus *pLockStatus);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLockOwnerInfo )( 
            IAcSmDatabase * This,
            /* [out] */ BSTR *pstrUserName,
            /* [out] */ BSTR *pstrMachineName);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNewObjectId )( 
            IAcSmDatabase * This,
            /* [in] */ BSTR hand,
            /* [out] */ long *idcookie,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *RegisterOwner )( 
            IAcSmDatabase * This,
            /* [in] */ long idcookie,
            /* [in] */ IAcSmPersist *pobject,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IAcSmDatabase * This,
            /* [retval][out] */ IAcSmEnumPersist **ppEnum);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Register )( 
            IAcSmDatabase * This,
            /* [in] */ IAcSmEvents *eventHandler,
            /* [retval][out] */ long *cookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Unregister )( 
            IAcSmDatabase * This,
            /* [in] */ long cookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *NotifyRegisteredEventHandlers )( 
            IAcSmDatabase * This,
            /* [in] */ AcSmEvent eventcode,
            /* [in] */ IAcSmPersist *comp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindObject )( 
            IAcSmDatabase * This,
            /* [in] */ BSTR hand,
            /* [retval][out] */ IAcSmPersist **ppObject);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *FindAcDbObjectReferences )( 
            IAcSmDatabase * This,
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbobject,
            /* [retval][out] */ SAFEARRAY * *ppObjects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateInMemoryDwgHints )( 
            IAcSmDatabase * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsTemporary )( 
            IAcSmDatabase * This,
            /* [retval][out] */ VARIANT_BOOL *isTemporary);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetIsTemporary )( 
            IAcSmDatabase * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDbVersion )( 
            IAcSmDatabase * This,
            /* [retval][out] */ BSTR *bs);
        
        END_INTERFACE
    } IAcSmDatabaseVtbl;

    interface IAcSmDatabase
    {
        CONST_VTBL struct IAcSmDatabaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmDatabase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmDatabase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmDatabase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmDatabase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmDatabase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmDatabase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmDatabase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmDatabase_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmDatabase_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmDatabase_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmDatabase_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmDatabase_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmDatabase_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmDatabase_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmDatabase_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmDatabase_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmDatabase_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmDatabase_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmDatabase_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmDatabase_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmDatabase_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmDatabase_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmDatabase_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmDatabase_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmDatabase_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmDatabase_LoadFromFile(This,templateDstFileName)	\
    ( (This)->lpVtbl -> LoadFromFile(This,templateDstFileName) ) 

#define IAcSmDatabase_GetFileName(This,pVal)	\
    ( (This)->lpVtbl -> GetFileName(This,pVal) ) 

#define IAcSmDatabase_SetFileName(This,newVal)	\
    ( (This)->lpVtbl -> SetFileName(This,newVal) ) 

#define IAcSmDatabase_GetTemplateDstFileName(This,filename)	\
    ( (This)->lpVtbl -> GetTemplateDstFileName(This,filename) ) 

#define IAcSmDatabase_GetSheetSet(This,pVal)	\
    ( (This)->lpVtbl -> GetSheetSet(This,pVal) ) 

#define IAcSmDatabase_LockDb(This,pObject)	\
    ( (This)->lpVtbl -> LockDb(This,pObject) ) 

#define IAcSmDatabase_UnlockDb(This,pobject,bCommit)	\
    ( (This)->lpVtbl -> UnlockDb(This,pobject,bCommit) ) 

#define IAcSmDatabase_GetLockStatus(This,pLockStatus)	\
    ( (This)->lpVtbl -> GetLockStatus(This,pLockStatus) ) 

#define IAcSmDatabase_GetLockOwnerInfo(This,pstrUserName,pstrMachineName)	\
    ( (This)->lpVtbl -> GetLockOwnerInfo(This,pstrUserName,pstrMachineName) ) 

#define IAcSmDatabase_GetNewObjectId(This,hand,idcookie,ppId)	\
    ( (This)->lpVtbl -> GetNewObjectId(This,hand,idcookie,ppId) ) 

#define IAcSmDatabase_RegisterOwner(This,idcookie,pobject,pOwner)	\
    ( (This)->lpVtbl -> RegisterOwner(This,idcookie,pobject,pOwner) ) 

#define IAcSmDatabase_GetEnumerator(This,ppEnum)	\
    ( (This)->lpVtbl -> GetEnumerator(This,ppEnum) ) 

#define IAcSmDatabase_Register(This,eventHandler,cookie)	\
    ( (This)->lpVtbl -> Register(This,eventHandler,cookie) ) 

#define IAcSmDatabase_Unregister(This,cookie)	\
    ( (This)->lpVtbl -> Unregister(This,cookie) ) 

#define IAcSmDatabase_NotifyRegisteredEventHandlers(This,eventcode,comp)	\
    ( (This)->lpVtbl -> NotifyRegisteredEventHandlers(This,eventcode,comp) ) 

#define IAcSmDatabase_FindObject(This,hand,ppObject)	\
    ( (This)->lpVtbl -> FindObject(This,hand,ppObject) ) 

#define IAcSmDatabase_FindAcDbObjectReferences(This,pAcDbobject,ppObjects)	\
    ( (This)->lpVtbl -> FindAcDbObjectReferences(This,pAcDbobject,ppObjects) ) 

#define IAcSmDatabase_UpdateInMemoryDwgHints(This)	\
    ( (This)->lpVtbl -> UpdateInMemoryDwgHints(This) ) 

#define IAcSmDatabase_GetIsTemporary(This,isTemporary)	\
    ( (This)->lpVtbl -> GetIsTemporary(This,isTemporary) ) 

#define IAcSmDatabase_SetIsTemporary(This)	\
    ( (This)->lpVtbl -> SetIsTemporary(This) ) 

#define IAcSmDatabase_GetDbVersion(This,bs)	\
    ( (This)->lpVtbl -> GetDbVersion(This,bs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmDatabase_INTERFACE_DEFINED__ */


#ifndef __IAcSmDatabase_Internal_INTERFACE_DEFINED__
#define __IAcSmDatabase_Internal_INTERFACE_DEFINED__

/* interface IAcSmDatabase_Internal */
/* [hidden][uuid][object] */ 


EXTERN_C const IID IID_IAcSmDatabase_Internal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ce030fd3-3646-4924-a445-a14982a96408")
    IAcSmDatabase_Internal : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SaveToFileForced( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileRevision( 
            /* [out] */ long *pfilerev) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDbFingerPrint( 
            /* [out] */ BSTR *fingerprintguid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmDatabase_InternalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmDatabase_Internal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmDatabase_Internal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmDatabase_Internal * This);
        
        HRESULT ( STDMETHODCALLTYPE *SaveToFileForced )( 
            IAcSmDatabase_Internal * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileRevision )( 
            IAcSmDatabase_Internal * This,
            /* [out] */ long *pfilerev);
        
        HRESULT ( STDMETHODCALLTYPE *GetDbFingerPrint )( 
            IAcSmDatabase_Internal * This,
            /* [out] */ BSTR *fingerprintguid);
        
        END_INTERFACE
    } IAcSmDatabase_InternalVtbl;

    interface IAcSmDatabase_Internal
    {
        CONST_VTBL struct IAcSmDatabase_InternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmDatabase_Internal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmDatabase_Internal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmDatabase_Internal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmDatabase_Internal_SaveToFileForced(This)	\
    ( (This)->lpVtbl -> SaveToFileForced(This) ) 

#define IAcSmDatabase_Internal_GetFileRevision(This,pfilerev)	\
    ( (This)->lpVtbl -> GetFileRevision(This,pfilerev) ) 

#define IAcSmDatabase_Internal_GetDbFingerPrint(This,fingerprintguid)	\
    ( (This)->lpVtbl -> GetDbFingerPrint(This,fingerprintguid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmDatabase_Internal_INTERFACE_DEFINED__ */


#ifndef __IAcSmCustomPropertyValue_INTERFACE_DEFINED__
#define __IAcSmCustomPropertyValue_INTERFACE_DEFINED__

/* interface IAcSmCustomPropertyValue */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAcSmCustomPropertyValue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("da800d3b-975c-4381-9531-358328792650")
    IAcSmCustomPropertyValue : public IAcSmPersist
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetValue( 
            /* [retval][out] */ VARIANT *value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ VARIANT value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [retval][out] */ PropertyFlags *value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetFlags( 
            /* [in] */ PropertyFlags value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmCustomPropertyValueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmCustomPropertyValue * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmCustomPropertyValue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmCustomPropertyValue * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmCustomPropertyValue * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmCustomPropertyValue * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmCustomPropertyValue * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmCustomPropertyValue * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmCustomPropertyValue * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmCustomPropertyValue * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmCustomPropertyValue * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmCustomPropertyValue * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmCustomPropertyValue * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmCustomPropertyValue * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmCustomPropertyValue * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmCustomPropertyValue * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmCustomPropertyValue * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmCustomPropertyValue * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmCustomPropertyValue * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmCustomPropertyValue * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmCustomPropertyValue * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IAcSmCustomPropertyValue * This,
            /* [retval][out] */ VARIANT *value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IAcSmCustomPropertyValue * This,
            /* [in] */ VARIANT value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IAcSmCustomPropertyValue * This,
            /* [retval][out] */ PropertyFlags *value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IAcSmCustomPropertyValue * This,
            /* [in] */ PropertyFlags value);
        
        END_INTERFACE
    } IAcSmCustomPropertyValueVtbl;

    interface IAcSmCustomPropertyValue
    {
        CONST_VTBL struct IAcSmCustomPropertyValueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmCustomPropertyValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmCustomPropertyValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmCustomPropertyValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmCustomPropertyValue_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmCustomPropertyValue_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmCustomPropertyValue_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmCustomPropertyValue_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmCustomPropertyValue_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmCustomPropertyValue_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmCustomPropertyValue_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmCustomPropertyValue_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmCustomPropertyValue_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmCustomPropertyValue_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmCustomPropertyValue_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmCustomPropertyValue_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmCustomPropertyValue_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmCustomPropertyValue_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmCustomPropertyValue_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmCustomPropertyValue_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmCustomPropertyValue_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmCustomPropertyValue_GetValue(This,value)	\
    ( (This)->lpVtbl -> GetValue(This,value) ) 

#define IAcSmCustomPropertyValue_SetValue(This,value)	\
    ( (This)->lpVtbl -> SetValue(This,value) ) 

#define IAcSmCustomPropertyValue_GetFlags(This,value)	\
    ( (This)->lpVtbl -> GetFlags(This,value) ) 

#define IAcSmCustomPropertyValue_SetFlags(This,value)	\
    ( (This)->lpVtbl -> SetFlags(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmCustomPropertyValue_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumProperty_INTERFACE_DEFINED__
#define __IAcSmEnumProperty_INTERFACE_DEFINED__

/* interface IAcSmEnumProperty */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAcSmEnumProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("476cbb88-8878-419d-a8c5-a9ced89d5a37")
    IAcSmEnumProperty : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [out] */ BSTR *propname,
            /* [out] */ IAcSmCustomPropertyValue **ppValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumProperty * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumProperty * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumProperty * This,
            /* [out] */ BSTR *propname,
            /* [out] */ IAcSmCustomPropertyValue **ppValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumProperty * This);
        
        END_INTERFACE
    } IAcSmEnumPropertyVtbl;

    interface IAcSmEnumProperty
    {
        CONST_VTBL struct IAcSmEnumPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumProperty_Next(This,propname,ppValue)	\
    ( (This)->lpVtbl -> Next(This,propname,ppValue) ) 

#define IAcSmEnumProperty_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumProperty_INTERFACE_DEFINED__ */


#ifndef __IAcSmCustomPropertyBag_INTERFACE_DEFINED__
#define __IAcSmCustomPropertyBag_INTERFACE_DEFINED__

/* interface IAcSmCustomPropertyBag */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAcSmCustomPropertyBag;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fa893fe9-247c-44ec-b437-541c0f09f5fc")
    IAcSmCustomPropertyBag : public IAcSmPersist
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR name,
            /* [retval][out] */ IAcSmCustomPropertyValue **value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR name,
            /* [in] */ IAcSmCustomPropertyValue *value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPropertyEnumerator( 
            /* [retval][out] */ IAcSmEnumProperty **enumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmCustomPropertyBagVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmCustomPropertyBag * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmCustomPropertyBag * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmCustomPropertyBag * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmCustomPropertyBag * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmCustomPropertyBag * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmCustomPropertyBag * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmCustomPropertyBag * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmCustomPropertyBag * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmCustomPropertyBag * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmCustomPropertyBag * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmCustomPropertyBag * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmCustomPropertyBag * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmCustomPropertyBag * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmCustomPropertyBag * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmCustomPropertyBag * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmCustomPropertyBag * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmCustomPropertyBag * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmCustomPropertyBag * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmCustomPropertyBag * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmCustomPropertyBag * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAcSmCustomPropertyBag * This,
            /* [in] */ BSTR name,
            /* [retval][out] */ IAcSmCustomPropertyValue **value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAcSmCustomPropertyBag * This,
            /* [in] */ BSTR name,
            /* [in] */ IAcSmCustomPropertyValue *value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyEnumerator )( 
            IAcSmCustomPropertyBag * This,
            /* [retval][out] */ IAcSmEnumProperty **enumerator);
        
        END_INTERFACE
    } IAcSmCustomPropertyBagVtbl;

    interface IAcSmCustomPropertyBag
    {
        CONST_VTBL struct IAcSmCustomPropertyBagVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmCustomPropertyBag_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmCustomPropertyBag_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmCustomPropertyBag_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmCustomPropertyBag_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmCustomPropertyBag_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmCustomPropertyBag_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmCustomPropertyBag_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmCustomPropertyBag_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmCustomPropertyBag_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmCustomPropertyBag_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmCustomPropertyBag_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmCustomPropertyBag_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmCustomPropertyBag_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmCustomPropertyBag_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmCustomPropertyBag_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmCustomPropertyBag_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmCustomPropertyBag_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmCustomPropertyBag_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmCustomPropertyBag_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmCustomPropertyBag_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmCustomPropertyBag_GetProperty(This,name,value)	\
    ( (This)->lpVtbl -> GetProperty(This,name,value) ) 

#define IAcSmCustomPropertyBag_SetProperty(This,name,value)	\
    ( (This)->lpVtbl -> SetProperty(This,name,value) ) 

#define IAcSmCustomPropertyBag_GetPropertyEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetPropertyEnumerator(This,enumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmCustomPropertyBag_INTERFACE_DEFINED__ */


#ifndef __IAcSmFileReference_INTERFACE_DEFINED__
#define __IAcSmFileReference_INTERFACE_DEFINED__

/* interface IAcSmFileReference */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAcSmFileReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b86d90c3-7d13-4180-8f97-61c09fa15902")
    IAcSmFileReference : public IAcSmPersist
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetFileName( 
            /* [in] */ BSTR pValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [retval][out] */ BSTR *ppValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ResolveFileName( 
            /* [retval][out] */ BSTR *pResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmFileReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmFileReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmFileReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmFileReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmFileReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmFileReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmFileReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmFileReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmFileReference * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmFileReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmFileReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmFileReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmFileReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmFileReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmFileReference * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmFileReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmFileReference * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmFileReference * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmFileReference * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmFileReference * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmFileReference * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IAcSmFileReference * This,
            /* [in] */ BSTR pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IAcSmFileReference * This,
            /* [retval][out] */ BSTR *ppValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveFileName )( 
            IAcSmFileReference * This,
            /* [retval][out] */ BSTR *pResult);
        
        END_INTERFACE
    } IAcSmFileReferenceVtbl;

    interface IAcSmFileReference
    {
        CONST_VTBL struct IAcSmFileReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmFileReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmFileReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmFileReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmFileReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmFileReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmFileReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmFileReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmFileReference_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmFileReference_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmFileReference_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmFileReference_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmFileReference_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmFileReference_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmFileReference_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmFileReference_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmFileReference_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmFileReference_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmFileReference_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmFileReference_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmFileReference_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmFileReference_SetFileName(This,pValue)	\
    ( (This)->lpVtbl -> SetFileName(This,pValue) ) 

#define IAcSmFileReference_GetFileName(This,ppValue)	\
    ( (This)->lpVtbl -> GetFileName(This,ppValue) ) 

#define IAcSmFileReference_ResolveFileName(This,pResult)	\
    ( (This)->lpVtbl -> ResolveFileName(This,pResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmFileReference_INTERFACE_DEFINED__ */


#ifndef __IAcSmAcDbObjectReference_INTERFACE_DEFINED__
#define __IAcSmAcDbObjectReference_INTERFACE_DEFINED__

/* interface IAcSmAcDbObjectReference */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmAcDbObjectReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25b22534-b1f7-402c-82d6-d36fac620d69")
    IAcSmAcDbObjectReference : public IAcSmFileReference
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetAcDbHandle( 
            /* [in] */ BSTR handle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetAcDbHandle( 
            /* [retval][out] */ BSTR *phandle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetAcSmAcDbDatabase( 
            /* [retval][out] */ IAcSmAcDbDatabase **ppAcSmAcDbDatabase) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetAcDbObject( 
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbObject) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ResolveAcDbObject( 
            /* [in] */ /* external definition not present */ IAcadDatabase *pAcDbDatabase,
            /* [retval][out] */ BSTR *phandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmAcDbObjectReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmAcDbObjectReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmAcDbObjectReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmAcDbObjectReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmAcDbObjectReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmAcDbObjectReference * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmAcDbObjectReference * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ BSTR pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ BSTR *ppValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveFileName )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbHandle )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ BSTR handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcDbHandle )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcSmAcDbDatabase )( 
            IAcSmAcDbObjectReference * This,
            /* [retval][out] */ IAcSmAcDbDatabase **ppAcSmAcDbDatabase);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbObject )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbObject);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveAcDbObject )( 
            IAcSmAcDbObjectReference * This,
            /* [in] */ /* external definition not present */ IAcadDatabase *pAcDbDatabase,
            /* [retval][out] */ BSTR *phandle);
        
        END_INTERFACE
    } IAcSmAcDbObjectReferenceVtbl;

    interface IAcSmAcDbObjectReference
    {
        CONST_VTBL struct IAcSmAcDbObjectReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmAcDbObjectReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmAcDbObjectReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmAcDbObjectReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmAcDbObjectReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmAcDbObjectReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmAcDbObjectReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmAcDbObjectReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmAcDbObjectReference_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmAcDbObjectReference_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmAcDbObjectReference_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmAcDbObjectReference_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmAcDbObjectReference_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmAcDbObjectReference_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmAcDbObjectReference_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmAcDbObjectReference_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmAcDbObjectReference_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmAcDbObjectReference_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmAcDbObjectReference_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmAcDbObjectReference_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmAcDbObjectReference_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmAcDbObjectReference_SetFileName(This,pValue)	\
    ( (This)->lpVtbl -> SetFileName(This,pValue) ) 

#define IAcSmAcDbObjectReference_GetFileName(This,ppValue)	\
    ( (This)->lpVtbl -> GetFileName(This,ppValue) ) 

#define IAcSmAcDbObjectReference_ResolveFileName(This,pResult)	\
    ( (This)->lpVtbl -> ResolveFileName(This,pResult) ) 


#define IAcSmAcDbObjectReference_SetAcDbHandle(This,handle)	\
    ( (This)->lpVtbl -> SetAcDbHandle(This,handle) ) 

#define IAcSmAcDbObjectReference_GetAcDbHandle(This,phandle)	\
    ( (This)->lpVtbl -> GetAcDbHandle(This,phandle) ) 

#define IAcSmAcDbObjectReference_GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase)	\
    ( (This)->lpVtbl -> GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase) ) 

#define IAcSmAcDbObjectReference_SetAcDbObject(This,pAcDbObject)	\
    ( (This)->lpVtbl -> SetAcDbObject(This,pAcDbObject) ) 

#define IAcSmAcDbObjectReference_ResolveAcDbObject(This,pAcDbDatabase,phandle)	\
    ( (This)->lpVtbl -> ResolveAcDbObject(This,pAcDbDatabase,phandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmAcDbObjectReference_INTERFACE_DEFINED__ */


#ifndef __IAcSmNamedAcDbObjectReference_INTERFACE_DEFINED__
#define __IAcSmNamedAcDbObjectReference_INTERFACE_DEFINED__

/* interface IAcSmNamedAcDbObjectReference */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmNamedAcDbObjectReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c5e0c361-9e43-4574-a0ab-defa483511e4")
    IAcSmNamedAcDbObjectReference : public IAcSmAcDbObjectReference
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR name) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *phandle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetOwnerAcDbHandle( 
            /* [in] */ BSTR handle) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetOwnerAcDbHandle( 
            /* [retval][out] */ BSTR *phandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmNamedAcDbObjectReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmNamedAcDbObjectReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmNamedAcDbObjectReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmNamedAcDbObjectReference * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ BSTR pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ BSTR *ppValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveFileName )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbHandle )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ BSTR handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcDbHandle )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcSmAcDbDatabase )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ IAcSmAcDbDatabase **ppAcSmAcDbDatabase);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbObject )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbObject);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveAcDbObject )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ /* external definition not present */ IAcadDatabase *pAcDbDatabase,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwnerAcDbHandle )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [in] */ BSTR handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwnerAcDbHandle )( 
            IAcSmNamedAcDbObjectReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        END_INTERFACE
    } IAcSmNamedAcDbObjectReferenceVtbl;

    interface IAcSmNamedAcDbObjectReference
    {
        CONST_VTBL struct IAcSmNamedAcDbObjectReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmNamedAcDbObjectReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmNamedAcDbObjectReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmNamedAcDbObjectReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmNamedAcDbObjectReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmNamedAcDbObjectReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmNamedAcDbObjectReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmNamedAcDbObjectReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmNamedAcDbObjectReference_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmNamedAcDbObjectReference_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmNamedAcDbObjectReference_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmNamedAcDbObjectReference_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmNamedAcDbObjectReference_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmNamedAcDbObjectReference_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmNamedAcDbObjectReference_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmNamedAcDbObjectReference_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmNamedAcDbObjectReference_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmNamedAcDbObjectReference_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmNamedAcDbObjectReference_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmNamedAcDbObjectReference_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmNamedAcDbObjectReference_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmNamedAcDbObjectReference_SetFileName(This,pValue)	\
    ( (This)->lpVtbl -> SetFileName(This,pValue) ) 

#define IAcSmNamedAcDbObjectReference_GetFileName(This,ppValue)	\
    ( (This)->lpVtbl -> GetFileName(This,ppValue) ) 

#define IAcSmNamedAcDbObjectReference_ResolveFileName(This,pResult)	\
    ( (This)->lpVtbl -> ResolveFileName(This,pResult) ) 


#define IAcSmNamedAcDbObjectReference_SetAcDbHandle(This,handle)	\
    ( (This)->lpVtbl -> SetAcDbHandle(This,handle) ) 

#define IAcSmNamedAcDbObjectReference_GetAcDbHandle(This,phandle)	\
    ( (This)->lpVtbl -> GetAcDbHandle(This,phandle) ) 

#define IAcSmNamedAcDbObjectReference_GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase)	\
    ( (This)->lpVtbl -> GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase) ) 

#define IAcSmNamedAcDbObjectReference_SetAcDbObject(This,pAcDbObject)	\
    ( (This)->lpVtbl -> SetAcDbObject(This,pAcDbObject) ) 

#define IAcSmNamedAcDbObjectReference_ResolveAcDbObject(This,pAcDbDatabase,phandle)	\
    ( (This)->lpVtbl -> ResolveAcDbObject(This,pAcDbDatabase,phandle) ) 


#define IAcSmNamedAcDbObjectReference_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmNamedAcDbObjectReference_GetName(This,phandle)	\
    ( (This)->lpVtbl -> GetName(This,phandle) ) 

#define IAcSmNamedAcDbObjectReference_SetOwnerAcDbHandle(This,handle)	\
    ( (This)->lpVtbl -> SetOwnerAcDbHandle(This,handle) ) 

#define IAcSmNamedAcDbObjectReference_GetOwnerAcDbHandle(This,phandle)	\
    ( (This)->lpVtbl -> GetOwnerAcDbHandle(This,phandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmNamedAcDbObjectReference_INTERFACE_DEFINED__ */


#ifndef __IAcSmAcDbLayoutReference_INTERFACE_DEFINED__
#define __IAcSmAcDbLayoutReference_INTERFACE_DEFINED__

/* interface IAcSmAcDbLayoutReference */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmAcDbLayoutReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c91d5f15-0faa-4787-8f12-89e2f514924e")
    IAcSmAcDbLayoutReference : public IAcSmNamedAcDbObjectReference
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmAcDbLayoutReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmAcDbLayoutReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmAcDbLayoutReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmAcDbLayoutReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmAcDbLayoutReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmAcDbLayoutReference * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmAcDbLayoutReference * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ BSTR pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ BSTR *ppValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveFileName )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbHandle )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ BSTR handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcDbHandle )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcSmAcDbDatabase )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ IAcSmAcDbDatabase **ppAcSmAcDbDatabase);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbObject )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbObject);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveAcDbObject )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ /* external definition not present */ IAcadDatabase *pAcDbDatabase,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwnerAcDbHandle )( 
            IAcSmAcDbLayoutReference * This,
            /* [in] */ BSTR handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwnerAcDbHandle )( 
            IAcSmAcDbLayoutReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        END_INTERFACE
    } IAcSmAcDbLayoutReferenceVtbl;

    interface IAcSmAcDbLayoutReference
    {
        CONST_VTBL struct IAcSmAcDbLayoutReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmAcDbLayoutReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmAcDbLayoutReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmAcDbLayoutReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmAcDbLayoutReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmAcDbLayoutReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmAcDbLayoutReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmAcDbLayoutReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmAcDbLayoutReference_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmAcDbLayoutReference_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmAcDbLayoutReference_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmAcDbLayoutReference_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmAcDbLayoutReference_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmAcDbLayoutReference_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmAcDbLayoutReference_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmAcDbLayoutReference_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmAcDbLayoutReference_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmAcDbLayoutReference_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmAcDbLayoutReference_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmAcDbLayoutReference_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmAcDbLayoutReference_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmAcDbLayoutReference_SetFileName(This,pValue)	\
    ( (This)->lpVtbl -> SetFileName(This,pValue) ) 

#define IAcSmAcDbLayoutReference_GetFileName(This,ppValue)	\
    ( (This)->lpVtbl -> GetFileName(This,ppValue) ) 

#define IAcSmAcDbLayoutReference_ResolveFileName(This,pResult)	\
    ( (This)->lpVtbl -> ResolveFileName(This,pResult) ) 


#define IAcSmAcDbLayoutReference_SetAcDbHandle(This,handle)	\
    ( (This)->lpVtbl -> SetAcDbHandle(This,handle) ) 

#define IAcSmAcDbLayoutReference_GetAcDbHandle(This,phandle)	\
    ( (This)->lpVtbl -> GetAcDbHandle(This,phandle) ) 

#define IAcSmAcDbLayoutReference_GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase)	\
    ( (This)->lpVtbl -> GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase) ) 

#define IAcSmAcDbLayoutReference_SetAcDbObject(This,pAcDbObject)	\
    ( (This)->lpVtbl -> SetAcDbObject(This,pAcDbObject) ) 

#define IAcSmAcDbLayoutReference_ResolveAcDbObject(This,pAcDbDatabase,phandle)	\
    ( (This)->lpVtbl -> ResolveAcDbObject(This,pAcDbDatabase,phandle) ) 


#define IAcSmAcDbLayoutReference_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmAcDbLayoutReference_GetName(This,phandle)	\
    ( (This)->lpVtbl -> GetName(This,phandle) ) 

#define IAcSmAcDbLayoutReference_SetOwnerAcDbHandle(This,handle)	\
    ( (This)->lpVtbl -> SetOwnerAcDbHandle(This,handle) ) 

#define IAcSmAcDbLayoutReference_GetOwnerAcDbHandle(This,phandle)	\
    ( (This)->lpVtbl -> GetOwnerAcDbHandle(This,phandle) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmAcDbLayoutReference_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumComponent_INTERFACE_DEFINED__
#define __IAcSmEnumComponent_INTERFACE_DEFINED__

/* interface IAcSmEnumComponent */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmEnumComponent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("330cd4d2-73fe-43dc-85cc-48263863cfba")
    IAcSmEnumComponent : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [retval][out] */ IAcSmComponent **comp) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumComponentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumComponent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumComponent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumComponent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumComponent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumComponent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumComponent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumComponent * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumComponent * This,
            /* [retval][out] */ IAcSmComponent **comp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumComponent * This);
        
        END_INTERFACE
    } IAcSmEnumComponentVtbl;

    interface IAcSmEnumComponent
    {
        CONST_VTBL struct IAcSmEnumComponentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumComponent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumComponent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumComponent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumComponent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumComponent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumComponent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumComponent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumComponent_Next(This,comp)	\
    ( (This)->lpVtbl -> Next(This,comp) ) 

#define IAcSmEnumComponent_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumComponent_INTERFACE_DEFINED__ */


#ifndef __IAcSmAcDbViewReference_INTERFACE_DEFINED__
#define __IAcSmAcDbViewReference_INTERFACE_DEFINED__

/* interface IAcSmAcDbViewReference */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmAcDbViewReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("978f1c91-bb5f-46e8-bd7a-ac20d0052606")
    IAcSmAcDbViewReference : public IAcSmNamedAcDbObjectReference
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmAcDbViewReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmAcDbViewReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmAcDbViewReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmAcDbViewReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmAcDbViewReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmAcDbViewReference * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmAcDbViewReference * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ BSTR pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ BSTR *ppValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveFileName )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbHandle )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ BSTR handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcDbHandle )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcSmAcDbDatabase )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ IAcSmAcDbDatabase **ppAcSmAcDbDatabase);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbObject )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbObject);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveAcDbObject )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ /* external definition not present */ IAcadDatabase *pAcDbDatabase,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwnerAcDbHandle )( 
            IAcSmAcDbViewReference * This,
            /* [in] */ BSTR handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwnerAcDbHandle )( 
            IAcSmAcDbViewReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        END_INTERFACE
    } IAcSmAcDbViewReferenceVtbl;

    interface IAcSmAcDbViewReference
    {
        CONST_VTBL struct IAcSmAcDbViewReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmAcDbViewReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmAcDbViewReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmAcDbViewReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmAcDbViewReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmAcDbViewReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmAcDbViewReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmAcDbViewReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmAcDbViewReference_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmAcDbViewReference_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmAcDbViewReference_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmAcDbViewReference_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmAcDbViewReference_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmAcDbViewReference_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmAcDbViewReference_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmAcDbViewReference_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmAcDbViewReference_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmAcDbViewReference_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmAcDbViewReference_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmAcDbViewReference_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmAcDbViewReference_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmAcDbViewReference_SetFileName(This,pValue)	\
    ( (This)->lpVtbl -> SetFileName(This,pValue) ) 

#define IAcSmAcDbViewReference_GetFileName(This,ppValue)	\
    ( (This)->lpVtbl -> GetFileName(This,ppValue) ) 

#define IAcSmAcDbViewReference_ResolveFileName(This,pResult)	\
    ( (This)->lpVtbl -> ResolveFileName(This,pResult) ) 


#define IAcSmAcDbViewReference_SetAcDbHandle(This,handle)	\
    ( (This)->lpVtbl -> SetAcDbHandle(This,handle) ) 

#define IAcSmAcDbViewReference_GetAcDbHandle(This,phandle)	\
    ( (This)->lpVtbl -> GetAcDbHandle(This,phandle) ) 

#define IAcSmAcDbViewReference_GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase)	\
    ( (This)->lpVtbl -> GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase) ) 

#define IAcSmAcDbViewReference_SetAcDbObject(This,pAcDbObject)	\
    ( (This)->lpVtbl -> SetAcDbObject(This,pAcDbObject) ) 

#define IAcSmAcDbViewReference_ResolveAcDbObject(This,pAcDbDatabase,phandle)	\
    ( (This)->lpVtbl -> ResolveAcDbObject(This,pAcDbDatabase,phandle) ) 


#define IAcSmAcDbViewReference_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmAcDbViewReference_GetName(This,phandle)	\
    ( (This)->lpVtbl -> GetName(This,phandle) ) 

#define IAcSmAcDbViewReference_SetOwnerAcDbHandle(This,handle)	\
    ( (This)->lpVtbl -> SetOwnerAcDbHandle(This,handle) ) 

#define IAcSmAcDbViewReference_GetOwnerAcDbHandle(This,phandle)	\
    ( (This)->lpVtbl -> GetOwnerAcDbHandle(This,phandle) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmAcDbViewReference_INTERFACE_DEFINED__ */


#ifndef __IAcSmAcDbBlockRecordReference_INTERFACE_DEFINED__
#define __IAcSmAcDbBlockRecordReference_INTERFACE_DEFINED__

/* interface IAcSmAcDbBlockRecordReference */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmAcDbBlockRecordReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e44501c6-a13f-487c-96a7-63da2085f4ea")
    IAcSmAcDbBlockRecordReference : public IAcSmNamedAcDbObjectReference
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmAcDbBlockRecordReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmAcDbBlockRecordReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmAcDbBlockRecordReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmAcDbBlockRecordReference * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFileName )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ BSTR pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ BSTR *ppValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveFileName )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ BSTR *pResult);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbHandle )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ BSTR handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcDbHandle )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAcSmAcDbDatabase )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ IAcSmAcDbDatabase **ppAcSmAcDbDatabase);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetAcDbObject )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbObject);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *ResolveAcDbObject )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ /* external definition not present */ IAcadDatabase *pAcDbDatabase,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwnerAcDbHandle )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [in] */ BSTR handle);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwnerAcDbHandle )( 
            IAcSmAcDbBlockRecordReference * This,
            /* [retval][out] */ BSTR *phandle);
        
        END_INTERFACE
    } IAcSmAcDbBlockRecordReferenceVtbl;

    interface IAcSmAcDbBlockRecordReference
    {
        CONST_VTBL struct IAcSmAcDbBlockRecordReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmAcDbBlockRecordReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmAcDbBlockRecordReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmAcDbBlockRecordReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmAcDbBlockRecordReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmAcDbBlockRecordReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmAcDbBlockRecordReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmAcDbBlockRecordReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmAcDbBlockRecordReference_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmAcDbBlockRecordReference_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmAcDbBlockRecordReference_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmAcDbBlockRecordReference_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmAcDbBlockRecordReference_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmAcDbBlockRecordReference_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmAcDbBlockRecordReference_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmAcDbBlockRecordReference_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmAcDbBlockRecordReference_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmAcDbBlockRecordReference_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmAcDbBlockRecordReference_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmAcDbBlockRecordReference_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmAcDbBlockRecordReference_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmAcDbBlockRecordReference_SetFileName(This,pValue)	\
    ( (This)->lpVtbl -> SetFileName(This,pValue) ) 

#define IAcSmAcDbBlockRecordReference_GetFileName(This,ppValue)	\
    ( (This)->lpVtbl -> GetFileName(This,ppValue) ) 

#define IAcSmAcDbBlockRecordReference_ResolveFileName(This,pResult)	\
    ( (This)->lpVtbl -> ResolveFileName(This,pResult) ) 


#define IAcSmAcDbBlockRecordReference_SetAcDbHandle(This,handle)	\
    ( (This)->lpVtbl -> SetAcDbHandle(This,handle) ) 

#define IAcSmAcDbBlockRecordReference_GetAcDbHandle(This,phandle)	\
    ( (This)->lpVtbl -> GetAcDbHandle(This,phandle) ) 

#define IAcSmAcDbBlockRecordReference_GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase)	\
    ( (This)->lpVtbl -> GetAcSmAcDbDatabase(This,ppAcSmAcDbDatabase) ) 

#define IAcSmAcDbBlockRecordReference_SetAcDbObject(This,pAcDbObject)	\
    ( (This)->lpVtbl -> SetAcDbObject(This,pAcDbObject) ) 

#define IAcSmAcDbBlockRecordReference_ResolveAcDbObject(This,pAcDbDatabase,phandle)	\
    ( (This)->lpVtbl -> ResolveAcDbObject(This,pAcDbDatabase,phandle) ) 


#define IAcSmAcDbBlockRecordReference_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmAcDbBlockRecordReference_GetName(This,phandle)	\
    ( (This)->lpVtbl -> GetName(This,phandle) ) 

#define IAcSmAcDbBlockRecordReference_SetOwnerAcDbHandle(This,handle)	\
    ( (This)->lpVtbl -> SetOwnerAcDbHandle(This,handle) ) 

#define IAcSmAcDbBlockRecordReference_GetOwnerAcDbHandle(This,phandle)	\
    ( (This)->lpVtbl -> GetOwnerAcDbHandle(This,phandle) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmAcDbBlockRecordReference_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumAcDbBlockRecordReference_INTERFACE_DEFINED__
#define __IAcSmEnumAcDbBlockRecordReference_INTERFACE_DEFINED__

/* interface IAcSmEnumAcDbBlockRecordReference */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmEnumAcDbBlockRecordReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19c204ed-39d8-4060-8256-b5a2c81d6f25")
    IAcSmEnumAcDbBlockRecordReference : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [retval][out] */ IAcSmAcDbBlockRecordReference **ppRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumAcDbBlockRecordReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumAcDbBlockRecordReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumAcDbBlockRecordReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumAcDbBlockRecordReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumAcDbBlockRecordReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumAcDbBlockRecordReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumAcDbBlockRecordReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumAcDbBlockRecordReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumAcDbBlockRecordReference * This,
            /* [retval][out] */ IAcSmAcDbBlockRecordReference **ppRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumAcDbBlockRecordReference * This);
        
        END_INTERFACE
    } IAcSmEnumAcDbBlockRecordReferenceVtbl;

    interface IAcSmEnumAcDbBlockRecordReference
    {
        CONST_VTBL struct IAcSmEnumAcDbBlockRecordReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumAcDbBlockRecordReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumAcDbBlockRecordReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumAcDbBlockRecordReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumAcDbBlockRecordReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumAcDbBlockRecordReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumAcDbBlockRecordReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumAcDbBlockRecordReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumAcDbBlockRecordReference_Next(This,ppRef)	\
    ( (This)->lpVtbl -> Next(This,ppRef) ) 

#define IAcSmEnumAcDbBlockRecordReference_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumAcDbBlockRecordReference_INTERFACE_DEFINED__ */


#ifndef __IAcSmCalloutBlocks_INTERFACE_DEFINED__
#define __IAcSmCalloutBlocks_INTERFACE_DEFINED__

/* interface IAcSmCalloutBlocks */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmCalloutBlocks;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cfbf491d-19c4-4893-9c4b-bc3dfb6d5e64")
    IAcSmCalloutBlocks : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IAcSmAcDbBlockRecordReference *pBlkRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IAcSmAcDbBlockRecordReference *pBlkRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IAcSmEnumAcDbBlockRecordReference **enumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmCalloutBlocksVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmCalloutBlocks * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmCalloutBlocks * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmCalloutBlocks * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmCalloutBlocks * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmCalloutBlocks * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmCalloutBlocks * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ IAcSmAcDbBlockRecordReference *pBlkRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAcSmCalloutBlocks * This,
            /* [in] */ IAcSmAcDbBlockRecordReference *pBlkRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IAcSmCalloutBlocks * This,
            /* [retval][out] */ IAcSmEnumAcDbBlockRecordReference **enumerator);
        
        END_INTERFACE
    } IAcSmCalloutBlocksVtbl;

    interface IAcSmCalloutBlocks
    {
        CONST_VTBL struct IAcSmCalloutBlocksVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmCalloutBlocks_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmCalloutBlocks_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmCalloutBlocks_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmCalloutBlocks_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmCalloutBlocks_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmCalloutBlocks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmCalloutBlocks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmCalloutBlocks_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmCalloutBlocks_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmCalloutBlocks_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmCalloutBlocks_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmCalloutBlocks_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmCalloutBlocks_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmCalloutBlocks_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmCalloutBlocks_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmCalloutBlocks_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmCalloutBlocks_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmCalloutBlocks_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmCalloutBlocks_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmCalloutBlocks_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmCalloutBlocks_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmCalloutBlocks_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmCalloutBlocks_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmCalloutBlocks_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmCalloutBlocks_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmCalloutBlocks_Add(This,pBlkRef)	\
    ( (This)->lpVtbl -> Add(This,pBlkRef) ) 

#define IAcSmCalloutBlocks_Remove(This,pBlkRef)	\
    ( (This)->lpVtbl -> Remove(This,pBlkRef) ) 

#define IAcSmCalloutBlocks_GetEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetEnumerator(This,enumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmCalloutBlocks_INTERFACE_DEFINED__ */


#ifndef __IAcSmSheetSelSet_INTERFACE_DEFINED__
#define __IAcSmSheetSelSet_INTERFACE_DEFINED__

/* interface IAcSmSheetSelSet */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmSheetSelSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1bea479e-ec3a-49b8-94e5-cfcee92c4afe")
    IAcSmSheetSelSet : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IAcSmComponent *comp) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IAcSmComponent *comp) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IAcSmEnumComponent **enumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmSheetSelSetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmSheetSelSet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmSheetSelSet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmSheetSelSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmSheetSelSet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmSheetSelSet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmSheetSelSet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmSheetSelSet * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmSheetSelSet * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmSheetSelSet * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmSheetSelSet * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmSheetSelSet * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmSheetSelSet * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmSheetSelSet * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmSheetSelSet * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmSheetSelSet * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAcSmSheetSelSet * This,
            /* [in] */ IAcSmComponent *comp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAcSmSheetSelSet * This,
            /* [in] */ IAcSmComponent *comp);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IAcSmSheetSelSet * This,
            /* [retval][out] */ IAcSmEnumComponent **enumerator);
        
        END_INTERFACE
    } IAcSmSheetSelSetVtbl;

    interface IAcSmSheetSelSet
    {
        CONST_VTBL struct IAcSmSheetSelSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmSheetSelSet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmSheetSelSet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmSheetSelSet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmSheetSelSet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmSheetSelSet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmSheetSelSet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmSheetSelSet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmSheetSelSet_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmSheetSelSet_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmSheetSelSet_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmSheetSelSet_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmSheetSelSet_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmSheetSelSet_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmSheetSelSet_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmSheetSelSet_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmSheetSelSet_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmSheetSelSet_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmSheetSelSet_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmSheetSelSet_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmSheetSelSet_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmSheetSelSet_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmSheetSelSet_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmSheetSelSet_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmSheetSelSet_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmSheetSelSet_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmSheetSelSet_Add(This,comp)	\
    ( (This)->lpVtbl -> Add(This,comp) ) 

#define IAcSmSheetSelSet_Remove(This,comp)	\
    ( (This)->lpVtbl -> Remove(This,comp) ) 

#define IAcSmSheetSelSet_GetEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetEnumerator(This,enumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmSheetSelSet_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumSheetSelSet_INTERFACE_DEFINED__
#define __IAcSmEnumSheetSelSet_INTERFACE_DEFINED__

/* interface IAcSmEnumSheetSelSet */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmEnumSheetSelSet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e8c8d548-3b80-4810-b866-617a7b916fe8")
    IAcSmEnumSheetSelSet : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [retval][out] */ IAcSmSheetSelSet **selset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumSheetSelSetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumSheetSelSet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumSheetSelSet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumSheetSelSet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumSheetSelSet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumSheetSelSet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumSheetSelSet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumSheetSelSet * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumSheetSelSet * This,
            /* [retval][out] */ IAcSmSheetSelSet **selset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumSheetSelSet * This);
        
        END_INTERFACE
    } IAcSmEnumSheetSelSetVtbl;

    interface IAcSmEnumSheetSelSet
    {
        CONST_VTBL struct IAcSmEnumSheetSelSetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumSheetSelSet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumSheetSelSet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumSheetSelSet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumSheetSelSet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumSheetSelSet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumSheetSelSet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumSheetSelSet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumSheetSelSet_Next(This,selset)	\
    ( (This)->lpVtbl -> Next(This,selset) ) 

#define IAcSmEnumSheetSelSet_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumSheetSelSet_INTERFACE_DEFINED__ */


#ifndef __IAcSmSheetSelSets_INTERFACE_DEFINED__
#define __IAcSmSheetSelSets_INTERFACE_DEFINED__

/* interface IAcSmSheetSelSets */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmSheetSelSets;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20786806-b251-4277-b119-94209c2ea7f9")
    IAcSmSheetSelSets : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [retval][out] */ IAcSmSheetSelSet **selset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IAcSmSheetSelSet *selset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IAcSmEnumSheetSelSet **enumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmSheetSelSetsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmSheetSelSets * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmSheetSelSets * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmSheetSelSets * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmSheetSelSets * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmSheetSelSets * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmSheetSelSets * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmSheetSelSets * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmSheetSelSets * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmSheetSelSets * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmSheetSelSets * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmSheetSelSets * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmSheetSelSets * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmSheetSelSets * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmSheetSelSets * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmSheetSelSets * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAcSmSheetSelSets * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR desc,
            /* [retval][out] */ IAcSmSheetSelSet **selset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAcSmSheetSelSets * This,
            /* [in] */ IAcSmSheetSelSet *selset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IAcSmSheetSelSets * This,
            /* [retval][out] */ IAcSmEnumSheetSelSet **enumerator);
        
        END_INTERFACE
    } IAcSmSheetSelSetsVtbl;

    interface IAcSmSheetSelSets
    {
        CONST_VTBL struct IAcSmSheetSelSetsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmSheetSelSets_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmSheetSelSets_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmSheetSelSets_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmSheetSelSets_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmSheetSelSets_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmSheetSelSets_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmSheetSelSets_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmSheetSelSets_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmSheetSelSets_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmSheetSelSets_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmSheetSelSets_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmSheetSelSets_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmSheetSelSets_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmSheetSelSets_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmSheetSelSets_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmSheetSelSets_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmSheetSelSets_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmSheetSelSets_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmSheetSelSets_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmSheetSelSets_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmSheetSelSets_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmSheetSelSets_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmSheetSelSets_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmSheetSelSets_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmSheetSelSets_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmSheetSelSets_Add(This,name,desc,selset)	\
    ( (This)->lpVtbl -> Add(This,name,desc,selset) ) 

#define IAcSmSheetSelSets_Remove(This,selset)	\
    ( (This)->lpVtbl -> Remove(This,selset) ) 

#define IAcSmSheetSelSets_GetEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetEnumerator(This,enumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmSheetSelSets_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumFileReference_INTERFACE_DEFINED__
#define __IAcSmEnumFileReference_INTERFACE_DEFINED__

/* interface IAcSmEnumFileReference */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmEnumFileReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("73fcecfa-6343-4630-889b-d03cbfbc2431")
    IAcSmEnumFileReference : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [retval][out] */ IAcSmFileReference **ppRef) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumFileReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumFileReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumFileReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumFileReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumFileReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumFileReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumFileReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumFileReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumFileReference * This,
            /* [retval][out] */ IAcSmFileReference **ppRef);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumFileReference * This);
        
        END_INTERFACE
    } IAcSmEnumFileReferenceVtbl;

    interface IAcSmEnumFileReference
    {
        CONST_VTBL struct IAcSmEnumFileReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumFileReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumFileReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumFileReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumFileReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumFileReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumFileReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumFileReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumFileReference_Next(This,ppRef)	\
    ( (This)->lpVtbl -> Next(This,ppRef) ) 

#define IAcSmEnumFileReference_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumFileReference_INTERFACE_DEFINED__ */


#ifndef __IAcSmResources_INTERFACE_DEFINED__
#define __IAcSmResources_INTERFACE_DEFINED__

/* interface IAcSmResources */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmResources;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b448171b-d56c-4834-bf45-3d2ed0a66229")
    IAcSmResources : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IAcSmFileReference *pResource) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IAcSmFileReference *pResource) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IAcSmEnumFileReference **enumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmResourcesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmResources * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmResources * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmResources * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmResources * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmResources * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmResources * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmResources * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmResources * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmResources * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmResources * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmResources * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmResources * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmResources * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmResources * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmResources * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmResources * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmResources * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmResources * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmResources * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmResources * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmResources * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmResources * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmResources * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmResources * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmResources * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAcSmResources * This,
            /* [in] */ IAcSmFileReference *pResource);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAcSmResources * This,
            /* [in] */ IAcSmFileReference *pResource);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IAcSmResources * This,
            /* [retval][out] */ IAcSmEnumFileReference **enumerator);
        
        END_INTERFACE
    } IAcSmResourcesVtbl;

    interface IAcSmResources
    {
        CONST_VTBL struct IAcSmResourcesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmResources_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmResources_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmResources_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmResources_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmResources_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmResources_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmResources_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmResources_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmResources_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmResources_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmResources_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmResources_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmResources_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmResources_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmResources_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmResources_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmResources_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmResources_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmResources_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmResources_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmResources_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmResources_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmResources_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmResources_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmResources_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmResources_Add(This,pResource)	\
    ( (This)->lpVtbl -> Add(This,pResource) ) 

#define IAcSmResources_Remove(This,pResource)	\
    ( (This)->lpVtbl -> Remove(This,pResource) ) 

#define IAcSmResources_GetEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetEnumerator(This,enumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmResources_INTERFACE_DEFINED__ */


#ifndef __IAcSmPublishOptions_INTERFACE_DEFINED__
#define __IAcSmPublishOptions_INTERFACE_DEFINED__

/* interface IAcSmPublishOptions */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmPublishOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("147981d1-af77-42a1-8b91-4994a16a59fd")
    IAcSmPublishOptions : public IAcSmPersist
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDefaultOutputdir( 
            /* [retval][out] */ IAcSmFileReference **ppValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetDefaultOutputdir( 
            /* [in] */ IAcSmFileReference *pValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDwfType( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetDwfType( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPromptForName( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetPromptForName( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetUsePassword( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetUsePassword( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPromptForPassword( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetPromptForPassword( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetLayerInfo( 
            /* [retval][out] */ VARIANT_BOOL *pValue) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetLayerInfo( 
            /* [in] */ VARIANT_BOOL value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetUnrecognizedData( 
            /* [retval][out] */ IAcSmCustomPropertyBag **bag) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetUnrecognizedData( 
            /* [in] */ IAcSmCustomPropertyBag *bag) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetUnrecognizedSections( 
            /* [retval][out] */ IAcSmCustomPropertyBag **sectionArray) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetUnrecognizedSections( 
            /* [in] */ IAcSmCustomPropertyBag *sectionArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmPublishOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmPublishOptions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmPublishOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmPublishOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmPublishOptions * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmPublishOptions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmPublishOptions * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmPublishOptions * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmPublishOptions * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmPublishOptions * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmPublishOptions * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmPublishOptions * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmPublishOptions * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmPublishOptions * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultOutputdir )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ IAcSmFileReference **ppValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDefaultOutputdir )( 
            IAcSmPublishOptions * This,
            /* [in] */ IAcSmFileReference *pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDwfType )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDwfType )( 
            IAcSmPublishOptions * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPromptForName )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPromptForName )( 
            IAcSmPublishOptions * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUsePassword )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetUsePassword )( 
            IAcSmPublishOptions * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPromptForPassword )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetPromptForPassword )( 
            IAcSmPublishOptions * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLayerInfo )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ VARIANT_BOOL *pValue);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetLayerInfo )( 
            IAcSmPublishOptions * This,
            /* [in] */ VARIANT_BOOL value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUnrecognizedData )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetUnrecognizedData )( 
            IAcSmPublishOptions * This,
            /* [in] */ IAcSmCustomPropertyBag *bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetUnrecognizedSections )( 
            IAcSmPublishOptions * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **sectionArray);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetUnrecognizedSections )( 
            IAcSmPublishOptions * This,
            /* [in] */ IAcSmCustomPropertyBag *sectionArray);
        
        END_INTERFACE
    } IAcSmPublishOptionsVtbl;

    interface IAcSmPublishOptions
    {
        CONST_VTBL struct IAcSmPublishOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmPublishOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmPublishOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmPublishOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmPublishOptions_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmPublishOptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmPublishOptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmPublishOptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmPublishOptions_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmPublishOptions_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmPublishOptions_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmPublishOptions_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmPublishOptions_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmPublishOptions_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmPublishOptions_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmPublishOptions_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmPublishOptions_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmPublishOptions_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmPublishOptions_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmPublishOptions_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmPublishOptions_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmPublishOptions_GetDefaultOutputdir(This,ppValue)	\
    ( (This)->lpVtbl -> GetDefaultOutputdir(This,ppValue) ) 

#define IAcSmPublishOptions_SetDefaultOutputdir(This,pValue)	\
    ( (This)->lpVtbl -> SetDefaultOutputdir(This,pValue) ) 

#define IAcSmPublishOptions_GetDwfType(This,pValue)	\
    ( (This)->lpVtbl -> GetDwfType(This,pValue) ) 

#define IAcSmPublishOptions_SetDwfType(This,value)	\
    ( (This)->lpVtbl -> SetDwfType(This,value) ) 

#define IAcSmPublishOptions_GetPromptForName(This,pValue)	\
    ( (This)->lpVtbl -> GetPromptForName(This,pValue) ) 

#define IAcSmPublishOptions_SetPromptForName(This,value)	\
    ( (This)->lpVtbl -> SetPromptForName(This,value) ) 

#define IAcSmPublishOptions_GetUsePassword(This,pValue)	\
    ( (This)->lpVtbl -> GetUsePassword(This,pValue) ) 

#define IAcSmPublishOptions_SetUsePassword(This,value)	\
    ( (This)->lpVtbl -> SetUsePassword(This,value) ) 

#define IAcSmPublishOptions_GetPromptForPassword(This,pValue)	\
    ( (This)->lpVtbl -> GetPromptForPassword(This,pValue) ) 

#define IAcSmPublishOptions_SetPromptForPassword(This,value)	\
    ( (This)->lpVtbl -> SetPromptForPassword(This,value) ) 

#define IAcSmPublishOptions_GetLayerInfo(This,pValue)	\
    ( (This)->lpVtbl -> GetLayerInfo(This,pValue) ) 

#define IAcSmPublishOptions_SetLayerInfo(This,value)	\
    ( (This)->lpVtbl -> SetLayerInfo(This,value) ) 

#define IAcSmPublishOptions_GetUnrecognizedData(This,bag)	\
    ( (This)->lpVtbl -> GetUnrecognizedData(This,bag) ) 

#define IAcSmPublishOptions_SetUnrecognizedData(This,bag)	\
    ( (This)->lpVtbl -> SetUnrecognizedData(This,bag) ) 

#define IAcSmPublishOptions_GetUnrecognizedSections(This,sectionArray)	\
    ( (This)->lpVtbl -> GetUnrecognizedSections(This,sectionArray) ) 

#define IAcSmPublishOptions_SetUnrecognizedSections(This,sectionArray)	\
    ( (This)->lpVtbl -> SetUnrecognizedSections(This,sectionArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmPublishOptions_INTERFACE_DEFINED__ */


#ifndef __IAcSmEvents_INTERFACE_DEFINED__
#define __IAcSmEvents_INTERFACE_DEFINED__

/* interface IAcSmEvents */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56832073-a227-43f5-b5e9-bb4f0e4c7ad4")
    IAcSmEvents : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE OnChanged( 
            /* [in] */ AcSmEvent eventcode,
            /* [in] */ IAcSmPersist *comp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEvents * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnChanged )( 
            IAcSmEvents * This,
            /* [in] */ AcSmEvent eventcode,
            /* [in] */ IAcSmPersist *comp);
        
        END_INTERFACE
    } IAcSmEventsVtbl;

    interface IAcSmEvents
    {
        CONST_VTBL struct IAcSmEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEvents_OnChanged(This,eventcode,comp)	\
    ( (This)->lpVtbl -> OnChanged(This,eventcode,comp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEvents_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumPersist_INTERFACE_DEFINED__
#define __IAcSmEnumPersist_INTERFACE_DEFINED__

/* interface IAcSmEnumPersist */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmEnumPersist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("746e7d4f-0024-44ae-8753-f1ccae44072c")
    IAcSmEnumPersist : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [retval][out] */ IAcSmPersist **ppObject) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumPersistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumPersist * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumPersist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumPersist * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumPersist * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumPersist * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumPersist * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumPersist * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumPersist * This,
            /* [retval][out] */ IAcSmPersist **ppObject);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumPersist * This);
        
        END_INTERFACE
    } IAcSmEnumPersistVtbl;

    interface IAcSmEnumPersist
    {
        CONST_VTBL struct IAcSmEnumPersistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumPersist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumPersist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumPersist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumPersist_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumPersist_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumPersist_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumPersist_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumPersist_Next(This,ppObject)	\
    ( (This)->lpVtbl -> Next(This,ppObject) ) 

#define IAcSmEnumPersist_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumPersist_INTERFACE_DEFINED__ */


#ifndef __IAcSmPersistProxy_INTERFACE_DEFINED__
#define __IAcSmPersistProxy_INTERFACE_DEFINED__

/* interface IAcSmPersistProxy */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmPersistProxy;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d5bb3e7e-2af7-4d10-94b3-213ffdaf16c8")
    IAcSmPersistProxy : public IAcSmPersist
    {
    public:
        virtual /* [helpcontext][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE SetClassID( 
            /* [in] */ GUID classID) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetTypeName( 
            /* [in] */ BSTR value) = 0;
        
        virtual /* [helpcontext][helpstring][hidden] */ HRESULT STDMETHODCALLTYPE GetRawData( 
            /* [out] */ unsigned char **ppData,
            /* [out] */ long *pBufSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmPersistProxyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmPersistProxy * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmPersistProxy * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmPersistProxy * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmPersistProxy * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmPersistProxy * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmPersistProxy * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmPersistProxy * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmPersistProxy * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmPersistProxy * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmPersistProxy * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmPersistProxy * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmPersistProxy * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmPersistProxy * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmPersistProxy * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmPersistProxy * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmPersistProxy * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmPersistProxy * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmPersistProxy * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmPersistProxy * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmPersistProxy * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *SetClassID )( 
            IAcSmPersistProxy * This,
            /* [in] */ GUID classID);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetTypeName )( 
            IAcSmPersistProxy * This,
            /* [in] */ BSTR value);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetRawData )( 
            IAcSmPersistProxy * This,
            /* [out] */ unsigned char **ppData,
            /* [out] */ long *pBufSize);
        
        END_INTERFACE
    } IAcSmPersistProxyVtbl;

    interface IAcSmPersistProxy
    {
        CONST_VTBL struct IAcSmPersistProxyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmPersistProxy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmPersistProxy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmPersistProxy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmPersistProxy_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmPersistProxy_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmPersistProxy_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmPersistProxy_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmPersistProxy_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmPersistProxy_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmPersistProxy_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmPersistProxy_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmPersistProxy_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmPersistProxy_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmPersistProxy_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmPersistProxy_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmPersistProxy_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmPersistProxy_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmPersistProxy_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmPersistProxy_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmPersistProxy_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmPersistProxy_SetClassID(This,classID)	\
    ( (This)->lpVtbl -> SetClassID(This,classID) ) 

#define IAcSmPersistProxy_SetTypeName(This,value)	\
    ( (This)->lpVtbl -> SetTypeName(This,value) ) 

#define IAcSmPersistProxy_GetRawData(This,ppData,pBufSize)	\
    ( (This)->lpVtbl -> GetRawData(This,ppData,pBufSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmPersistProxy_INTERFACE_DEFINED__ */


#ifndef __IAcSmObjectReference_INTERFACE_DEFINED__
#define __IAcSmObjectReference_INTERFACE_DEFINED__

/* interface IAcSmObjectReference */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmObjectReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("adf37497-a661-4306-b048-a703e842d2fa")
    IAcSmObjectReference : public IAcSmPersist
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetReferencedObject( 
            /* [in] */ IAcSmPersist *pObject) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetReferencedObject( 
            /* [retval][out] */ IAcSmPersist **ppObject) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetReferenceFlags( 
            /* [retval][out] */ AcSmObjectReferenceFlags *value) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE SetReferenceFlags( 
            /* [in] */ AcSmObjectReferenceFlags value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmObjectReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmObjectReference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmObjectReference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmObjectReference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmObjectReference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmObjectReference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmObjectReference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmObjectReference * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmObjectReference * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmObjectReference * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmObjectReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmObjectReference * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmObjectReference * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmObjectReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmObjectReference * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmObjectReference * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmObjectReference * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmObjectReference * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmObjectReference * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmObjectReference * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmObjectReference * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetReferencedObject )( 
            IAcSmObjectReference * This,
            /* [in] */ IAcSmPersist *pObject);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetReferencedObject )( 
            IAcSmObjectReference * This,
            /* [retval][out] */ IAcSmPersist **ppObject);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetReferenceFlags )( 
            IAcSmObjectReference * This,
            /* [retval][out] */ AcSmObjectReferenceFlags *value);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetReferenceFlags )( 
            IAcSmObjectReference * This,
            /* [in] */ AcSmObjectReferenceFlags value);
        
        END_INTERFACE
    } IAcSmObjectReferenceVtbl;

    interface IAcSmObjectReference
    {
        CONST_VTBL struct IAcSmObjectReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmObjectReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmObjectReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmObjectReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmObjectReference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmObjectReference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmObjectReference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmObjectReference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmObjectReference_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmObjectReference_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmObjectReference_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmObjectReference_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmObjectReference_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmObjectReference_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmObjectReference_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmObjectReference_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmObjectReference_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmObjectReference_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmObjectReference_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmObjectReference_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmObjectReference_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmObjectReference_SetReferencedObject(This,pObject)	\
    ( (This)->lpVtbl -> SetReferencedObject(This,pObject) ) 

#define IAcSmObjectReference_GetReferencedObject(This,ppObject)	\
    ( (This)->lpVtbl -> GetReferencedObject(This,ppObject) ) 

#define IAcSmObjectReference_GetReferenceFlags(This,value)	\
    ( (This)->lpVtbl -> GetReferenceFlags(This,value) ) 

#define IAcSmObjectReference_SetReferenceFlags(This,value)	\
    ( (This)->lpVtbl -> SetReferenceFlags(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmObjectReference_INTERFACE_DEFINED__ */


#ifndef __IAcSmProjectPointLocation_INTERFACE_DEFINED__
#define __IAcSmProjectPointLocation_INTERFACE_DEFINED__

/* interface IAcSmProjectPointLocation */
/* [hidden][uuid][object] */ 


EXTERN_C const IID IID_IAcSmProjectPointLocation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0b79150e-c037-48ad-a93f-2ff6d3104d11")
    IAcSmProjectPointLocation : public IAcSmPersist
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ BSTR *name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetName( 
            /* [in] */ BSTR name) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetURL( 
            /* [out] */ BSTR *url) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetURL( 
            /* [in] */ BSTR url) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [out] */ BSTR *folder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFolder( 
            /* [in] */ BSTR folder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUsername( 
            /* [out] */ BSTR *username) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUsername( 
            /* [in] */ BSTR username) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPassword( 
            /* [out] */ BSTR *password) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPassword( 
            /* [in] */ BSTR password) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmProjectPointLocationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmProjectPointLocation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmProjectPointLocation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmProjectPointLocation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmProjectPointLocation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmProjectPointLocation * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmProjectPointLocation * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmProjectPointLocation * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmProjectPointLocation * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmProjectPointLocation * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmProjectPointLocation * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmProjectPointLocation * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmProjectPointLocation * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmProjectPointLocation * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmProjectPointLocation * This,
            /* [out] */ BSTR *name);
        
        HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ BSTR name);
        
        HRESULT ( STDMETHODCALLTYPE *GetURL )( 
            IAcSmProjectPointLocation * This,
            /* [out] */ BSTR *url);
        
        HRESULT ( STDMETHODCALLTYPE *SetURL )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ BSTR url);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            IAcSmProjectPointLocation * This,
            /* [out] */ BSTR *folder);
        
        HRESULT ( STDMETHODCALLTYPE *SetFolder )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ BSTR folder);
        
        HRESULT ( STDMETHODCALLTYPE *GetUsername )( 
            IAcSmProjectPointLocation * This,
            /* [out] */ BSTR *username);
        
        HRESULT ( STDMETHODCALLTYPE *SetUsername )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ BSTR username);
        
        HRESULT ( STDMETHODCALLTYPE *GetPassword )( 
            IAcSmProjectPointLocation * This,
            /* [out] */ BSTR *password);
        
        HRESULT ( STDMETHODCALLTYPE *SetPassword )( 
            IAcSmProjectPointLocation * This,
            /* [in] */ BSTR password);
        
        END_INTERFACE
    } IAcSmProjectPointLocationVtbl;

    interface IAcSmProjectPointLocation
    {
        CONST_VTBL struct IAcSmProjectPointLocationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmProjectPointLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmProjectPointLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmProjectPointLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmProjectPointLocation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmProjectPointLocation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmProjectPointLocation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmProjectPointLocation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmProjectPointLocation_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmProjectPointLocation_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmProjectPointLocation_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmProjectPointLocation_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmProjectPointLocation_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmProjectPointLocation_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmProjectPointLocation_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmProjectPointLocation_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmProjectPointLocation_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmProjectPointLocation_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmProjectPointLocation_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmProjectPointLocation_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmProjectPointLocation_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmProjectPointLocation_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmProjectPointLocation_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmProjectPointLocation_GetURL(This,url)	\
    ( (This)->lpVtbl -> GetURL(This,url) ) 

#define IAcSmProjectPointLocation_SetURL(This,url)	\
    ( (This)->lpVtbl -> SetURL(This,url) ) 

#define IAcSmProjectPointLocation_GetFolder(This,folder)	\
    ( (This)->lpVtbl -> GetFolder(This,folder) ) 

#define IAcSmProjectPointLocation_SetFolder(This,folder)	\
    ( (This)->lpVtbl -> SetFolder(This,folder) ) 

#define IAcSmProjectPointLocation_GetUsername(This,username)	\
    ( (This)->lpVtbl -> GetUsername(This,username) ) 

#define IAcSmProjectPointLocation_SetUsername(This,username)	\
    ( (This)->lpVtbl -> SetUsername(This,username) ) 

#define IAcSmProjectPointLocation_GetPassword(This,password)	\
    ( (This)->lpVtbl -> GetPassword(This,password) ) 

#define IAcSmProjectPointLocation_SetPassword(This,password)	\
    ( (This)->lpVtbl -> SetPassword(This,password) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmProjectPointLocation_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumProjectPointLocation_INTERFACE_DEFINED__
#define __IAcSmEnumProjectPointLocation_INTERFACE_DEFINED__

/* interface IAcSmEnumProjectPointLocation */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAcSmEnumProjectPointLocation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("af02d3b1-a2e4-44c7-85ae-01038365dec2")
    IAcSmEnumProjectPointLocation : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [retval][out] */ IAcSmProjectPointLocation **location) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumProjectPointLocationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumProjectPointLocation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumProjectPointLocation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumProjectPointLocation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumProjectPointLocation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumProjectPointLocation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumProjectPointLocation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumProjectPointLocation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumProjectPointLocation * This,
            /* [retval][out] */ IAcSmProjectPointLocation **location);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumProjectPointLocation * This);
        
        END_INTERFACE
    } IAcSmEnumProjectPointLocationVtbl;

    interface IAcSmEnumProjectPointLocation
    {
        CONST_VTBL struct IAcSmEnumProjectPointLocationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumProjectPointLocation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumProjectPointLocation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumProjectPointLocation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumProjectPointLocation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumProjectPointLocation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumProjectPointLocation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumProjectPointLocation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumProjectPointLocation_Next(This,location)	\
    ( (This)->lpVtbl -> Next(This,location) ) 

#define IAcSmEnumProjectPointLocation_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumProjectPointLocation_INTERFACE_DEFINED__ */


#ifndef __IAcSmProjectPointLocations_INTERFACE_DEFINED__
#define __IAcSmProjectPointLocations_INTERFACE_DEFINED__

/* interface IAcSmProjectPointLocations */
/* [uuid][object] */ 


EXTERN_C const IID IID_IAcSmProjectPointLocations;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2760e2a6-c735-4a97-8260-f1af212c8a4d")
    IAcSmProjectPointLocations : public IAcSmComponent
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLocation( 
            /* [in] */ BSTR locationName,
            /* [out] */ IAcSmProjectPointLocation **location) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveLocation( 
            /* [in] */ IAcSmProjectPointLocation *location) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddNewLocation( 
            /* [in] */ BSTR name,
            /* [in] */ BSTR url,
            /* [in] */ BSTR folder,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password,
            /* [out] */ IAcSmProjectPointLocation **location) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnumerator( 
            /* [retval][out] */ IAcSmEnumProjectPointLocation **enumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmProjectPointLocationsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmProjectPointLocations * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmProjectPointLocations * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmProjectPointLocations * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmProjectPointLocations * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmProjectPointLocations * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmProjectPointLocations * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ BSTR locationName,
            /* [out] */ IAcSmProjectPointLocation **location);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveLocation )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ IAcSmProjectPointLocation *location);
        
        HRESULT ( STDMETHODCALLTYPE *AddNewLocation )( 
            IAcSmProjectPointLocations * This,
            /* [in] */ BSTR name,
            /* [in] */ BSTR url,
            /* [in] */ BSTR folder,
            /* [in] */ BSTR username,
            /* [in] */ BSTR password,
            /* [out] */ IAcSmProjectPointLocation **location);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )( 
            IAcSmProjectPointLocations * This,
            /* [retval][out] */ IAcSmEnumProjectPointLocation **enumerator);
        
        END_INTERFACE
    } IAcSmProjectPointLocationsVtbl;

    interface IAcSmProjectPointLocations
    {
        CONST_VTBL struct IAcSmProjectPointLocationsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmProjectPointLocations_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmProjectPointLocations_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmProjectPointLocations_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmProjectPointLocations_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmProjectPointLocations_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmProjectPointLocations_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmProjectPointLocations_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmProjectPointLocations_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmProjectPointLocations_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmProjectPointLocations_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmProjectPointLocations_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmProjectPointLocations_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmProjectPointLocations_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmProjectPointLocations_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmProjectPointLocations_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmProjectPointLocations_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmProjectPointLocations_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmProjectPointLocations_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmProjectPointLocations_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmProjectPointLocations_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmProjectPointLocations_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmProjectPointLocations_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmProjectPointLocations_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmProjectPointLocations_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmProjectPointLocations_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmProjectPointLocations_GetLocation(This,locationName,location)	\
    ( (This)->lpVtbl -> GetLocation(This,locationName,location) ) 

#define IAcSmProjectPointLocations_RemoveLocation(This,location)	\
    ( (This)->lpVtbl -> RemoveLocation(This,location) ) 

#define IAcSmProjectPointLocations_AddNewLocation(This,name,url,folder,username,password,location)	\
    ( (This)->lpVtbl -> AddNewLocation(This,name,url,folder,username,password,location) ) 

#define IAcSmProjectPointLocations_GetEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetEnumerator(This,enumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmProjectPointLocations_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumDatabase_INTERFACE_DEFINED__
#define __IAcSmEnumDatabase_INTERFACE_DEFINED__

/* interface IAcSmEnumDatabase */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmEnumDatabase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("02aacc99-5c5a-4528-a00a-73f71c51439b")
    IAcSmEnumDatabase : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [retval][out] */ IAcSmDatabase **db) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumDatabaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumDatabase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumDatabase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumDatabase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumDatabase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumDatabase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumDatabase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumDatabase * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumDatabase * This,
            /* [retval][out] */ IAcSmDatabase **db);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumDatabase * This);
        
        END_INTERFACE
    } IAcSmEnumDatabaseVtbl;

    interface IAcSmEnumDatabase
    {
        CONST_VTBL struct IAcSmEnumDatabaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumDatabase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumDatabase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumDatabase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumDatabase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumDatabase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumDatabase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumDatabase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumDatabase_Next(This,db)	\
    ( (This)->lpVtbl -> Next(This,db) ) 

#define IAcSmEnumDatabase_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumDatabase_INTERFACE_DEFINED__ */


#ifndef __IAcSmSheetSetMgr_INTERFACE_DEFINED__
#define __IAcSmSheetSetMgr_INTERFACE_DEFINED__

/* interface IAcSmSheetSetMgr */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmSheetSetMgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4cc6fc8f-f1c6-486d-b550-838b0234e03c")
    IAcSmSheetSetMgr : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CreateDatabase( 
            /* [in] */ BSTR filename,
            /* [defaultvalue][in] */ BSTR templatefilename,
            /* [defaultvalue][in] */ VARIANT_BOOL bAlwaysCreate,
            /* [retval][out] */ IAcSmDatabase **db) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE OpenDatabase( 
            /* [in] */ BSTR filename,
            /* [defaultvalue][in] */ VARIANT_BOOL bFailIfAlreadyOpen,
            /* [retval][out] */ IAcSmDatabase **db) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FindOpenDatabase( 
            /* [in] */ BSTR filename,
            /* [retval][out] */ IAcSmDatabase **ppDb) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE CloseAll( void) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Close( 
            /* [in] */ IAcSmDatabase *db) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Register( 
            /* [in] */ IAcSmEvents *eventHandler,
            /* [retval][out] */ long *cookie) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Unregister( 
            /* [in] */ long cookie) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetParentSheetSet( 
            /* [in] */ BSTR dwg,
            /* [in] */ BSTR layout,
            /* [out] */ IAcSmSheetSet **sheetSet,
            /* [retval][out] */ IAcSmDatabase **pSmDb) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetSheetFromLayout( 
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbLayout,
            /* [out] */ IAcSmSheet **sheet,
            /* [retval][out] */ IAcSmDatabase **pSmDb) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetDatabaseEnumerator( 
            /* [retval][out] */ IAcSmEnumDatabase **enumerator) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmSheetSetMgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmSheetSetMgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmSheetSetMgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmSheetSetMgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmSheetSetMgr * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDatabase )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ BSTR filename,
            /* [defaultvalue][in] */ BSTR templatefilename,
            /* [defaultvalue][in] */ VARIANT_BOOL bAlwaysCreate,
            /* [retval][out] */ IAcSmDatabase **db);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *OpenDatabase )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ BSTR filename,
            /* [defaultvalue][in] */ VARIANT_BOOL bFailIfAlreadyOpen,
            /* [retval][out] */ IAcSmDatabase **db);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindOpenDatabase )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ BSTR filename,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CloseAll )( 
            IAcSmSheetSetMgr * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ IAcSmDatabase *db);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Register )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ IAcSmEvents *eventHandler,
            /* [retval][out] */ long *cookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Unregister )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ long cookie);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParentSheetSet )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ BSTR dwg,
            /* [in] */ BSTR layout,
            /* [out] */ IAcSmSheetSet **sheetSet,
            /* [retval][out] */ IAcSmDatabase **pSmDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSheetFromLayout )( 
            IAcSmSheetSetMgr * This,
            /* [in] */ /* external definition not present */ IAcadObject *pAcDbLayout,
            /* [out] */ IAcSmSheet **sheet,
            /* [retval][out] */ IAcSmDatabase **pSmDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabaseEnumerator )( 
            IAcSmSheetSetMgr * This,
            /* [retval][out] */ IAcSmEnumDatabase **enumerator);
        
        END_INTERFACE
    } IAcSmSheetSetMgrVtbl;

    interface IAcSmSheetSetMgr
    {
        CONST_VTBL struct IAcSmSheetSetMgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmSheetSetMgr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmSheetSetMgr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmSheetSetMgr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmSheetSetMgr_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmSheetSetMgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmSheetSetMgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmSheetSetMgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmSheetSetMgr_CreateDatabase(This,filename,templatefilename,bAlwaysCreate,db)	\
    ( (This)->lpVtbl -> CreateDatabase(This,filename,templatefilename,bAlwaysCreate,db) ) 

#define IAcSmSheetSetMgr_OpenDatabase(This,filename,bFailIfAlreadyOpen,db)	\
    ( (This)->lpVtbl -> OpenDatabase(This,filename,bFailIfAlreadyOpen,db) ) 

#define IAcSmSheetSetMgr_FindOpenDatabase(This,filename,ppDb)	\
    ( (This)->lpVtbl -> FindOpenDatabase(This,filename,ppDb) ) 

#define IAcSmSheetSetMgr_CloseAll(This)	\
    ( (This)->lpVtbl -> CloseAll(This) ) 

#define IAcSmSheetSetMgr_Close(This,db)	\
    ( (This)->lpVtbl -> Close(This,db) ) 

#define IAcSmSheetSetMgr_Register(This,eventHandler,cookie)	\
    ( (This)->lpVtbl -> Register(This,eventHandler,cookie) ) 

#define IAcSmSheetSetMgr_Unregister(This,cookie)	\
    ( (This)->lpVtbl -> Unregister(This,cookie) ) 

#define IAcSmSheetSetMgr_GetParentSheetSet(This,dwg,layout,sheetSet,pSmDb)	\
    ( (This)->lpVtbl -> GetParentSheetSet(This,dwg,layout,sheetSet,pSmDb) ) 

#define IAcSmSheetSetMgr_GetSheetFromLayout(This,pAcDbLayout,sheet,pSmDb)	\
    ( (This)->lpVtbl -> GetSheetFromLayout(This,pAcDbLayout,sheet,pSmDb) ) 

#define IAcSmSheetSetMgr_GetDatabaseEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetDatabaseEnumerator(This,enumerator) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmSheetSetMgr_INTERFACE_DEFINED__ */


#ifndef __IAcSmViewCategory_INTERFACE_DEFINED__
#define __IAcSmViewCategory_INTERFACE_DEFINED__

/* interface IAcSmViewCategory */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmViewCategory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5b52086-a849-4a06-9b77-41d860e5a11b")
    IAcSmViewCategory : public IAcSmComponent
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetSheetViewEnumerator( 
            /* [retval][out] */ IAcSmEnumSheetView **enumerator) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetCalloutBlocks( 
            /* [retval][out] */ IAcSmCalloutBlocks **ppCalloutBlocks) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmViewCategoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmViewCategory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmViewCategory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmViewCategory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmViewCategory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmViewCategory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmViewCategory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmViewCategory * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetClassID )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ GUID *p);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetIsDirty )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IAcSmViewCategory * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAcSmViewCategory * This,
            /* [in] */ IAcSmFiler *pFiler);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTypeName )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InitNew )( 
            IAcSmViewCategory * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetOwner )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ IAcSmPersist **ppOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IAcSmViewCategory * This,
            /* [in] */ IAcSmPersist *pOwner);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDatabase )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ IAcSmDatabase **ppDb);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetObjectId )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ IAcSmObjectId **ppId);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAcSmViewCategory * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjects )( 
            IAcSmViewCategory * This,
            /* [out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDirectlyOwnedObjectsArray )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ SAFEARRAY * *objects);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ BSTR *name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetName )( 
            IAcSmViewCategory * This,
            /* [in] */ BSTR name);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDesc )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ BSTR *desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetDesc )( 
            IAcSmViewCategory * This,
            /* [in] */ BSTR desc);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCustomPropertyBag )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ IAcSmCustomPropertyBag **bag);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetSheetViewEnumerator )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ IAcSmEnumSheetView **enumerator);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCalloutBlocks )( 
            IAcSmViewCategory * This,
            /* [retval][out] */ IAcSmCalloutBlocks **ppCalloutBlocks);
        
        END_INTERFACE
    } IAcSmViewCategoryVtbl;

    interface IAcSmViewCategory
    {
        CONST_VTBL struct IAcSmViewCategoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmViewCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmViewCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmViewCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmViewCategory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmViewCategory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmViewCategory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmViewCategory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmViewCategory_GetClassID(This,p)	\
    ( (This)->lpVtbl -> GetClassID(This,p) ) 

#define IAcSmViewCategory_GetIsDirty(This,pVal)	\
    ( (This)->lpVtbl -> GetIsDirty(This,pVal) ) 

#define IAcSmViewCategory_Load(This,pFiler)	\
    ( (This)->lpVtbl -> Load(This,pFiler) ) 

#define IAcSmViewCategory_Save(This,pFiler)	\
    ( (This)->lpVtbl -> Save(This,pFiler) ) 

#define IAcSmViewCategory_GetTypeName(This,pVal)	\
    ( (This)->lpVtbl -> GetTypeName(This,pVal) ) 

#define IAcSmViewCategory_InitNew(This,pOwner)	\
    ( (This)->lpVtbl -> InitNew(This,pOwner) ) 

#define IAcSmViewCategory_GetOwner(This,ppOwner)	\
    ( (This)->lpVtbl -> GetOwner(This,ppOwner) ) 

#define IAcSmViewCategory_SetOwner(This,pOwner)	\
    ( (This)->lpVtbl -> SetOwner(This,pOwner) ) 

#define IAcSmViewCategory_GetDatabase(This,ppDb)	\
    ( (This)->lpVtbl -> GetDatabase(This,ppDb) ) 

#define IAcSmViewCategory_GetObjectId(This,ppId)	\
    ( (This)->lpVtbl -> GetObjectId(This,ppId) ) 

#define IAcSmViewCategory_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IAcSmViewCategory_GetDirectlyOwnedObjects(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjects(This,objects) ) 

#define IAcSmViewCategory_GetDirectlyOwnedObjectsArray(This,objects)	\
    ( (This)->lpVtbl -> GetDirectlyOwnedObjectsArray(This,objects) ) 


#define IAcSmViewCategory_GetName(This,name)	\
    ( (This)->lpVtbl -> GetName(This,name) ) 

#define IAcSmViewCategory_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IAcSmViewCategory_GetDesc(This,desc)	\
    ( (This)->lpVtbl -> GetDesc(This,desc) ) 

#define IAcSmViewCategory_SetDesc(This,desc)	\
    ( (This)->lpVtbl -> SetDesc(This,desc) ) 

#define IAcSmViewCategory_GetCustomPropertyBag(This,bag)	\
    ( (This)->lpVtbl -> GetCustomPropertyBag(This,bag) ) 


#define IAcSmViewCategory_GetSheetViewEnumerator(This,enumerator)	\
    ( (This)->lpVtbl -> GetSheetViewEnumerator(This,enumerator) ) 

#define IAcSmViewCategory_GetCalloutBlocks(This,ppCalloutBlocks)	\
    ( (This)->lpVtbl -> GetCalloutBlocks(This,ppCalloutBlocks) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmViewCategory_INTERFACE_DEFINED__ */


#ifndef __IAcSmEnumViewCategory_INTERFACE_DEFINED__
#define __IAcSmEnumViewCategory_INTERFACE_DEFINED__

/* interface IAcSmEnumViewCategory */
/* [uuid][helpstring][object] */ 


EXTERN_C const IID IID_IAcSmEnumViewCategory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("460b347f-c804-42f0-91d5-7ddd925e5058")
    IAcSmEnumViewCategory : public IDispatch
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Next( 
            /* [retval][out] */ IAcSmViewCategory **viewCat) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAcSmEnumViewCategoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAcSmEnumViewCategory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAcSmEnumViewCategory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAcSmEnumViewCategory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAcSmEnumViewCategory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAcSmEnumViewCategory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAcSmEnumViewCategory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAcSmEnumViewCategory * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Next )( 
            IAcSmEnumViewCategory * This,
            /* [retval][out] */ IAcSmViewCategory **viewCat);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IAcSmEnumViewCategory * This);
        
        END_INTERFACE
    } IAcSmEnumViewCategoryVtbl;

    interface IAcSmEnumViewCategory
    {
        CONST_VTBL struct IAcSmEnumViewCategoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAcSmEnumViewCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAcSmEnumViewCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAcSmEnumViewCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAcSmEnumViewCategory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAcSmEnumViewCategory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAcSmEnumViewCategory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAcSmEnumViewCategory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAcSmEnumViewCategory_Next(This,viewCat)	\
    ( (This)->lpVtbl -> Next(This,viewCat) ) 

#define IAcSmEnumViewCategory_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAcSmEnumViewCategory_INTERFACE_DEFINED__ */


#ifndef __IOdSmInternal_INTERFACE_DEFINED__
#define __IOdSmInternal_INTERFACE_DEFINED__

/* interface IOdSmInternal */
/* [uuid][restricted][local][hidden][object] */ 


EXTERN_C const IID IID_IOdSmInternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66512850-2BEB-4a6b-B471-2DECF76C876E")
    IOdSmInternal : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetImpl( 
            void *impl) = 0;
        
        virtual void *STDMETHODCALLTYPE GetImpl( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOdSmInternalVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOdSmInternal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOdSmInternal * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOdSmInternal * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetImpl )( 
            IOdSmInternal * This,
            void *impl);
        
        void *( STDMETHODCALLTYPE *GetImpl )( 
            IOdSmInternal * This);
        
        END_INTERFACE
    } IOdSmInternalVtbl;

    interface IOdSmInternal
    {
        CONST_VTBL struct IOdSmInternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOdSmInternal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOdSmInternal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOdSmInternal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOdSmInternal_SetImpl(This,impl)	\
    ( (This)->lpVtbl -> SetImpl(This,impl) ) 

#define IOdSmInternal_GetImpl(This)	\
    ( (This)->lpVtbl -> GetImpl(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOdSmInternal_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AcSmPersist;

#ifdef __cplusplus

class DECLSPEC_UUID("CC660D71-1F88-49FB-8889-3938766EAD42")
AcSmPersist;
#endif

EXTERN_C const CLSID CLSID_AcSmComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("64BE94D9-5A81-479A-8969-30E070A1FD21")
AcSmComponent;
#endif

EXTERN_C const CLSID CLSID_AcSmObjectId;

#ifdef __cplusplus

class DECLSPEC_UUID("33E851AF-6884-4640-A796-E3B33B129B37")
AcSmObjectId;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("6B7638DA-E3C2-4922-A88C-16ACE167AC46")
AcSmEnumComponent;
#endif

EXTERN_C const CLSID CLSID_AcSmSubset;

#ifdef __cplusplus

class DECLSPEC_UUID("63B0EC8A-0556-43C3-987A-067C93B5593E")
AcSmSubset;
#endif

EXTERN_C const CLSID CLSID_AcSmAcDbBlockRecordReference;

#ifdef __cplusplus

class DECLSPEC_UUID("50F5133C-0E7F-4031-9046-828E8FDDAFAB")
AcSmAcDbBlockRecordReference;
#endif

EXTERN_C const CLSID CLSID_AcSmAcDbDatabase;

#ifdef __cplusplus

class DECLSPEC_UUID("4F6BDB66-82DC-4718-B45E-6532E042B1AD")
AcSmAcDbDatabase;
#endif

EXTERN_C const CLSID CLSID_AcSmAcDbLayoutReference;

#ifdef __cplusplus

class DECLSPEC_UUID("F925E1F0-FD87-4DE1-BD28-F69B3827E4C1")
AcSmAcDbLayoutReference;
#endif

EXTERN_C const CLSID CLSID_AcSmAcDbObjectReference;

#ifdef __cplusplus

class DECLSPEC_UUID("36FC77EE-71F1-47ED-BF44-C9F8CBD91512")
AcSmAcDbObjectReference;
#endif

EXTERN_C const CLSID CLSID_AcSmAcDbViewReference;

#ifdef __cplusplus

class DECLSPEC_UUID("262FD0C6-6CAE-4E77-9CFE-3998E1F6EDED")
AcSmAcDbViewReference;
#endif

EXTERN_C const CLSID CLSID_AcSmCalloutBlocks;

#ifdef __cplusplus

class DECLSPEC_UUID("0A428210-C10A-4B1D-9008-C45F306E402C")
AcSmCalloutBlocks;
#endif

EXTERN_C const CLSID CLSID_AcSmCustomPropertyBag;

#ifdef __cplusplus

class DECLSPEC_UUID("8DDE26CC-15B1-4A62-942B-13B31B45FF7F")
AcSmCustomPropertyBag;
#endif

EXTERN_C const CLSID CLSID_AcSmCustomPropertyValue;

#ifdef __cplusplus

class DECLSPEC_UUID("9E045555-2535-437F-8E87-DF8B578F3C3A")
AcSmCustomPropertyValue;
#endif

EXTERN_C const CLSID CLSID_AcSmDatabase;

#ifdef __cplusplus

class DECLSPEC_UUID("A2192D05-19BD-4254-A4FC-513183D23900")
AcSmDatabase;
#endif

EXTERN_C const CLSID CLSID_AcSmSheetSet;

#ifdef __cplusplus

class DECLSPEC_UUID("7B5B4A5F-DCBD-43AF-81D7-BBF765D4E261")
AcSmSheetSet;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumAcDbBlockRecordReference;

#ifdef __cplusplus

class DECLSPEC_UUID("05AB30DA-CA2E-421A-9E85-FC81E8ECD8E7")
AcSmEnumAcDbBlockRecordReference;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumDatabase;

#ifdef __cplusplus

class DECLSPEC_UUID("3122E6F1-279F-471B-A255-B613FA3D16B2")
AcSmEnumDatabase;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumFileReference;

#ifdef __cplusplus

class DECLSPEC_UUID("4DB24DA6-DAD8-4059-A7D5-4CC122EEBE9B")
AcSmEnumFileReference;
#endif

EXTERN_C const CLSID CLSID_AcSmNamedAcDbObjectReference;

#ifdef __cplusplus

class DECLSPEC_UUID("F1F84526-FC63-4A49-8284-A1DA825F3381")
AcSmNamedAcDbObjectReference;
#endif

EXTERN_C const CLSID CLSID_AcSmProjectPointLocation;

#ifdef __cplusplus

class DECLSPEC_UUID("95DBE88A-3750-4957-8A66-44D91ABBF8DB")
AcSmProjectPointLocation;
#endif

EXTERN_C const CLSID CLSID_AcSmProjectPointLocations;

#ifdef __cplusplus

class DECLSPEC_UUID("812F49BD-E772-4738-BF99-763822D0B04E")
AcSmProjectPointLocations;
#endif

EXTERN_C const CLSID CLSID_AcSmPublishOptions;

#ifdef __cplusplus

class DECLSPEC_UUID("B68F503C-6D55-4EAB-BB03-B1EA0E619389")
AcSmPublishOptions;
#endif

EXTERN_C const CLSID CLSID_AcSmResources;

#ifdef __cplusplus

class DECLSPEC_UUID("9C04F7BB-D571-4D01-9C45-9706C2C59144")
AcSmResources;
#endif

EXTERN_C const CLSID CLSID_AcSmSheet;

#ifdef __cplusplus

class DECLSPEC_UUID("8B46D589-6BA8-4105-AC84-EDD457D561CA")
AcSmSheet;
#endif

EXTERN_C const CLSID CLSID_AcSmSheetSelSet;

#ifdef __cplusplus

class DECLSPEC_UUID("57380F0E-AFFE-4AFD-B563-4C86BEBAC284")
AcSmSheetSelSet;
#endif

EXTERN_C const CLSID CLSID_AcSmSheetSelSets;

#ifdef __cplusplus

class DECLSPEC_UUID("07AD9BC7-C1E7-476F-A8AB-65B8D8A6F5BF")
AcSmSheetSelSets;
#endif

EXTERN_C const CLSID CLSID_AcSmSheetSetMgr;

#ifdef __cplusplus

class DECLSPEC_UUID("30D81252-F482-42FE-A8A3-93B44207122E")
AcSmSheetSetMgr;
#endif

EXTERN_C const CLSID CLSID_AcSmSheetView;

#ifdef __cplusplus

class DECLSPEC_UUID("4077FFD4-A180-413A-A5D9-2E3C7581FB72")
AcSmSheetView;
#endif

EXTERN_C const CLSID CLSID_AcSmSheetViews;

#ifdef __cplusplus

class DECLSPEC_UUID("8E2FDD7D-DAB4-4D1D-80B5-BDAF6A69E966")
AcSmSheetViews;
#endif

EXTERN_C const CLSID CLSID_AcSmViewCategories;

#ifdef __cplusplus

class DECLSPEC_UUID("1654FBA0-24F9-4721-8B55-05B46218F7ED")
AcSmViewCategories;
#endif

EXTERN_C const CLSID CLSID_AcSmViewCategory;

#ifdef __cplusplus

class DECLSPEC_UUID("E731681A-4CE8-4F42-BF7B-93F8BD3CBDEA")
AcSmViewCategory;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumPersist;

#ifdef __cplusplus

class DECLSPEC_UUID("AFD43F43-9253-4E9C-9DFD-01D54D797FB9")
AcSmEnumPersist;
#endif

EXTERN_C const CLSID CLSID_AcSmCalloutBlockReferences;

#ifdef __cplusplus

class DECLSPEC_UUID("30F9B106-74FC-476E-BF57-C69A4EA0E52A")
AcSmCalloutBlockReferences;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("EBEB0352-2705-4A8A-ABAF-ABA104CF85B9")
AcSmEnumProperty;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumViewCategory;

#ifdef __cplusplus

class DECLSPEC_UUID("2ECB5723-A36A-450C-A6DF-8CB2808F0CD8")
AcSmEnumViewCategory;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumSheetView;

#ifdef __cplusplus

class DECLSPEC_UUID("51AF4670-B052-4093-B351-CB760E35BA95")
AcSmEnumSheetView;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumProjectPointLocation;

#ifdef __cplusplus

class DECLSPEC_UUID("42204AF2-496C-490B-A551-269AC258424E")
AcSmEnumProjectPointLocation;
#endif

EXTERN_C const CLSID CLSID_AcSmFileReference;

#ifdef __cplusplus

class DECLSPEC_UUID("F9CBE303-4104-4C91-A4F9-D029DBD0502E")
AcSmFileReference;
#endif

EXTERN_C const CLSID CLSID_AcSmEnumSheetSelSet;

#ifdef __cplusplus

class DECLSPEC_UUID("6B2047C7-DDA1-42A9-857E-0F050949845A")
AcSmEnumSheetSelSet;
#endif
#endif /* __BricscadSm_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


