// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

HRESULT AcOpmGetCategoryName(IUnknown*, HINSTANCE, ACAD_OPMPROPMAP_ENTRY*, PROPCAT, LCID, BSTR*);
HRESULT AcOpmGetDisplayName(IUnknown*, HINSTANCE, ACAD_OPMPROPMAP_ENTRY*, DISPID, BSTR*);
HRESULT AcOpmGetDisplayString(IUnknown*, ACAD_OPMPROPMAP_ENTRY*, DISPID, BSTR*);
HRESULT AcOpmEditable(IUnknown*, ACAD_OPMPROPMAP_ENTRY*, DISPID, BOOL*);
HRESULT AcOpmGetPredefinedStrings(IUnknown*, HINSTANCE, ACAD_OPMPROPMAP_ENTRY*, DISPID, CALPOLESTR*, CADWORD*);
HRESULT AcOpmGetPredefinedValue(IUnknown*, ACAD_OPMPROPMAP_ENTRY*, DISPID, DWORD, VARIANT*);
HRESULT AcOpmMapPropertyToCategory(IUnknown*, ACAD_OPMPROPMAP_ENTRY*, DISPID, PROPCAT*);
HRESULT AcOpmMapPropertyToPage(IUnknown*, ACAD_OPMPROPMAP_ENTRY*, DISPID, CLSID*);
HRESULT AcOpmShowProperty(IUnknown*, ACAD_OPMPROPMAP_ENTRY*, DISPID, BOOL*);

HRESULT AcOpmGetCategoryName(IUnknown*, HINSTANCE, CATEGORY_VECTOR&, PROPCAT, LCID, BSTR*);
HRESULT AcOpmGetCategoryCommandButtons(IUnknown*, HINSTANCE, CATCMDBTN_VECTOR&, PROPCAT, VARIANT*);
HRESULT AcOpmGetParentCategory(IUnknown*, CATEGORY_VECTOR&, PROPCAT, PROPCAT*);
HRESULT AcOpmGetCategoryWeight(IUnknown*, CATEGORY_VECTOR&, PROPCAT, long*);
HRESULT AcOpmGetCategoryDescription(IUnknown*, HINSTANCE, CATEGORY_VECTOR&, PROPCAT, LCID, BSTR*);

HRESULT AcOpmGetPropertyWeight(IUnknown*, PROP_DISP_VECTOR&, VARIANT, long* );
HRESULT AcOpmIsPropFullView(IUnknown*, PROP_DISP_VECTOR&, VARIANT, VARIANT_BOOL* , DWORD*);
HRESULT AcOpmGetPropTextColor(IUnknown*, PROP_DISP_VECTOR&, VARIANT, OLE_COLOR*);
HRESULT AcOpmGetPropertyIcon(IUnknown*,  HINSTANCE,PROP_DISP_VECTOR&, VARIANT, IUnknown**);
HRESULT AcOpmGetCustomPropertyCtrl(IUnknown*, PROP_DISP_VECTOR&, VARIANT, LCID, BSTR*);
