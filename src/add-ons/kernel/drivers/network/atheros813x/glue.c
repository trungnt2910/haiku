#include <sys/bus.h>

HAIKU_FBSD_DRIVER_GLUE(atheros813x, alc, pci);

HAIKU_FBSD_MII_DRIVER(ukphy);
HAIKU_DRIVER_REQUIREMENTS(FBSD_TASKQUEUES | FBSD_FAST_TASKQUEUE);
NO_HAIKU_CHECK_DISABLE_INTERRUPTS();
NO_HAIKU_REENABLE_INTERRUPTS();