
//Define Clock source
#define MCU_CLOCK_SOURCE      
#define MCU_CLOCK_SOURCE_HIRC // HXT, LXT, HIRC, LIRC
#define MCU_CLOCK_SOURCE_LXT
#define MCU_CLOCK_FREQUENCY   32000000  //Hz

//Define MCU Interfaces
#define MCU_INTERFACE_I2C1
#define I2C1_CLOCK_FREQUENCY  400000 //Hz
#define PIN_I2C1_SCL_PC10      
#define PIN_I2C1_SDA_PC11

//Define MCU Interfaces
#define MCU_INTERFACE_PWM0
#define PWM0_CH23_CLOCK_SOURCE_HCLK // HXT, LXT, HCLK, HIRC
#define PIN_PWM0_CH3_PD9

//Define MCU Interfaces
#define MCU_INTERFACE_ADC
#define ADC_CLOCK_SOURCE_HIRC // HXT, LXT, PLL, HIRC, HCLK
#define ADC_CLOCK_DIVIDER     1
#define PIN_ADC_4
#define ADC_INPUT_MODE        ADC_INPUT_MODE_SINGLE_END // SINGLE_END, DIFFERENTIAL
#define ADC_OPERATION_MODE    ADC_OPERATION_MODE_CONTINUOUS // SINGLE, SINGLE_CYCLE, CONTINUOUS

//timer 0
#define MCU_INTERFACE_TMR0
#define TMR0_CLOCK_SOURCE_LIRC // HXT, LXT, LIRC, EXT, HCLK 10k
#define TMR0_CLOCK_DIVIDER 2
#define TMR0_OPERATING_MODE TIMER_PERIODIC_MODE
// ONESHOT, PERIODIC, TOGGLE, CONTINUOUS
#define TMR0_OPERATING_FREQ 45 //Hz

#define MCU_INTERFACE_TMR1
#define TMR1_CLOCK_SOURCE_HIRC // HXT, LXT, LIRC, EXT, HIRC, HCLK 12M
#define TMR1_CLOCK_DIVIDER    1
#define TMR1_OPERATING_MODE   TIMER_PERIODIC_MODE // ONESHOT, PERIODIC, TOGGLE, CONTINUOUS
#define TMR1_OPERATING_FREQ   5 //Hz