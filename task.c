

void delay_ms     ( unsigned int x )         // 延迟函数
{
    无符号整型i,j;
    如果（x== 1000）
    {
        for           ( i= 0 ;i< 19601 ;i++ )              // 延迟 1s
		{
            对于( j= 5 ;j> 0 ;j-- ) ;
        }
    }
    否则而( x-- )对于( j= 115 ;j> 0 ;j-- ) ;
}

// Tips：原理图LED为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


int 主函数（无效）
{
   // ”“”在下面编写了你的​​​​​​​​​​​​​​​​​​​​代码
    
    RCC_APB2PeriphClockCmd（ RCC_APB2Periph_GPIOA，启用）；
    GPIO_InitTypDef A;
    A、GPIO_mode =GPIO_Mode_Out_PP；	  
	A、GPIO_Pin = GPIO_Pin_All；				
	A、GPIO_speed = GPIO_speed_50MHz；
	while(1)
	{
        
                GPIO_Write （ GPIOA，〜0x0001）；
		延迟_毫秒（100）；				
		GPIO_Write （ GPIOA，〜0x0002）；	
		延迟_毫秒（100）；	
                GPIO_Write （ GPIOA，〜0x0004）；
		延迟_毫秒（100）；				
		GPIO_Write （ GPIOA，〜0x0008）；
		延迟_毫秒（100）；				
		GPIO_Write （ GPIOA，〜0x0010）；	
		延迟_毫秒（100）；				
		GPIO_Write （ GPIOA，〜0x0020）；	
		延迟_毫秒（100）；				
		GPIO_Write （ GPIOA，〜0x0040）；	
		延迟_毫秒（100）；				
    }
}
  

