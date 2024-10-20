[评估作业预期日期] (https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)(https://classroom.github.com/a/rtPGwteW)
#第一个任务
C 的 First_Task

如下图所示为流水灯控制原理图，请使用C语言编写逻辑代码，实现从左到右的流水灯，间隔时间为500ms。

![ water_led ] ( image.png )

示例代码如下：请在task.c中编写您的代码。


````
void delay_ms(unsigned int x) // 延迟函数
{
    无符号整型i,j;
    如果（x==1000）
    {
        for(i=0;i<19601;i++)//延迟1s
        {
            for(j=5;j>0;j--);
        }
    }
    否则 while(x--)for(j=115;j>0;j--);
}

// Tips：原理图LED为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


int 主函数（无效）
{
   // 编写你的代码
    RCC_APB2PeriphClockCmd（ RCC_APB2Periph_GPIOA，启用）；
    GPIO_InitTypDef A;
    A、GPIO_mode =GPIO_Mode_Out_PP；	  
	A、GPIO_Pin = GPIO_Pin_All；				
	A、GPIO_speed = GPIO_speed_50MHz；
	while( 1)
	{
        
                GPIO_Write（ GPIOA，〜0x0001）；
		Delay_ms（500）；				
		GPIO_Write（ GPIOA，〜0x0002）；	
		Delay_ms（500）；	
                GPIO_Write（ GPIOA，〜0x0004）；
		Delay_ms（500）；				
		GPIO_Write（ GPIOA，〜0x0008）；
		Delay_ms（500）；				
		GPIO_Write（ GPIOA，〜0x0010）；	
		Delay_ms（500）；				
		GPIO_Write（ GPIOA，〜0x0020）；	
		Delay_ms（500）；				
		GPIO_Write（ GPIOA，〜0x0040）；	
		Delay_ms（500）；
    }			
}
````

