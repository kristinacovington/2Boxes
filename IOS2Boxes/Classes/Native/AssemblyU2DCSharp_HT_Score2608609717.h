#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIText
struct GUIText_t2411476300;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HT_Score
struct  HT_Score_t2608609717  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GUIText HT_Score::scoreText
	GUIText_t2411476300 * ___scoreText_2;
	// System.Int32 HT_Score::ballValue
	int32_t ___ballValue_3;
	// System.Int32 HT_Score::score
	int32_t ___score_4;
	// UnityEngine.GameObject HT_Score::gameOverText
	GameObject_t1756533147 * ___gameOverText_5;
	// UnityEngine.GameObject HT_Score::restartButton
	GameObject_t1756533147 * ___restartButton_6;
	// UnityEngine.GUIText HT_Score::timerText
	GUIText_t2411476300 * ___timerText_7;
	// UnityEngine.Sprite[] HT_Score::sprites
	SpriteU5BU5D_t3359083662* ___sprites_8;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(HT_Score_t2608609717, ___scoreText_2)); }
	inline GUIText_t2411476300 * get_scoreText_2() const { return ___scoreText_2; }
	inline GUIText_t2411476300 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(GUIText_t2411476300 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_ballValue_3() { return static_cast<int32_t>(offsetof(HT_Score_t2608609717, ___ballValue_3)); }
	inline int32_t get_ballValue_3() const { return ___ballValue_3; }
	inline int32_t* get_address_of_ballValue_3() { return &___ballValue_3; }
	inline void set_ballValue_3(int32_t value)
	{
		___ballValue_3 = value;
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(HT_Score_t2608609717, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}

	inline static int32_t get_offset_of_gameOverText_5() { return static_cast<int32_t>(offsetof(HT_Score_t2608609717, ___gameOverText_5)); }
	inline GameObject_t1756533147 * get_gameOverText_5() const { return ___gameOverText_5; }
	inline GameObject_t1756533147 ** get_address_of_gameOverText_5() { return &___gameOverText_5; }
	inline void set_gameOverText_5(GameObject_t1756533147 * value)
	{
		___gameOverText_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverText_5, value);
	}

	inline static int32_t get_offset_of_restartButton_6() { return static_cast<int32_t>(offsetof(HT_Score_t2608609717, ___restartButton_6)); }
	inline GameObject_t1756533147 * get_restartButton_6() const { return ___restartButton_6; }
	inline GameObject_t1756533147 ** get_address_of_restartButton_6() { return &___restartButton_6; }
	inline void set_restartButton_6(GameObject_t1756533147 * value)
	{
		___restartButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___restartButton_6, value);
	}

	inline static int32_t get_offset_of_timerText_7() { return static_cast<int32_t>(offsetof(HT_Score_t2608609717, ___timerText_7)); }
	inline GUIText_t2411476300 * get_timerText_7() const { return ___timerText_7; }
	inline GUIText_t2411476300 ** get_address_of_timerText_7() { return &___timerText_7; }
	inline void set_timerText_7(GUIText_t2411476300 * value)
	{
		___timerText_7 = value;
		Il2CppCodeGenWriteBarrier(&___timerText_7, value);
	}

	inline static int32_t get_offset_of_sprites_8() { return static_cast<int32_t>(offsetof(HT_Score_t2608609717, ___sprites_8)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_8() const { return ___sprites_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_8() { return &___sprites_8; }
	inline void set_sprites_8(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_8 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
