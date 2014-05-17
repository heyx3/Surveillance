#pragma once

#include "Editor/Transactor.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphSchema.h"
#include "CanCameraSee.generated.h"


UCLASS()
class UCanCameraSee : public UEdGraphNode
{
    GENERATED_UCLASS_BODY()

        UFUNCTION(BlueprintPure, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Get whether the object was recently in the camera view", CompactNodeTitle = "CanCamSee", Keywords = "can camera see blueprint"), Category = Game)
        static bool CanCameraSee(UObject)
};