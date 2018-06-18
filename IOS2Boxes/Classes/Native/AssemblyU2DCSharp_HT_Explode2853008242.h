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
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1490986844;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HT_Explode
struct  HT_Explode_t2853008242  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject HT_Explode::explosion
	GameObject_t1756533147 * ___explosion_2;
	// UnityEngine.ParticleSystem[] HT_Explode::effects
	ParticleSystemU5BU5D_t1490986844* ___effects_3;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(HT_Explode_t2853008242, ___explosion_2)); }
	inline GameObject_t1756533147 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1756533147 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1756533147 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_2, value);
	}

	inline static int32_t get_offset_of_effects_3() { return static_cast<int32_t>(offsetof(HT_Explode_t2853008242, ___effects_3)); }
	inline ParticleSystemU5BU5D_t1490986844* get_effects_3() const { return ___effects_3; }
	inline ParticleSystemU5BU5D_t1490986844** get_address_of_effects_3() { return &___effects_3; }
	inline void set_effects_3(ParticleSystemU5BU5D_t1490986844* value)
	{
		___effects_3 = value;
		Il2CppCodeGenWriteBarrier(&___effects_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
