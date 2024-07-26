// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#ifndef DISABLE_OLD_ADS_NAMES

#define ads_agetcfg acedGetCfg
#define ads_agetenv acedGetEnv
#define ads_alert acedAlert
#define ads_angle acutAngle
#define ads_angtof acdbAngToF
#define ads_angtos acdbAngToS
#define ads_arxload acedArxLoad
#define ads_arxloaded acedArxLoaded
#define ads_arxunload acedArxUnload
#define ads_asetcfg acedSetCfg
#define ads_asetenv acedSetEnv
#define ads_buildlist acutBuildList
#define ads_calloc acad_calloc
#define ads_cmd acedCmd
#define ads_command acedCommand
#define ads_cvunit acutCvUnit
#define ads_defun acedDefun
#define ads_dictadd acdbDictAdd
#define ads_dictnext acdbDictNext
#define ads_dictremove acdbDictRemove
#define ads_dictrename acdbDictRename
#define ads_dictsearch acdbDictSearch
#define ads_distance acutDistance
#define ads_distof acdbDisToF
#define ads_draggen acedDragGen
#define ads_entdel acdbEntDel
#define ads_entget acdbEntGet
#define ads_entgetx acdbEntGetX
#define ads_entlast acdbEntLast
#define ads_entmake acdbEntMake
#define ads_entmakex acdbEntMakeX
#define ads_entmod acdbEntMod
#define ads_entnext acdbEntNext
#define ads_entsel acedEntSel
#define ads_entupd acdbEntUpd
#define ads_fail acdbFail
#define ads_findfile acedFindFile
#define ads_fnsplit acedFNSplit
#define ads_free acad_free
#define ads_getangle acedGetAngle
#define ads_getappname acedGetAppName
#define ads_getargs acedGetArgs
#define ads_getcfg acedGetCfg
#define ads_getcname acedGetCName
#define ads_getcorner acedGetCorner
#define ads_getdist acedGetDist
#define ads_getenv acedGetEnv
#define ads_getfiled acedGetFileD
#define ads_getfuncode acedGetFunCode
#define ads_getinput acedGetInput
#define ads_getint acedGetInt
#define ads_getintInRange acedGetIntInRange
#define ads_getkword acedGetKword
#define ads_getorient acedGetOrient
#define ads_getpoint acedGetPoint
#define ads_getreal acedGetReal
#define ads_getstring acedGetString
#define ads_getstringb acedGetString
#define ads_getsym acedGetSym
#define ads_getvar acedGetVar
#define ads_graphscr acedGraphScr
#define ads_grdraw acedGrDraw
#define ads_grread acedGrRead
#define ads_grtext acedGrText
#define ads_grvecs acedGrVecs
#define ads_grclear acedGrClear
#define ads_handent acdbHandEnt
#define ads_help acedHelp
#define ads_initget acedInitGet
#define ads_inters acdbInters
#define ads_invoke acedInvoke
#define ads_isalnum acutIsAlNum
#define ads_isalpha acutIsAlpha
#define ads_iscntrl acutIsCntrl
#define ads_isdigit acutIsDigit
#define ads_isgraph acutIsGraph
#define ads_islower acutIsLower
#define ads_isprint acutIsPrint
#define ads_ispunct acutIsPunct
#define ads_isspace acutIsSpace
#define ads_isupper acutIsUpper
#define ads_isxdigit acutIsXDigit
#define ads_malloc acad_malloc
#define ads_menucmd acedMenuCmd
#define ads_namedobjdict acdbNamedObjDict
#define ads_nentsel acedNEntSel
#define ads_nentselp acedNEntSelP
#define ads_newrb acutNewRb
#define ads_osnap acedOsnap
#define ads_polar acutPolar
#define ads_printf acutPrintf
#define ads_prompt acedPrompt
#define ads_putsym acedPutSym
#define ads_realloc acad_realloc
#define ads_redraw acedRedraw
#define ads_regapp acdbRegApp
#define ads_regfunc acedRegFunc
#define ads_relrb acutRelRb
#define ads_retint acedRetInt
#define ads_retlist acedRetList
#define ads_retname acedRetName
#define ads_retnil acedRetNil
#define ads_retpoint acedRetPoint
#define ads_retreal acedRetReal
#define ads_retstr acedRetStr
#define ads_rett acedRetT
#define ads_retval acedRetVal
#define ads_retvoid acedRetVoid
#define ads_rtos acdbRToS
#define ads_setcfg acedSetCfg
#define ads_setenv acedSetEnv
#define ads_setfunhelp acedSetFunHelp
#define ads_setvar acedSetVar
#define ads_setview acedSetView
#define ads_snvalid acdbSNValid
#define ads_ssadd acedSSAdd
#define ads_ssdel acedSSDel
#define ads_ssfree acedSSFree
#define ads_ssget acedSSGet
#define ads_ssgetfirst acedSSGetFirst
#define ads_ssGetKwordCallbackPtr acedSSGetKwordCallbackPtr
#define ads_ssGetOtherCallbackPtr acedSSGetOtherCallbackPtr
#define ads_sslength acedSSLength
#define ads_ssmemb acedSSMemb
#define ads_ssname acedSSName
#define ads_ssnamex acedSSNameX
#define ads_sssetfirst acedSSSetFirst
#define ads_ssSetKwordCallbackPtr acedSSSetKwordCallbackPtr
#define ads_ssSetOtherCallbackPtr acedSSSetOtherCallbackPtr
#define ads_strdup acad__strdup
#define ads_tablet acedTablet
#define ads_tblnext acdbTblNext
#define ads_tblobjname acdbTblObjName
#define ads_tblsearch acdbTblSearch
#define ads_textbox acedTextBox
#define ads_textpage acedTextPage
#define ads_textscr acedTextScr
#define ads_tolower acutToLower
#define ads_toupper acutToUpper
#define ads_trans acedTrans
#define ads_undef acedUndef
#define ads_update acedUpdate
#define ads_usrbrk acedUsrBrk
#define ads_vports acedVports
#define ads_wcmatch acutWcMatch
#define ads_xdroom acdbXdRoom
#define ads_xdsize acdbXdSize
#define ads_xformss acedXformSS
#define ads_xstrcase acdbXStrCase
#define ads_xstrsave acdbXStrSave
#define ads__msize acad__msize

#define ads_regappx(name,obs) acdbRegApp(name)
#define ads_name_clear(n) (n[0] = n[1] = 0)
#define ads_name_equal(n1,n2) (n1[0] == n2[0] && n1[1] == n2[1])
#define ads_name_nil(n) (0 == n[0] && 0 == n[1])
#ifdef __STDC__
#define ads_name_set(src,dest) (memcpy(dest,src,sizeof(ads_name)))
#define ads_point_set(src,dest) (memcpy(dest,src,sizeof(ads_point)))
#else
#define ads_name_set(src,dest) ((dest)[0]=(src)[0],(dest)[1]=(src)[1])
#define ads_point_set(src,dest) ((dest)[0]=(src)[0],(dest)[1]=(src)[1],(dest)[2]=(src)[2])
#endif

#endif //DISABLE_OLD_ADS_NAMES
