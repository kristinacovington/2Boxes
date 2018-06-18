#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera GameController::cam
	Camera_t189460977 * ___cam_2;
	// UnityEngine.GameObject GameController::ball
	GameObject_t1756533147 * ___ball_3;
	// System.Single GameController::maxHeight
	float ___maxHeight_4;
	// System.Single GameController::timer
	float ___timer_5;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___cam_2)); }
	inline Camera_t189460977 * get_cam_2() const { return ___cam_2; }
	inline Camera_t189460977 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(Camera_t189460977 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_2, value);
	}

	inline static int32_t get_offset_of_ball_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___ball_3)); }
	inline GameObject_t1756533147 * get_ball_3() const { return ___ball_3; }
	inline GameObject_t1756533147 ** get_address_of_ball_3() { return &___ball_3; }
	inline void set_ball_3(GameObject_t1756533147 * value)
	{
		___ball_3 = value;
		Il2CppCodeGenWriteBarrier(&___ball_3, value);
	}

	inline static int32_t get_offset_of_maxHeight_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___maxHeight_4)); }
	inline float get_maxHeight_4() const { return ___maxHeight_4; }
	inline float* get_address_of_maxHeight_4() { return &___maxHeight_4; }
	inline void set_maxHeight_4(float value)
	{
		___maxHeight_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
