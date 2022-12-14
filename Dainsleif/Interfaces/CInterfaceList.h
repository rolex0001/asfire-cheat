#pragma once
#include "../pch.h"

#include "IBaseClientDll.h"
#include "IClientModeShared.h"
#include "IVEngineClient.h"
#include "ISurface.h"
#include "CInput.h"

#define PRINT_INTERFACE(inter) std::cout << #inter << ": " << "0x" << ##inter << "\n";

class CInterfaceList
{
public:
    void Initialize ( );
public:
    IBaseClientDll* client = nullptr;
    IClientModeShared* clientMode = nullptr;
    IVEngineClient* engine = nullptr;
    ISurface* surface = nullptr;
    CInput* input = nullptr;
private:
    using fnCreateInterface = void*(*) ( const char*, int* );
private:
    template < typename T >
    static T* GetInterface ( const fnCreateInterface createInterface, const std::string_view& version )
    {
        return static_cast< T* > ( createInterface ( version.data ( ), nullptr ) );
    }

    static fnCreateInterface GetModuleFactory ( const HMODULE mod )
    {
        return reinterpret_cast< fnCreateInterface > ( GetProcAddress ( mod, "CreateInterface" ) );
    }

    __forceinline void PrintInterfaces ( )
    {
        PRINT_INTERFACE(client);
        PRINT_INTERFACE(clientMode);
        PRINT_INTERFACE ( engine );
        PRINT_INTERFACE ( surface );
        PRINT_INTERFACE ( input );
    }
};

extern CInterfaceList g_csgo;
