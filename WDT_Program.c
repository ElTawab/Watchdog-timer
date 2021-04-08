#include"STD_TYPES.h"
#include"bit.h"
#include"WDT_Register.h"
void WDT_VidEnable(void)
{//set prescaler
	set_bit(WDTCR,2);
	set_bit(WDTCR,1);
	clr_bit(WDTCR,0);
	//enable WDTCR
	set_bit(WDTCR,3);
}

void WDT_Viddisable(void)
{
	WDTCR=0xff;
	WDTCR=0x00;
}
