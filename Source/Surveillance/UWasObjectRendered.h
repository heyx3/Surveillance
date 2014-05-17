#pragma once

#include "EdGraph/EdGraphNode.h"
#include "UWasObjectRendered.generated.h"

/**
 * Gets whether an actor has been rendered very recently.
 */
UCLASS()
class UUWasObjectRendered : public UEdGraphNode
{
	GENERATED_UCLASS_BODY()
	
    UFUNCTION(BlueprintPure, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Was Actor Rendered?", CompactNodeTitle = "Rendered?", Keywords = "was actor rendered"), Category = Game)
    static bool WasActorRendered(AActor * actor);
};