/* config.h.  Manual config for MSVC.  */

#ifndef _MSC_VER
#warn "msvc/config.h shouldn't be included for your development environment."
#error "Please make sure the msvc/ directory is removed from your build path."
#endif

/* embed WinUSB driver files from the following DDK location */
#ifndef DDK_DIR
#define DDK_DIR "C:/Program Files (x86)/Windows Kits/8.0"
#endif

/* embed libusb0 driver files from the following location */
#ifndef LIBUSB0_DIR
#define LIBUSB0_DIR "D:/libusb-win32"
#endif

/* embed libusbK driver files from the following location */
#ifndef LIBUSBK_DIR
#define LIBUSBK_DIR "D:/libusbK/bin"
#endif

/* embed user defined driver files from the following location */
#ifndef USER_DIR
// #define USER_DIR "C:/signed-driver"
#endif

/* DDK WDF coinstaller version */
#define WDF_VER 1011

/* 32 bit support */
#define OPT_M32

/* 64 bit support */
#define OPT_M64

/* embed IA64 driver files */
//#define OPT_IA64

/* Debug message logging */
//#define ENABLE_DEBUG_LOGGING

/* Debug message logging (toggable) */
#define INCLUDE_DEBUG_LOGGING

/* Message logging */
#define ENABLE_LOGGING 1
