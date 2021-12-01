#ifndef __SCB_H__
#define __SCB_H__

// Debug: allow (leave uncommented) or disable (comment out)
#define HAS_SCB_DEBUG

#ifdef HAS_SCB_DEBUG
# define SCB_DEBUG(str, ...) \
  printk("vboxvideo SCB: %s:%d#%s() " str "\n", \
	 __FILE__, __LINE__, __PRETTY_FUNCTION__, ##__VA_ARGS__)
#else // HAS_SCB_DEBUG
# define SCB_DEBUG(str, ...) while(0)
#endif // HAS_SCB_DEBUG

#define SCB_DEBUG_BEG() SCB_DEBUG("beg")
#define SCB_DEBUG_END() SCB_DEBUG("end")

#endif // __SCB_H__
