/**
 * @file
 * @brief lwIP application configuration
 *
 * @author @htmlonly &copy; @endhtmlonly 2020 James Bennion-Pedley
 *
 * @date 7 June 2020
 */

/* Configuration includes */
#include <global_config.h>

/*----------------------------------------------------------------------------*/

// NEED TO ORGANISE!
#define MEM_ALIGNMENT 4
#define MEM_SIZE      (32*1024)

#define TCP_MSS  1460
#define TCP_SND_BUF (8*TCP_MSS)
#define TCP_WND     (10*TCP_MSS)
#define MEMP_NUM_TCP_SEG TCP_SND_QUEUELEN
#define MEMP_NUM_PBUF 32
#define MEMP_NUM_TCP_PCB 10

#define PBUF_POOL_SIZE 32

/*----------------------------------------------------------------------------*/

/* Checksum disable (calculated in hardware) */
#define CHECKSUM_GEN_IP     0
#define CHECKSUM_GEN_UDP    0
#define CHECKSUM_GEN_TCP    0
#define CHECKSUM_GEN_ICMP   0
#define CHECKSUM_CHECK_IP   0
#define CHECKSUM_CHECK_UDP  0
#define CHECKSUM_CHECK_TCP  0
#define CHECKSUM_CHECK_ICMP 0

/*----------------------------------------------------------------------------*/

// NEED TO ORGANISE!
#define LWIP_ETHERNET 1
#define TCPIP_THREAD_STACKSIZE 1024
#define TCPIP_THREAD_PRIO 24
#define TCPIP_MBOX_SIZE 6

#define TCPIP_THREAD_NAME       "ETH_lwip"  ///< Consistent with other threads

#define DEFAULT_THREAD_STACKSIZE 1024
#define DEFAULT_THREAD_PRIO 3
#define DEFAULT_UDP_RECVMBOX_SIZE 6
#define DEFAULT_TCP_RECVMBOX_SIZE 6
#define DEFAULT_ACCEPTMBOX_SIZE 6
#define RECV_BUFSIZE_DEFAULT 2000000000

/*----------------------------------------------------------------------------*/

/* Application feature configuration */
#define LWIP_SOCKET  0
#define LWIP_NETCONN 1      ///< Application uses Netconn API exclusively

// #define LWIP_DHCP                   1
// #define LWIP_AUTOIP                 1
// #define LWIP_DHCP_AUTOIP_COOP       1
// #define LWIP_DHCP_AUTOIP_COOP_TRIES 3

#define LWIP_NETIF_HOSTNAME        1

/** Allow <i>netif</i> functions to be called from another thread */
#define LWIP_NETIF_API             1
#define LWIP_NETIF_STATUS_CALLBACK 1
#define LWIP_NETIF_LINK_CALLBACK   1

#define SO_REUSE     1 //?
#define LWIP_IGMP    0
 
#define LWIP_STATS         1 //?
#define LWIP_STATS_DISPLAY 1 //?

/*----------------------------------------------------------------------------*/
#ifdef DEBUG
/* Use lwIP's built-in printf debugging */
#define LWIP_DEBUG
// #define MEMP_DEBUG      LWIP_DBG_ON
// #define PBUF_DEBUG      LWIP_DBG_ON
// #define ICMP_DEBUG      LWIP_DBG_ON
// #define TCPIP_DEBUG     LWIP_DBG_ON
// #define IP_DEBUG        LWIP_DBG_ON
#define DHCP_DEBUG      LWIP_DBG_ON
#define NETIF_DEBUG     LWIP_DBG_ON
// #define RAW_DEBUG       LWIP_DBG_ON
// #define SYS_DEBUG       LWIP_DBG_ON
#endif