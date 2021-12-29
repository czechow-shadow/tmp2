#ifndef __SCB_H__
#define __SCB_H__

// Forward declaration of the scb debug flag
extern bool scb_debug;

#define SCB_DEBUG(str, ...) \
  if (scb_debug) \
    printk("vboxvideo SCB: %s:%d#%s() " str "\n", \
	   __FILE__, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__)

#define SCB_DEBUG_BEG() SCB_DEBUG("beg")
#define SCB_DEBUG_END() SCB_DEBUG("end")

#endif // __SCB_H__
