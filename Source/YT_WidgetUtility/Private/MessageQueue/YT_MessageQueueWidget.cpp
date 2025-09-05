#include "MessageQueue/YT_MessageQueueWidget.h"
#include "MessageQueue/YT_MessageQueueMessageWidget.h"

UYT_MessageQueueWidget::UYT_MessageQueueWidget(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    MessageWidgetClass = UYT_MessageQueueMessageWidget::StaticClass();
}
