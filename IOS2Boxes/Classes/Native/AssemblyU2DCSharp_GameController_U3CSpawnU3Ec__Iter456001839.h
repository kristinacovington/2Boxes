﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// GameController
struct GameController_t3607102586;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<Spawn>c__Iterator0
struct  U3CSpawnU3Ec__Iterator0_t456001839  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 GameController/<Spawn>c__Iterator0::<spawnPosition>__0
	Vector3_t2243707580  ___U3CspawnPositionU3E__0_0;
	// UnityEngine.Quaternion GameController/<Spawn>c__Iterator0::<spawnRotation>__1
	Quaternion_t4030073918  ___U3CspawnRotationU3E__1_1;
	// UnityEngine.GameObject GameController/<Spawn>c__Iterator0::<tempBall>__2
	GameObject_t1756533147 * ___U3CtempBallU3E__2_2;
	// UnityEngine.Color GameController/<Spawn>c__Iterator0::<newColor>__3
	Color_t2020392075  ___U3CnewColorU3E__3_3;
	// GameController GameController/<Spawn>c__Iterator0::$this
	GameController_t3607102586 * ___U24this_4;
	// System.Object GameController/<Spawn>c__Iterator0::$current
	Il2CppObject * ___U24current_5;
	// System.Boolean GameController/<Spawn>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 GameController/<Spawn>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CspawnPositionU3E__0_0() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ec__Iterator0_t456001839, ___U3CspawnPositionU3E__0_0)); }
	inline Vector3_t2243707580  get_U3CspawnPositionU3E__0_0() const { return ___U3CspawnPositionU3E__0_0; }
	inline Vector3_t2243707580 * get_address_of_U3CspawnPositionU3E__0_0() { return &___U3CspawnPositionU3E__0_0; }
	inline void set_U3CspawnPositionU3E__0_0(Vector3_t2243707580  value)
	{
		___U3CspawnPositionU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CspawnRotationU3E__1_1() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ec__Iterator0_t456001839, ___U3CspawnRotationU3E__1_1)); }
	inline Quaternion_t4030073918  get_U3CspawnRotationU3E__1_1() const { return ___U3CspawnRotationU3E__1_1; }
	inline Quaternion_t4030073918 * get_address_of_U3CspawnRotationU3E__1_1() { return &___U3CspawnRotationU3E__1_1; }
	inline void set_U3CspawnRotationU3E__1_1(Quaternion_t4030073918  value)
	{
		___U3CspawnRotationU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U3CtempBallU3E__2_2() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ec__Iterator0_t456001839, ___U3CtempBallU3E__2_2)); }
	inline GameObject_t1756533147 * get_U3CtempBallU3E__2_2() const { return ___U3CtempBallU3E__2_2; }
	inline GameObject_t1756533147 ** get_address_of_U3CtempBallU3E__2_2() { return &___U3CtempBallU3E__2_2; }
	inline void set_U3CtempBallU3E__2_2(GameObject_t1756533147 * value)
	{
		___U3CtempBallU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtempBallU3E__2_2, value);
	}

	inline static int32_t get_offset_of_U3CnewColorU3E__3_3() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ec__Iterator0_t456001839, ___U3CnewColorU3E__3_3)); }
	inline Color_t2020392075  get_U3CnewColorU3E__3_3() const { return ___U3CnewColorU3E__3_3; }
	inline Color_t2020392075 * get_address_of_U3CnewColorU3E__3_3() { return &___U3CnewColorU3E__3_3; }
	inline void set_U3CnewColorU3E__3_3(Color_t2020392075  value)
	{
		___U3CnewColorU3E__3_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ec__Iterator0_t456001839, ___U24this_4)); }
	inline GameController_t3607102586 * get_U24this_4() const { return ___U24this_4; }
	inline GameController_t3607102586 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(GameController_t3607102586 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_4, value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ec__Iterator0_t456001839, ___U24current_5)); }
	inline Il2CppObject * get_U24current_5() const { return ___U24current_5; }
	inline Il2CppObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_5, value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ec__Iterator0_t456001839, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ec__Iterator0_t456001839, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
