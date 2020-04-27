# 1 "Middlewares/Third_Party/FreeRTOS/Source/croutine.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/croutine.c"
# 28 "Middlewares/Third_Party/FreeRTOS/Source/croutine.c"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 1
# 34 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 1 3 4
# 149 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4

# 149 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef int ptrdiff_t;
# 216 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 328 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef unsigned int wchar_t;
# 426 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 35 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 2
# 49 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stdint.h" 1 3 4
# 9 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stdint.h" 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 1 3 4
# 12 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 1 3 4







# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\features.h" 1 3 4
# 28 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\features.h" 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\_newlib_version.h" 1 3 4
# 29 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\features.h" 2 3 4
# 9 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 2 3 4
# 27 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 41 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 63 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 89 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 120 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 146 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 168 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 186 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 200 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\machine\\_default_types.h" 3 4
typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 13 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 2 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_intsup.h" 1 3 4
# 49 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_intsup.h" 3 4
       
       
       
       
       
       
       
# 201 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_intsup.h" 3 4
       
       
       
       
       
       
       
# 14 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 2 3 4
# 1 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_stdint.h" 1 3 4
# 20 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\sys\\_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 15 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 61 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 71 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 130 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long int intmax_t;
# 139 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\arm-none-eabi\\include\\stdint.h" 3 4
  typedef long long unsigned int uintmax_t;
# 10 "d:\\tool_chain\\gcc-arm-none-eabi\\5.4 2016q3\\lib\\gcc\\arm-none-eabi\\5.4.1\\include\\stdint.h" 2 3 4
# 50 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 2






# 1 "Inc/FreeRTOSConfig.h" 1
# 52 "Inc/FreeRTOSConfig.h"
  
# 52 "Inc/FreeRTOSConfig.h"
 extern uint32_t SystemCoreClock;
# 57 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 2


# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/projdefs.h" 1
# 35 "Middlewares/Third_Party/FreeRTOS/Source/include/projdefs.h"
typedef void (*TaskFunction_t)( void * );
# 60 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 2


# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h" 1
# 45 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/deprecated_definitions.h" 1
# 46 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h" 2






# 1 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h" 1
# 55 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
typedef uint32_t StackType_t;
typedef long BaseType_t;
typedef unsigned long UBaseType_t;





 typedef uint32_t TickType_t;
# 97 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
extern void vPortEnterCritical( void );
extern void vPortExitCritical( void );
# 117 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
 extern void vPortSuppressTicksAndSleep( TickType_t xExpectedIdleTime );
# 156 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
 void vPortValidateInterruptPriority( void );
# 169 "Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F/portmacro.h"
inline __attribute__(( always_inline)) static BaseType_t xPortIsInsideInterrupt( void )
{
uint32_t ulCurrentInterrupt;
BaseType_t xReturn;


 __asm volatile( "mrs %0, ipsr" : "=r"( ulCurrentInterrupt ) :: "memory" );

 if( ulCurrentInterrupt == 0 )
 {
  xReturn = ( ( BaseType_t ) 0 );
 }
 else
 {
  xReturn = ( ( BaseType_t ) 1 );
 }

 return xReturn;
}



inline __attribute__(( always_inline)) static void vPortRaiseBASEPRI( void )
{
uint32_t ulNewBASEPRI;

 __asm volatile
 (
  "	mov %0, %1												\n"
  "	msr basepri, %0											\n"
  "	isb														\n"
  "	dsb														\n"
  :"=r" (ulNewBASEPRI) : "i" ( ( 5 << (8 - 4) ) ) : "memory"
 );
}



inline __attribute__(( always_inline)) static uint32_t ulPortRaiseBASEPRI( void )
{
uint32_t ulOriginalBASEPRI, ulNewBASEPRI;

 __asm volatile
 (
  "	mrs %0, basepri											\n"
  "	mov %1, %2												\n"
  "	msr basepri, %1											\n"
  "	isb														\n"
  "	dsb														\n"
  :"=r" (ulOriginalBASEPRI), "=r" (ulNewBASEPRI) : "i" ( ( 5 << (8 - 4) ) ) : "memory"
 );



 return ulOriginalBASEPRI;
}


inline __attribute__(( always_inline)) static void vPortSetBASEPRI( uint32_t ulNewMaskValue )
{
 __asm volatile
 (
  "	msr basepri, %0	" :: "r" ( ulNewMaskValue ) : "memory"
 );
}
# 53 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h" 2
# 91 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/mpu_wrappers.h" 1
# 92 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h" 2
# 102 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h"
 StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters ) ;



typedef struct HeapRegion
{
 uint8_t *pucStartAddress;
 size_t xSizeInBytes;
} HeapRegion_t;
# 123 "Middlewares/Third_Party/FreeRTOS/Source/include/portable.h"
void vPortDefineHeapRegions( const HeapRegion_t * const pxHeapRegions ) ;





void *pvPortMalloc( size_t xSize ) ;
void vPortFree( void *pv ) ;
void vPortInitialiseBlocks( void ) ;
size_t xPortGetFreeHeapSize( void ) ;
size_t xPortGetMinimumEverFreeHeapSize( void ) ;





BaseType_t xPortStartScheduler( void ) ;






void vPortEndScheduler( void ) ;
# 63 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h" 2
# 948 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
struct xSTATIC_LIST_ITEM
{
 TickType_t xDummy1;
 void *pvDummy2[ 4 ];
};
typedef struct xSTATIC_LIST_ITEM StaticListItem_t;


struct xSTATIC_MINI_LIST_ITEM
{
 TickType_t xDummy1;
 void *pvDummy2[ 2 ];
};
typedef struct xSTATIC_MINI_LIST_ITEM StaticMiniListItem_t;


typedef struct xSTATIC_LIST
{
 UBaseType_t uxDummy1;
 void *pvDummy2;
 StaticMiniListItem_t xDummy3;
} StaticList_t;
# 984 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_TCB
{
 void *pxDummy1;



 StaticListItem_t xDummy3[ 2 ];
 UBaseType_t uxDummy5;
 void *pxDummy6;
 uint8_t ucDummy7[ ( 16 ) ];







  UBaseType_t uxDummy10[ 2 ];


  UBaseType_t uxDummy12[ 2 ];
# 1019 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
  uint32_t ulDummy18;
  uint8_t ucDummy19;


  uint8_t uxDummy20;






} StaticTask_t;
# 1046 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_QUEUE
{
 void *pvDummy1[ 3 ];

 union
 {
  void *pvDummy2;
  UBaseType_t uxDummy2;
 } u;

 StaticList_t xDummy3[ 2 ];
 UBaseType_t uxDummy4[ 3 ];
 uint8_t ucDummy5[ 2 ];


  uint8_t ucDummy6;







  UBaseType_t uxDummy8;
  uint8_t ucDummy9;


} StaticQueue_t;
typedef StaticQueue_t StaticSemaphore_t;
# 1090 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_EVENT_GROUP
{
 TickType_t xDummy1;
 StaticList_t xDummy2;


  UBaseType_t uxDummy3;



   uint8_t ucDummy4;


} StaticEventGroup_t;
# 1119 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_TIMER
{
 void *pvDummy1;
 StaticListItem_t xDummy2;
 TickType_t xDummy3;
 UBaseType_t uxDummy4;
 void *pvDummy5[ 2 ];

  UBaseType_t uxDummy6;



  uint8_t ucDummy7;


} StaticTimer_t;
# 1150 "Middlewares/Third_Party/FreeRTOS/Source/include/FreeRTOS.h"
typedef struct xSTATIC_STREAM_BUFFER
{
 size_t uxDummy1[ 4 ];
 void * pvDummy2[ 3 ];
 uint8_t ucDummy3;

  UBaseType_t uxDummy4;

} StaticStreamBuffer_t;


typedef StaticStreamBuffer_t StaticMessageBuffer_t;
# 29 "Middlewares/Third_Party/FreeRTOS/Source/croutine.c" 2
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h" 1
# 36 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h" 1
# 139 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
struct xLIST_ITEM
{

 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
 void * pvOwner;
 void * pvContainer;

};
typedef struct xLIST_ITEM ListItem_t;

struct xMINI_LIST_ITEM
{

 TickType_t xItemValue;
 struct xLIST_ITEM * pxNext;
 struct xLIST_ITEM * pxPrevious;
};
typedef struct xMINI_LIST_ITEM MiniListItem_t;




typedef struct xLIST
{

 volatile UBaseType_t uxNumberOfItems;
 ListItem_t * pxIndex;
 MiniListItem_t xListEnd;

} List_t;
# 344 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
void vListInitialise( List_t * const pxList ) ;
# 355 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
void vListInitialiseItem( ListItem_t * const pxItem ) ;
# 368 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
void vListInsert( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
# 389 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
void vListInsertEnd( List_t * const pxList, ListItem_t * const pxNewListItem ) ;
# 404 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h"
UBaseType_t uxListRemove( ListItem_t * const pxItemToRemove ) ;
# 37 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h" 2
# 61 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
typedef void * TaskHandle_t;





typedef BaseType_t (*TaskHookFunction_t)( void * );


typedef enum
{
 eRunning = 0,
 eReady,
 eBlocked,
 eSuspended,
 eDeleted,
 eInvalid
} eTaskState;


typedef enum
{
 eNoAction = 0,
 eSetBits,
 eIncrement,
 eSetValueWithOverwrite,
 eSetValueWithoutOverwrite
} eNotifyAction;




typedef struct xTIME_OUT
{
 BaseType_t xOverflowCount;
 TickType_t xTimeOnEntering;
} TimeOut_t;




typedef struct xMEMORY_REGION
{
 void *pvBaseAddress;
 uint32_t ulLengthInBytes;
 uint32_t ulParameters;
} MemoryRegion_t;




typedef struct xTASK_PARAMETERS
{
 TaskFunction_t pvTaskCode;
 const char * const pcName;
 uint16_t usStackDepth;
 void *pvParameters;
 UBaseType_t uxPriority;
 StackType_t *puxStackBuffer;
 MemoryRegion_t xRegions[ 1 ];



} TaskParameters_t;



typedef struct xTASK_STATUS
{
 TaskHandle_t xHandle;
 const char *pcTaskName;
 UBaseType_t xTaskNumber;
 eTaskState eCurrentState;
 UBaseType_t uxCurrentPriority;
 UBaseType_t uxBasePriority;
 uint32_t ulRunTimeCounter;
 StackType_t *pxStackBase;
 uint16_t usStackHighWaterMark;
} TaskStatus_t;


typedef enum
{
 eAbortSleep = 0,
 eStandardSleep,
 eNoTasksWaitingTimeout
} eSleepModeStatus;
# 321 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
 BaseType_t xTaskCreate( TaskFunction_t pxTaskCode,
       const char * const pcName,
       const uint16_t usStackDepth,
       void * const pvParameters,
       UBaseType_t uxPriority,
       TaskHandle_t * const pxCreatedTask ) ;
# 437 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
 TaskHandle_t xTaskCreateStatic( TaskFunction_t pxTaskCode,
         const char * const pcName,
         const uint32_t ulStackDepth,
         void * const pvParameters,
         UBaseType_t uxPriority,
         StackType_t * const puxStackBuffer,
         StaticTask_t * const pxTaskBuffer ) ;
# 656 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskAllocateMPURegions( TaskHandle_t xTask, const MemoryRegion_t * const pxRegions ) ;
# 697 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskDelete( TaskHandle_t xTaskToDelete ) ;
# 749 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskDelay( const TickType_t xTicksToDelay ) ;
# 808 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskDelayUntil( TickType_t * const pxPreviousWakeTime, const TickType_t xTimeIncrement ) ;
# 833 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskAbortDelay( TaskHandle_t xTask ) ;
# 880 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
UBaseType_t uxTaskPriorityGet( TaskHandle_t xTask ) ;







UBaseType_t uxTaskPriorityGetFromISR( TaskHandle_t xTask ) ;
# 906 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
eTaskState eTaskGetState( TaskHandle_t xTask ) ;
# 962 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskGetInfo( TaskHandle_t xTask, TaskStatus_t *pxTaskStatus, BaseType_t xGetFreeStackSpace, eTaskState eState ) ;
# 1004 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskPrioritySet( TaskHandle_t xTask, UBaseType_t uxNewPriority ) ;
# 1055 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskSuspend( TaskHandle_t xTaskToSuspend ) ;
# 1104 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskResume( TaskHandle_t xTaskToResume ) ;
# 1133 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskResumeFromISR( TaskHandle_t xTaskToResume ) ;
# 1166 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskStartScheduler( void ) ;
# 1222 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskEndScheduler( void ) ;
# 1273 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskSuspendAll( void ) ;
# 1327 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskResumeAll( void ) ;
# 1342 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
TickType_t xTaskGetTickCount( void ) ;
# 1358 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
TickType_t xTaskGetTickCountFromISR( void ) ;
# 1372 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
UBaseType_t uxTaskGetNumberOfTasks( void ) ;
# 1385 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
char *pcTaskGetName( TaskHandle_t xTaskToQuery ) ;
# 1401 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
TaskHandle_t xTaskGetHandle( const char *pcNameToQuery ) ;
# 1422 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
UBaseType_t uxTaskGetStackHighWaterMark( TaskHandle_t xTask ) ;
# 1475 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskCallApplicationTaskHook( TaskHandle_t xTask, void *pvParameter ) ;
# 1484 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
TaskHandle_t xTaskGetIdleTaskHandle( void ) ;
# 1583 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
UBaseType_t uxTaskGetSystemState( TaskStatus_t * const pxTaskStatusArray, const UBaseType_t uxArraySize, uint32_t * const pulTotalRunTime ) ;
# 1630 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskList( char * pcWriteBuffer ) ;
# 1684 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskGetRunTimeStats( char *pcWriteBuffer ) ;
# 1765 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskGenericNotify( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue ) ;
# 1856 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskGenericNotifyFromISR( TaskHandle_t xTaskToNotify, uint32_t ulValue, eNotifyAction eAction, uint32_t *pulPreviousNotificationValue, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 1933 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskNotifyWait( uint32_t ulBitsToClearOnEntry, uint32_t ulBitsToClearOnExit, uint32_t *pulNotificationValue, TickType_t xTicksToWait ) ;
# 2034 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskNotifyGiveFromISR( TaskHandle_t xTaskToNotify, BaseType_t *pxHigherPriorityTaskWoken ) ;
# 2103 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
uint32_t ulTaskNotifyTake( BaseType_t xClearCountOnExit, TickType_t xTicksToWait ) ;
# 2119 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskNotifyStateClear( TaskHandle_t xTask );
# 2140 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskIncrementTick( void ) ;
# 2173 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskPlaceOnEventList( List_t * const pxEventList, const TickType_t xTicksToWait ) ;
void vTaskPlaceOnUnorderedEventList( List_t * pxEventList, const TickType_t xItemValue, const TickType_t xTicksToWait ) ;
# 2187 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskPlaceOnEventListRestricted( List_t * const pxEventList, TickType_t xTicksToWait, const BaseType_t xWaitIndefinitely ) ;
# 2213 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
BaseType_t xTaskRemoveFromEventList( const List_t * const pxEventList ) ;
void vTaskRemoveFromUnorderedEventList( ListItem_t * pxEventListItem, const TickType_t xItemValue ) ;
# 2224 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskSwitchContext( void ) ;





TickType_t uxTaskResetEventItemValue( void ) ;




TaskHandle_t xTaskGetCurrentTaskHandle( void ) ;




void vTaskSetTimeOutState( TimeOut_t * const pxTimeOut ) ;





BaseType_t xTaskCheckForTimeOut( TimeOut_t * const pxTimeOut, TickType_t * const pxTicksToWait ) ;





void vTaskMissedYield( void ) ;





BaseType_t xTaskGetSchedulerState( void ) ;





BaseType_t xTaskPriorityInherit( TaskHandle_t const pxMutexHolder ) ;





BaseType_t xTaskPriorityDisinherit( TaskHandle_t const pxMutexHolder ) ;
# 2280 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskPriorityDisinheritAfterTimeout( TaskHandle_t const pxMutexHolder, UBaseType_t uxHighestPriorityWaitingTask ) ;




UBaseType_t uxTaskGetTaskNumber( TaskHandle_t xTask ) ;





void vTaskSetTaskNumber( TaskHandle_t xTask, const UBaseType_t uxHandle ) ;
# 2301 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
void vTaskStepTick( const TickType_t xTicksToJump ) ;
# 2317 "Middlewares/Third_Party/FreeRTOS/Source/include/task.h"
eSleepModeStatus eTaskConfirmSleepModeStatus( void ) ;





void *pvTaskIncrementMutexHeldCount( void ) ;





void vTaskInternalSetTimeOutState( TimeOut_t * const pxTimeOut ) ;
# 30 "Middlewares/Third_Party/FreeRTOS/Source/croutine.c" 2
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/croutine.h" 1
# 35 "Middlewares/Third_Party/FreeRTOS/Source/include/croutine.h"
# 1 "Middlewares/Third_Party/FreeRTOS/Source/include/list.h" 1
# 36 "Middlewares/Third_Party/FreeRTOS/Source/include/croutine.h" 2
# 44 "Middlewares/Third_Party/FreeRTOS/Source/include/croutine.h"
typedef void * CoRoutineHandle_t;


typedef void (*crCOROUTINE_CODE)( CoRoutineHandle_t, UBaseType_t );

typedef struct corCoRoutineControlBlock
{
 crCOROUTINE_CODE pxCoRoutineFunction;
 ListItem_t xGenericListItem;
 ListItem_t xEventListItem;
 UBaseType_t uxPriority;
 UBaseType_t uxIndex;
 uint16_t uxState;
} CRCB_t;
# 131 "Middlewares/Third_Party/FreeRTOS/Source/include/croutine.h"
BaseType_t xCoRoutineCreate( crCOROUTINE_CODE pxCoRoutineCode, UBaseType_t uxPriority, UBaseType_t uxIndex );
# 173 "Middlewares/Third_Party/FreeRTOS/Source/include/croutine.h"
void vCoRoutineSchedule( void );
# 705 "Middlewares/Third_Party/FreeRTOS/Source/include/croutine.h"
void vCoRoutineAddToDelayedList( TickType_t xTicksToDelay, List_t *pxEventList );
# 714 "Middlewares/Third_Party/FreeRTOS/Source/include/croutine.h"
BaseType_t xCoRoutineRemoveFromEventList( const List_t *pxEventList );
# 31 "Middlewares/Third_Party/FreeRTOS/Source/croutine.c" 2
