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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GUIText
struct GUIText_t2411476300;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// HT_HatController
struct HT_HatController_t4117010450;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HT_GameController
struct  HT_GameController_t3986698183  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera HT_GameController::cam
	Camera_t189460977 * ___cam_2;
	// UnityEngine.GameObject[] HT_GameController::balls
	GameObjectU5BU5D_t3057952154* ___balls_3;
	// System.Int32 HT_GameController::timeLeft
	int32_t ___timeLeft_4;
	// UnityEngine.GUIText HT_GameController::timerText
	GUIText_t2411476300 * ___timerText_5;
	// UnityEngine.GameObject HT_GameController::gameOverText
	GameObject_t1756533147 * ___gameOverText_6;
	// UnityEngine.GameObject HT_GameController::restartButton
	GameObject_t1756533147 * ___restartButton_7;
	// UnityEngine.GameObject HT_GameController::splashScreen
	GameObject_t1756533147 * ___splashScreen_8;
	// UnityEngine.GameObject HT_GameController::startButton
	GameObject_t1756533147 * ___startButton_9;
	// HT_HatController HT_GameController::hatController
	HT_HatController_t4117010450 * ___hatController_10;
	// UnityEngine.GameObject[] HT_GameController::hats
	GameObjectU5BU5D_t3057952154* ___hats_11;
	// System.Single HT_GameController::maxWidth
	float ___maxWidth_12;
	// System.Boolean HT_GameController::counting
	bool ___counting_13;

public:
	inline static int32_t get_offset_of_cam_2() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___cam_2)); }
	inline Camera_t189460977 * get_cam_2() const { return ___cam_2; }
	inline Camera_t189460977 ** get_address_of_cam_2() { return &___cam_2; }
	inline void set_cam_2(Camera_t189460977 * value)
	{
		___cam_2 = value;
		Il2CppCodeGenWriteBarrier(&___cam_2, value);
	}

	inline static int32_t get_offset_of_balls_3() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___balls_3)); }
	inline GameObjectU5BU5D_t3057952154* get_balls_3() const { return ___balls_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_balls_3() { return &___balls_3; }
	inline void set_balls_3(GameObjectU5BU5D_t3057952154* value)
	{
		___balls_3 = value;
		Il2CppCodeGenWriteBarrier(&___balls_3, value);
	}

	inline static int32_t get_offset_of_timeLeft_4() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___timeLeft_4)); }
	inline int32_t get_timeLeft_4() const { return ___timeLeft_4; }
	inline int32_t* get_address_of_timeLeft_4() { return &___timeLeft_4; }
	inline void set_timeLeft_4(int32_t value)
	{
		___timeLeft_4 = value;
	}

	inline static int32_t get_offset_of_timerText_5() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___timerText_5)); }
	inline GUIText_t2411476300 * get_timerText_5() const { return ___timerText_5; }
	inline GUIText_t2411476300 ** get_address_of_timerText_5() { return &___timerText_5; }
	inline void set_timerText_5(GUIText_t2411476300 * value)
	{
		___timerText_5 = value;
		Il2CppCodeGenWriteBarrier(&___timerText_5, value);
	}

	inline static int32_t get_offset_of_gameOverText_6() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___gameOverText_6)); }
	inline GameObject_t1756533147 * get_gameOverText_6() const { return ___gameOverText_6; }
	inline GameObject_t1756533147 ** get_address_of_gameOverText_6() { return &___gameOverText_6; }
	inline void set_gameOverText_6(GameObject_t1756533147 * value)
	{
		___gameOverText_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_6, value);
	}

	inline static int32_t get_offset_of_restartButton_7() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___restartButton_7)); }
	inline GameObject_t1756533147 * get_restartButton_7() const { return ___restartButton_7; }
	inline GameObject_t1756533147 ** get_address_of_restartButton_7() { return &___restartButton_7; }
	inline void set_restartButton_7(GameObject_t1756533147 * value)
	{
		___restartButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___restartButton_7, value);
	}

	inline static int32_t get_offset_of_splashScreen_8() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___splashScreen_8)); }
	inline GameObject_t1756533147 * get_splashScreen_8() const { return ___splashScreen_8; }
	inline GameObject_t1756533147 ** get_address_of_splashScreen_8() { return &___splashScreen_8; }
	inline void set_splashScreen_8(GameObject_t1756533147 * value)
	{
		___splashScreen_8 = value;
		Il2CppCodeGenWriteBarrier(&___splashScreen_8, value);
	}

	inline static int32_t get_offset_of_startButton_9() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___startButton_9)); }
	inline GameObject_t1756533147 * get_startButton_9() const { return ___startButton_9; }
	inline GameObject_t1756533147 ** get_address_of_startButton_9() { return &___startButton_9; }
	inline void set_startButton_9(GameObject_t1756533147 * value)
	{
		___startButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___startButton_9, value);
	}

	inline static int32_t get_offset_of_hatController_10() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___hatController_10)); }
	inline HT_HatController_t4117010450 * get_hatController_10() const { return ___hatController_10; }
	inline HT_HatController_t4117010450 ** get_address_of_hatController_10() { return &___hatController_10; }
	inline void set_hatController_10(HT_HatController_t4117010450 * value)
	{
		___hatController_10 = value;
		Il2CppCodeGenWriteBarrier(&___hatController_10, value);
	}

	inline static int32_t get_offset_of_hats_11() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___hats_11)); }
	inline GameObjectU5BU5D_t3057952154* get_hats_11() const { return ___hats_11; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_hats_11() { return &___hats_11; }
	inline void set_hats_11(GameObjectU5BU5D_t3057952154* value)
	{
		___hats_11 = value;
		Il2CppCodeGenWriteBarrier(&___hats_11, value);
	}

	inline static int32_t get_offset_of_maxWidth_12() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___maxWidth_12)); }
	inline float get_maxWidth_12() const { return ___maxWidth_12; }
	inline float* get_address_of_maxWidth_12() { return &___maxWidth_12; }
	inline void set_maxWidth_12(float value)
	{
		___maxWidth_12 = value;
	}

	inline static int32_t get_offset_of_counting_13() { return static_cast<int32_t>(offsetof(HT_GameController_t3986698183, ___counting_13)); }
	inline bool get_counting_13() const { return ___counting_13; }
	inline bool* get_address_of_counting_13() { return &___counting_13; }
	inline void set_counting_13(bool value)
	{
		___counting_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
