#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "YT_MessageQueueWidget.generated.h"

class UYT_MessageQueueMessageWidget;

UCLASS()
class YT_WIDGETUTILITY_API UYT_MessageQueueWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UYT_MessageQueueWidget(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TSubclassOf<UYT_MessageQueueMessageWidget> MessageWidgetClass;
};
