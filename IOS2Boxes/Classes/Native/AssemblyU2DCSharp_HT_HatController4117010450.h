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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HT_HatController
struct  HT_HatController_t4117010450  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera HT_HatController::cam
	Camera_t189460977 * ___cam_2;
	// System.Single HT_HatController::maxWidth
	float ___maxWidth_3;
	// System.Boolean HT_HatController::canControl
	bool ___canControl_4;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(HT_HatController_t4117010450, ___cam_2)); }
	inline Camera_t189460977 * get_cam_2() const { return ___cam_2; }
	inline Camera_t189460977 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(Camera_t189460977 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_2, value);
	}

	inline static int32_t get_offset_of_maxWidth_3() { return static_cast<int32_t>(offsetof(HT_HatController_t4117010450, ___maxWidth_3)); }
	inline float get_maxWidth_3() const { return ___maxWidth_3; }
	inline float* get_address_of_maxWidth_3() { return &___maxWidth_3; }
	inline void set_maxWidth_3(float value)
	{
		___maxWidth_3 = value;
	}

	inline static int32_t get_offset_of_canControl_4() { return static_cast<int32_t>(offsetof(HT_HatController_t4117010450, ___canControl_4)); }
	inline bool get_canControl_4() const { return ___canControl_4; }
	inline bool* get_address_of_canControl_4() { return &___canControl_4; }
	inline void set_canControl_4(bool value)
	{
		___canControl_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
