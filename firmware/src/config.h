// WiFi credentials
#define WIFI_SSID "vebuuiredm"
#define WIFI_PSWD "25802580"

// are you using an I2S microphone - comment this out if you want to use an analog mic and ADC input
#define USE_I2S_MIC_INPUT

// I2S Microphone Settings

// Which channel is the I2S microphone on? I2S_CHANNEL_FMT_ONLY_LEFT or I2S_CHANNEL_FMT_ONLY_RIGHT
#define I2S_MIC_CHANNEL I2S_CHANNEL_FMT_ONLY_LEFT
// 麦克风器配置
#define INMP441_WS_PIN  42 // 串行数据字选择
#define INMP441_SCK_PIN 14 //  时钟
#define INMP441_SD_PIN 38  // 数据 

#define SAMPLE_RATE 16000
#define I2S_READ_LEN (1<<7)

// Analog Microphone Settings - ADC1_CHANNEL_7 is GPIO35
#define ADC_MIC_CHANNEL ADC1_CHANNEL_7

// speaker settings
#define I2S_SPEAKER_SERIAL_CLOCK GPIO_NUM_19
#define I2S_SPEAKER_LEFT_RIGHT_CLOCK GPIO_NUM_12
#define I2S_SPEAKER_SERIAL_DATA GPIO_NUM_11

// command recognition settings
#define COMMAND_RECOGNITION_ACCESS_KEY "P5QMUSMFV6IRRSTABXFQ7UIXPFRMC4L5"
