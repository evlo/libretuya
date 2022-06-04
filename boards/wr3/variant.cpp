/* Copyright (c) Kuba Szczodrzyński 2022-04-22. */

#include "variant.h"

extern "C" {

/*
 * Pins descriptions
 */
// clang-format off
PinDescription g_APinDescription[PINS_COUNT] = {
	// D0: UART0_RTS, SPI1_MISO, SPI0_MISO, I2C0_SCL, SD_D0, PWM5, I2S_WS, WAKEUP_2
	{PA_22, NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ | PIO_PWM,	NOT_INITIAL},
	// D1: UART0_CTS, SPI1_CS, SPI0_CS, I2C0_SDA, SD_D3, TIMER5_TRIG, I2S_SD_TX, ADC1
	{PA_19, NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ,			NOT_INITIAL},
	// D2: PWM0, SWD_CLK
	{PA_14, NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ | PIO_PWM,	NOT_INITIAL},
	// D3: PWM1, SWD_DATA
	{PA_15, NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ | PIO_PWM,	NOT_INITIAL},
	// D4: PWM2, ext_32K
	{PA_0,  NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ | PIO_PWM,	NOT_INITIAL},
	// D5: UART2_log_RXD, I2C0_SCL, PWM4
	{PA_29, NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ | PIO_PWM,	NOT_INITIAL},
	// D6: UART2_log_TXD, I2C0_SDA, PWM3, RTC_OUT
	{PA_30, NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ | PIO_PWM,	NOT_INITIAL},
	// D7: SDIO_SIDEBAND_INT, PWM4, WAKEUP_1
	{PA_5,  NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ | PIO_PWM,	NOT_INITIAL},
	// D8: PWM3
	{PA_12, NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ | PIO_PWM,	NOT_INITIAL},
	// D9: UART0_RXD, SPI1_CLK, SPI0_SCK, I2C1_SCL, SD_D2, TIMER4_TRIG, I2S_MCK, WAKEUP_0
	{PA_18, NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ,			NOT_INITIAL},
	// D10: UART0_TXD, SPI1_MOSI, SPI0_MOSI, I2C1_SDA, SD_D1, PWM0, WAKEUP_3
	{PA_23, NOT_INITIAL, PIO_GPIO | PIO_GPIO_IRQ | PIO_PWM,	NOT_INITIAL},
	// A1: VBAT_MEAS, ADC2
	{AD_2, 	NOT_INITIAL, PIO_ADC,							NOT_INITIAL},
};
// clang-format on

} // extern C
