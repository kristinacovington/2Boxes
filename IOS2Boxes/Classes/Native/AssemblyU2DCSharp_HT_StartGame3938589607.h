﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HT_GameController
struct HT_GameController_t3986698183;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HT_StartGame
struct  HT_StartGame_t3938589607  : public MonoBehaviour_t1158329972
{
public:
	// HT_GameController HT_StartGame::gameController
	HT_GameController_t3986698183 * ___gameController_2;

public:
	inline static int32_t get_offset_of_gameController_2() { return static_cast<int32_t>(offsetof(HT_StartGame_t3938589607, ___gameController_2)); }
	inline HT_GameController_t3986698183 * get_gameController_2() const { return ___gameController_2; }
	inline HT_GameController_t3986698183 ** get_address_of_gameController_2() { return &___gameController_2; }
	inline void set_gameController_2(HT_GameController_t3986698183 * value)
	{
		___gameController_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameController_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
