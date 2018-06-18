#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeColor
struct  ChangeColor_t2618434533  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ChangeColor::timer
	float ___timer_2;
	// UnityEngine.GameObject ChangeColor::ball
	GameObject_t1756533147 * ___ball_3;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(ChangeColor_t2618434533, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_ball_3() { return static_cast<int32_t>(offsetof(ChangeColor_t2618434533, ___ball_3)); }
	inline GameObject_t1756533147 * get_ball_3() const { return ___ball_3; }
	inline GameObject_t1756533147 ** get_address_of_ball_3() { return &___ball_3; }
	inline void set_ball_3(GameObject_t1756533147 * value)
	{
		___ball_3 = value;
		Il2CppCodeGenWriteBarrier(&___ball_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
