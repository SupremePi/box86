/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.0.10) *
 *******************************************************************/
#ifndef __wrappedsdl2TYPES_H_
#define __wrappedsdl2TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef int32_t (*iFv_t)(void);
typedef int32_t (*iFp_t)(void*);
typedef int32_t (*iFJ_t)(SDL_JoystickGUID);
typedef int64_t (*IFp_t)(void*);
typedef uint32_t (*uFp_t)(void*);
typedef uint64_t (*UFp_t)(void*);
typedef void* (*pFv_t)(void);
typedef void* (*pFp_t)(void*);
typedef SDL_JoystickGUID (*JFi_t)(int32_t);
typedef SDL_JoystickGUID (*JFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef void (*vFpV_t)(void*, ...);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef int32_t (*iFWW_t)(uint16_t, uint16_t);
typedef int32_t (*iFpi_t)(void*, int32_t);
typedef int32_t (*iFpp_t)(void*, void*);
typedef uint32_t (*uFpW_t)(void*, uint16_t);
typedef uint32_t (*uFpu_t)(void*, uint32_t);
typedef uint32_t (*uFpU_t)(void*, uint64_t);
typedef void* (*pFpi_t)(void*, int32_t);
typedef void* (*pFpp_t)(void*, void*);
typedef SDL_GameControllerButtonBind (*gFpi_t)(void*, int32_t);
typedef void (*vFipV_t)(int32_t, void*, ...);
typedef int32_t (*iFupp_t)(uint32_t, void*, void*);
typedef int32_t (*iFppi_t)(void*, void*, int32_t);
typedef int64_t (*IFpIi_t)(void*, int64_t, int32_t);
typedef void* (*pFupp_t)(uint32_t, void*, void*);
typedef void* (*pFppi_t)(void*, void*, int32_t);
typedef void* (*pFppp_t)(void*, void*, void*);
typedef void (*vFJppp_t)(SDL_JoystickGUID, void*, void*, void*);
typedef int32_t (*iFpupV_t)(void*, uint32_t, void*, ...);
typedef uint32_t (*uFppuu_t)(void*, void*, uint32_t, uint32_t);
typedef int32_t (*iFpippi_t)(void*, int32_t, void*, void*, int32_t);
typedef void* (*pFpippp_t)(void*, int32_t, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(SDL_UnloadObject, vFp_t) \
	GO(SDL_RWclose, iFp_t) \
	GO(SDL_RemoveTimer, iFp_t) \
	GO(SDL_SaveAllDollarTemplates, iFp_t) \
	GO(SDL_IsJoystickHIDAPI, iFJ_t) \
	GO(SDL_IsJoystickXInput, iFJ_t) \
	GO(SDL_RWtell, IFp_t) \
	GO(SDL_ReadBE16, uFp_t) \
	GO(SDL_ReadBE32, uFp_t) \
	GO(SDL_ReadLE16, uFp_t) \
	GO(SDL_ReadLE32, uFp_t) \
	GO(SDL_ReadU8, uFp_t) \
	GO(SDL_ReadBE64, UFp_t) \
	GO(SDL_ReadLE64, UFp_t) \
	GO(SDL_GetBasePath, pFv_t) \
	GO(SDL_Vulkan_GetVkGetInstanceProcAddr, pFv_t) \
	GO(SDL_GL_GetProcAddress, pFp_t) \
	GO(SDL_LoadObject, pFp_t) \
	GO(SDL_JoystickGetDeviceGUID, JFi_t) \
	GO(SDL_JoystickGetGUID, JFp_t) \
	GO(SDL_JoystickGetGUIDFromString, JFp_t) \
	GO(SDL_AddEventWatch, vFpp_t) \
	GO(SDL_DelEventWatch, vFpp_t) \
	GO(SDL_LogGetOutputFunction, vFpp_t) \
	GO(SDL_LogSetOutputFunction, vFpp_t) \
	GO(SDL_SetEventFilter, vFpp_t) \
	GO(SDL_Log, vFpV_t) \
	GO(SDL_SaveDollarTemplate, iFip_t) \
	GO(SDL_IsJoystickNintendoSwitchPro, iFWW_t) \
	GO(SDL_IsJoystickPS4, iFWW_t) \
	GO(SDL_IsJoystickSteamController, iFWW_t) \
	GO(SDL_IsJoystickXbox360, iFWW_t) \
	GO(SDL_IsJoystickXboxOne, iFWW_t) \
	GO(SDL_GameControllerAddMappingsFromRW, iFpi_t) \
	GO(SDL_GetEventFilter, iFpp_t) \
	GO(SDL_OpenAudio, iFpp_t) \
	GO(SDL_WriteBE16, uFpW_t) \
	GO(SDL_WriteLE16, uFpW_t) \
	GO(SDL_WriteBE32, uFpu_t) \
	GO(SDL_WriteLE32, uFpu_t) \
	GO(SDL_WriteU8, uFpu_t) \
	GO(SDL_WriteBE64, uFpU_t) \
	GO(SDL_WriteLE64, uFpU_t) \
	GO(SDL_LoadBMP_RW, pFpi_t) \
	GO(SDL_RWFromConstMem, pFpi_t) \
	GO(SDL_RWFromFP, pFpi_t) \
	GO(SDL_RWFromMem, pFpi_t) \
	GO(SDL_LoadFunction, pFpp_t) \
	GO(SDL_RWFromFile, pFpp_t) \
	GO(SDL_GameControllerGetBindForAxis, gFpi_t) \
	GO(SDL_GameControllerGetBindForButton, gFpi_t) \
	GO(SDL_LogCritical, vFipV_t) \
	GO(SDL_LogDebug, vFipV_t) \
	GO(SDL_LogError, vFipV_t) \
	GO(SDL_LogInfo, vFipV_t) \
	GO(SDL_LogVerbose, vFipV_t) \
	GO(SDL_LogWarn, vFipV_t) \
	GO(SDL_TLSSet, iFupp_t) \
	GO(SDL_SaveBMP_RW, iFppi_t) \
	GO(SDL_RWseek, IFpIi_t) \
	GO(SDL_AddTimer, pFupp_t) \
	GO(SDL_LoadFile_RW, pFppi_t) \
	GO(SDL_CreateThread, pFppp_t) \
	GO(SDL_GetJoystickGUIDInfo, vFJppp_t) \
	GO(SDL_snprintf, iFpupV_t) \
	GO(SDL_vsnprintf, iFpupV_t) \
	GO(SDL_RWread, uFppuu_t) \
	GO(SDL_RWwrite, uFppuu_t) \
	GO(SDL_OpenAudioDevice, iFpippi_t) \
	GO(SDL_LoadWAV_RW, pFpippp_t)

#endif // __wrappedsdl2TYPES_H_
