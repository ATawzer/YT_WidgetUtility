#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "YT_MessageQueueMessageWidget.generated.h"

UCLASS()
class YT_WIDGETUTILITY_API UYT_MessageQueueMessageWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UYT_MessageQueueMessageWidget(const FObjectInitializer& ObjectInitializer);
};
