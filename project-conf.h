/* Project configuration */

// All logs to LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_IPV6                        LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_RPL                         LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_6LOWPAN                     LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_TCPIP                       LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_MAC                         LOG_LEVEL_NONE   //Change this for more info
#define LOG_CONF_LEVEL_FRAMER                      LOG_LEVEL_NONE
#define LOG_CONF_LEVEL_RF2XX                       LOG_LEVEL_NONE
#define TSCH_LOG_CONF_PER_SLOT                     (1)

// Defines for app
#define UART1_CONF_BAUDRATE                         (460800)

#define RF2XX_CONF_PACKET_STATS                     (1)
#define RF2XX_CONF_DRIVER_STATS                     (1)

#define TSCH_CONF_DEFAULT_HOPPING_SEQUENCE          (uint8_t[]){ 15, 20, 26 }
