void Delay_us(uint16_t us){
	// 1. Reset to counter
	TIM6->CNT = 0;
	// Wait for the counter for the us value. Each count will mean 1 us has passed
	while(TIM6->CNT < us);
		
}


void Delay_ms(uint16_t ms){
	
	for (uint16_t i = 0 ; i<ms;i++){
		Delay_us(1000);
	}		

		
}
