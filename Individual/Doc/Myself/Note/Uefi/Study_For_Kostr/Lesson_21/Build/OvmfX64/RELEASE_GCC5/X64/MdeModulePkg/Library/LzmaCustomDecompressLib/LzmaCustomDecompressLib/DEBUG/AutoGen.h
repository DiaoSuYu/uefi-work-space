/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_35194660_7421_44ad_9636_e44885f092d1
#define _AUTOGENH_35194660_7421_44ad_9636_e44885f092d1

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define STACK_COOKIE_VALUE 0xB507FF8DAD90F9F6ULL

// Guids
extern GUID gLzmaCustomDecompressGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS
EFIAPI
LzmaDecompressLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
