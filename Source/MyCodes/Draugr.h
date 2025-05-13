#pragma once

#include "coremini"
#include "GameFramework/Character.h"
#include "Draugr.h"
#include "EnemyState.generated.h"
#include "../../../../../../../Program Files/Epic Games/UE_5.4/Engine/Source/Runtime/Core/Public/HAL/Platform.h"


class Draugr


enum class EEnemyState : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Patrolling UMETA(DisplayName = "Patrolling"),
	Attacking UMETA(DisplayName = "Attacking"),
	Staggered UMETA(DisplayName = "Staggered"),
	Dead UMETA(DisplayName = "Dead")

};
D