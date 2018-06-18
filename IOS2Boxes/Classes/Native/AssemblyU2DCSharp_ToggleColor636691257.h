#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToggleColor
struct  ToggleColor_t636691257  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] ToggleColor::sprites
	SpriteU5BU5D_t3359083662* ___sprites_2;

public:
	inline static int32_t get_offset_of_sprites_2() { return static_cast<int32_t>(offsetof(ToggleColor_t636691257, ___sprites_2)); }
	inline SpriteU5BU5D_t3359083662* get_sprites_2() const { return ___sprites_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_sprites_2() { return &___sprites_2; }
	inline void set_sprites_2(SpriteU5BU5D_t3359083662* value)
	{
		___sprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___sprites_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
