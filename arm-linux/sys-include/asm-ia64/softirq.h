#ifndef _ASM_IA64_SOFTIRQ_H
#define _ASM_IA64_SOFTIRQ_H

/*
 * Copyright (C) 1998-2001 Hewlett-Packard Co
 * Copyright (C) 1998-2001 David Mosberger-Tang <davidm@hpl.hp.com>
 */
#include <asm/hardirq.h>

#define local_bh_disable()	do { local_bh_count()++; barrier(); } while (0)
#define local_bh_enable()	do { barrier(); local_bh_count()--; } while (0)

#define in_softirq()		(local_bh_count() != 0)

#endif /* _ASM_IA64_SOFTIRQ_H */
