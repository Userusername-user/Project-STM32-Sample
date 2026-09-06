# STM32 + FreeRTOS Embedded Project

面向嵌入式软件/STM32岗位的项目说明

一、项目简介
本项目基于 STM32 + FreeRTOS 构建嵌入式应用程序框架，采用实时操作系统进行任务划分与调度，将系统功能拆分为相互独立的任务，并预留 GPIO、UART 等外设控制与调试接口。
项目重点体现：
FreeRTOS 多任务创建与调度
任务周期运行与延时控制
STM32 HAL 初始化框架
UART 调试输出接口设计
嵌入式工程模块化组织
Git / GitHub 项目版本管理
二、核心功能
功能模块实现内容 
FreeRTOS 多任务使用 `xTaskCreate()` 创建系统任务 
任务调度使用 `vTaskStartScheduler()` 启动 FreeRTOS 调度器 
周期任务使用 `vTaskDelay()` 实现任务周期性执行 
STM32 初始化通过 `HAL_Init()` 完成 HAL 库初始化 
系统时钟通过 `SystemClock_Config()` 预留系统时钟配置 
UART 调试提供 `uart_printf()` 可变参数格式化输出接口 
工程管理使用 Git 进行版本控制并托管至 GitHub 

三、关键代码说明

1. 创建 FreeRTOS 任务

项目通过 `xTaskCreate()` 创建应用任务：

```c
xTaskCreate(
    StartDefaultTask,
    "DefaultTask",
    256,
    NULL,
    tskIDLE_PRIORITY + 1,
    NULL
);
```

2. 启动任务调度

```c
vTaskStartScheduler();
```


3. 周期性任务

```c
for (;;)
{
    /* Add application work here. */
    vTaskDelay(pdMS_TO_TICKS(1000));
}
```

4. UART 调试接口
项目提供：
```c
void uart_printf(const char *fmt, ...);
```
五、技术栈

MCU： STM32
HAL： STM32 HAL
RTOS：FreeRTOS
语言： C
开发方向：嵌入式软件 / 实时系统
版本管理：Git
代码托管：GitHub



六、项目能力

实时任务设计
使用 FreeRTOS 将应用逻辑划分为独立任务，通过任务优先级和阻塞延时实现实时任务调度。
RTOS 基础能力
掌握 FreeRTOS 基本任务生命周期
通过 UART 格式化输出接口，为后续串口日志和运行状态监控提供基础，便于定位 MCU 程序运行过程中的问题。
工程化能力
使用模块化目录组织源代码，并通过 Git 管理代码版本，将项目上传至 GitHub，形成完整的嵌入式项目管理流程。
七、简历项目描述
STM32 + FreeRTOS 嵌入式实时控制项目
基于 STM32 和 FreeRTOS 搭建嵌入式实时应用框架，采用多任务方式组织系统功能，完成 FreeRTOS 任务创建、任务优先级配置、任务调度及周期性任务控制；结合 STM32 HAL 完成系统初始化，并设计 UART 格式化调试接口，为串口日志及运行状态监控提供支持。项目采用模块化代码结构，并使用 Git/GitHub 进行版本管理。
关键词： `STM32` `FreeRTOS` `C预言` `HAL` `UART` `多任务调度` `嵌入式系统` `Git`


