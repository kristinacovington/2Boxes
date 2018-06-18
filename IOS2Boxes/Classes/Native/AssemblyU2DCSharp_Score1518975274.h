#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t1518975274  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Score::scoreText
	Text_t356221433 * ___scoreText_2;
	// System.Int32 Score::ballValue
	int32_t ___ballValue_3;
	// System.Int32 Score::score
	int32_t ___score_4;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___scoreText_2)); }
	inline Text_t356221433 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t356221433 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t356221433 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}

	inline static int32_t get_offset_of_ballValue_3() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___ballValue_3)); }
	inline int32_t get_ballValue_3() const { return ___ballValue_3; }
	inline int32_t* get_address_of_ballValue_3() { return &___ballValue_3; }
	inline void set_ballValue_3(int32_t value)
	{
		___ballValue_3 = value;
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
