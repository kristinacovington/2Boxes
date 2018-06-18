#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HT_SetParticleSortingLayer
struct  HT_SetParticleSortingLayer_t1119579160  : public MonoBehaviour_t1158329972
{
public:
	// System.String HT_SetParticleSortingLayer::sortingLayerName
	String_t* ___sortingLayerName_2;
	// System.Int32 HT_SetParticleSortingLayer::sortingOrder
	int32_t ___sortingOrder_3;

public:
	inline static int32_t get_offset_of_sortingLayerName_2() { return static_cast<int32_t>(offsetof(HT_SetParticleSortingLayer_t1119579160, ___sortingLayerName_2)); }
	inline String_t* get_sortingLayerName_2() const { return ___sortingLayerName_2; }
	inline String_t** get_address_of_sortingLayerName_2() { return &___sortingLayerName_2; }
	inline void set_sortingLayerName_2(String_t* value)
	{
		___sortingLayerName_2 = value;
		Il2CppCodeGenWriteBarrier(&___sortingLayerName_2, value);
	}

	inline static int32_t get_offset_of_sortingOrder_3() { return static_cast<int32_t>(offsetof(HT_SetParticleSortingLayer_t1119579160, ___sortingOrder_3)); }
	inline int32_t get_sortingOrder_3() const { return ___sortingOrder_3; }
	inline int32_t* get_address_of_sortingOrder_3() { return &___sortingOrder_3; }
	inline void set_sortingOrder_3(int32_t value)
	{
		___sortingOrder_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
