/*
 * Copyright (c) 2013 Adrian Negreanu <adrian.m.negreanu@intel.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include <unistd.h>

/*
 * bionic/libc/include/sys/sysconf.h processed with:
 * s/define _\(\w*\)\(.*\)/define \1\2\r#ifdef _\1\rMAP_TO_UNISTD(\1),\r#endif/g
 */

#define MAP_TO_UNISTD(a) [a]=_##a
static int sysconf_map[]= {
#define SC_ARG_MAX             0x0000
#ifdef _SC_ARG_MAX
MAP_TO_UNISTD(SC_ARG_MAX),
#endif
#define SC_BC_BASE_MAX         0x0001
#ifdef _SC_BC_BASE_MAX
MAP_TO_UNISTD(SC_BC_BASE_MAX),
#endif
#define SC_BC_DIM_MAX          0x0002
#ifdef _SC_BC_DIM_MAX
MAP_TO_UNISTD(SC_BC_DIM_MAX),
#endif
#define SC_BC_SCALE_MAX        0x0003
#ifdef _SC_BC_SCALE_MAX
MAP_TO_UNISTD(SC_BC_SCALE_MAX),
#endif
#define SC_BC_STRING_MAX       0x0004
#ifdef _SC_BC_STRING_MAX
MAP_TO_UNISTD(SC_BC_STRING_MAX),
#endif
#define SC_CHILD_MAX           0x0005
#ifdef _SC_CHILD_MAX
MAP_TO_UNISTD(SC_CHILD_MAX),
#endif
#define SC_CLK_TCK             0x0006
#ifdef _SC_CLK_TCK
MAP_TO_UNISTD(SC_CLK_TCK),
#endif
#define SC_COLL_WEIGHTS_MAX    0x0007
#ifdef _SC_COLL_WEIGHTS_MAX
MAP_TO_UNISTD(SC_COLL_WEIGHTS_MAX),
#endif
#define SC_EXPR_NEST_MAX       0x0008
#ifdef _SC_EXPR_NEST_MAX
MAP_TO_UNISTD(SC_EXPR_NEST_MAX),
#endif
#define SC_LINE_MAX            0x0009
#ifdef _SC_LINE_MAX
MAP_TO_UNISTD(SC_LINE_MAX),
#endif
#define SC_NGROUPS_MAX         0x000a
#ifdef _SC_NGROUPS_MAX
MAP_TO_UNISTD(SC_NGROUPS_MAX),
#endif
#define SC_OPEN_MAX            0x000b
#ifdef _SC_OPEN_MAX
MAP_TO_UNISTD(SC_OPEN_MAX),
#endif
#define SC_PASS_MAX            0x000c
#ifdef _SC_PASS_MAX
MAP_TO_UNISTD(SC_PASS_MAX),
#endif
#define SC_2_C_BIND            0x000d
#ifdef _SC_2_C_BIND
MAP_TO_UNISTD(SC_2_C_BIND),
#endif
#define SC_2_C_DEV             0x000e
#ifdef _SC_2_C_DEV
MAP_TO_UNISTD(SC_2_C_DEV),
#endif
#define SC_2_C_VERSION         0x000f
#ifdef _SC_2_C_VERSION
MAP_TO_UNISTD(SC_2_C_VERSION),
#endif
#define SC_2_CHAR_TERM         0x0010
#ifdef _SC_2_CHAR_TERM
MAP_TO_UNISTD(SC_2_CHAR_TERM),
#endif
#define SC_2_FORT_DEV          0x0011
#ifdef _SC_2_FORT_DEV
MAP_TO_UNISTD(SC_2_FORT_DEV),
#endif
#define SC_2_FORT_RUN          0x0012
#ifdef _SC_2_FORT_RUN
MAP_TO_UNISTD(SC_2_FORT_RUN),
#endif
#define SC_2_LOCALEDEF         0x0013
#ifdef _SC_2_LOCALEDEF
MAP_TO_UNISTD(SC_2_LOCALEDEF),
#endif
#define SC_2_SW_DEV            0x0014
#ifdef _SC_2_SW_DEV
MAP_TO_UNISTD(SC_2_SW_DEV),
#endif
#define SC_2_UPE               0x0015
#ifdef _SC_2_UPE
MAP_TO_UNISTD(SC_2_UPE),
#endif
#define SC_2_VERSION           0x0016
#ifdef _SC_2_VERSION
MAP_TO_UNISTD(SC_2_VERSION),
#endif
#define SC_JOB_CONTROL         0x0017
#ifdef _SC_JOB_CONTROL
MAP_TO_UNISTD(SC_JOB_CONTROL),
#endif
#define SC_SAVED_IDS           0x0018
#ifdef _SC_SAVED_IDS
MAP_TO_UNISTD(SC_SAVED_IDS),
#endif
#define SC_VERSION             0x0019
#ifdef _SC_VERSION
MAP_TO_UNISTD(SC_VERSION),
#endif
#define SC_RE_DUP_MAX          0x001a
#ifdef _SC_RE_DUP_MAX
MAP_TO_UNISTD(SC_RE_DUP_MAX),
#endif
#define SC_STREAM_MAX          0x001b
#ifdef _SC_STREAM_MAX
MAP_TO_UNISTD(SC_STREAM_MAX),
#endif
#define SC_TZNAME_MAX          0x001c
#ifdef _SC_TZNAME_MAX
MAP_TO_UNISTD(SC_TZNAME_MAX),
#endif
#define SC_XOPEN_CRYPT         0x001d
#ifdef _SC_XOPEN_CRYPT
MAP_TO_UNISTD(SC_XOPEN_CRYPT),
#endif
#define SC_XOPEN_ENH_I18N      0x001e
#ifdef _SC_XOPEN_ENH_I18N
MAP_TO_UNISTD(SC_XOPEN_ENH_I18N),
#endif
#define SC_XOPEN_SHM           0x001f
#ifdef _SC_XOPEN_SHM
MAP_TO_UNISTD(SC_XOPEN_SHM),
#endif
#define SC_XOPEN_VERSION       0x0020
#ifdef _SC_XOPEN_VERSION
MAP_TO_UNISTD(SC_XOPEN_VERSION),
#endif
#define SC_XOPEN_XCU_VERSION   0x0021
#ifdef _SC_XOPEN_XCU_VERSION
MAP_TO_UNISTD(SC_XOPEN_XCU_VERSION),
#endif
#define SC_XOPEN_REALTIME      0x0022
#ifdef _SC_XOPEN_REALTIME
MAP_TO_UNISTD(SC_XOPEN_REALTIME),
#endif
#define SC_XOPEN_REALTIME_THREADS  0x0023
#ifdef _SC_XOPEN_REALTIME_THREADS
MAP_TO_UNISTD(SC_XOPEN_REALTIME_THREADS),
#endif
#define SC_XOPEN_LEGACY        0x0024
#ifdef _SC_XOPEN_LEGACY
MAP_TO_UNISTD(SC_XOPEN_LEGACY),
#endif
#define SC_ATEXIT_MAX          0x0025
#ifdef _SC_ATEXIT_MAX
MAP_TO_UNISTD(SC_ATEXIT_MAX),
#endif
#define SC_IOV_MAX             0x0026
#ifdef _SC_IOV_MAX
MAP_TO_UNISTD(SC_IOV_MAX),
#endif
#define SC_PAGESIZE            0x0027
#ifdef _SC_PAGESIZE
MAP_TO_UNISTD(SC_PAGESIZE),
#endif
#define SC_PAGE_SIZE           0x0028
#ifdef _SC_PAGE_SIZE
MAP_TO_UNISTD(SC_PAGE_SIZE),
#endif
#define SC_XOPEN_UNIX          0x0029
#ifdef _SC_XOPEN_UNIX
MAP_TO_UNISTD(SC_XOPEN_UNIX),
#endif
#define SC_XBS5_ILP32_OFF32    0x002a
#ifdef _SC_XBS5_ILP32_OFF32
MAP_TO_UNISTD(SC_XBS5_ILP32_OFF32),
#endif
#define SC_XBS5_ILP32_OFFBIG   0x002b
#ifdef _SC_XBS5_ILP32_OFFBIG
MAP_TO_UNISTD(SC_XBS5_ILP32_OFFBIG),
#endif
#define SC_XBS5_LP64_OFF64     0x002c
#ifdef _SC_XBS5_LP64_OFF64
MAP_TO_UNISTD(SC_XBS5_LP64_OFF64),
#endif
#define SC_XBS5_LPBIG_OFFBIG   0x002d
#ifdef _SC_XBS5_LPBIG_OFFBIG
MAP_TO_UNISTD(SC_XBS5_LPBIG_OFFBIG),
#endif
#define SC_AIO_LISTIO_MAX      0x002e
#ifdef _SC_AIO_LISTIO_MAX
MAP_TO_UNISTD(SC_AIO_LISTIO_MAX),
#endif
#define SC_AIO_MAX             0x002f
#ifdef _SC_AIO_MAX
MAP_TO_UNISTD(SC_AIO_MAX),
#endif
#define SC_AIO_PRIO_DELTA_MAX  0x0030
#ifdef _SC_AIO_PRIO_DELTA_MAX
MAP_TO_UNISTD(SC_AIO_PRIO_DELTA_MAX),
#endif
#define SC_DELAYTIMER_MAX      0x0031
#ifdef _SC_DELAYTIMER_MAX
MAP_TO_UNISTD(SC_DELAYTIMER_MAX),
#endif
#define SC_MQ_OPEN_MAX         0x0032
#ifdef _SC_MQ_OPEN_MAX
MAP_TO_UNISTD(SC_MQ_OPEN_MAX),
#endif
#define SC_MQ_PRIO_MAX         0x0033
#ifdef _SC_MQ_PRIO_MAX
MAP_TO_UNISTD(SC_MQ_PRIO_MAX),
#endif
#define SC_RTSIG_MAX           0x0034
#ifdef _SC_RTSIG_MAX
MAP_TO_UNISTD(SC_RTSIG_MAX),
#endif
#define SC_SEM_NSEMS_MAX       0x0035
#ifdef _SC_SEM_NSEMS_MAX
MAP_TO_UNISTD(SC_SEM_NSEMS_MAX),
#endif
#define SC_SEM_VALUE_MAX       0x0036
#ifdef _SC_SEM_VALUE_MAX
MAP_TO_UNISTD(SC_SEM_VALUE_MAX),
#endif
#define SC_SIGQUEUE_MAX        0x0037
#ifdef _SC_SIGQUEUE_MAX
MAP_TO_UNISTD(SC_SIGQUEUE_MAX),
#endif
#define SC_TIMER_MAX           0x0038
#ifdef _SC_TIMER_MAX
MAP_TO_UNISTD(SC_TIMER_MAX),
#endif
#define SC_ASYNCHRONOUS_IO     0x0039
#ifdef _SC_ASYNCHRONOUS_IO
MAP_TO_UNISTD(SC_ASYNCHRONOUS_IO),
#endif
#define SC_FSYNC               0x003a
#ifdef _SC_FSYNC
MAP_TO_UNISTD(SC_FSYNC),
#endif
#define SC_MAPPED_FILES        0x003b
#ifdef _SC_MAPPED_FILES
MAP_TO_UNISTD(SC_MAPPED_FILES),
#endif
#define SC_MEMLOCK             0x003c
#ifdef _SC_MEMLOCK
MAP_TO_UNISTD(SC_MEMLOCK),
#endif
#define SC_MEMLOCK_RANGE       0x003d
#ifdef _SC_MEMLOCK_RANGE
MAP_TO_UNISTD(SC_MEMLOCK_RANGE),
#endif
#define SC_MEMORY_PROTECTION   0x003e
#ifdef _SC_MEMORY_PROTECTION
MAP_TO_UNISTD(SC_MEMORY_PROTECTION),
#endif
#define SC_MESSAGE_PASSING     0x003f
#ifdef _SC_MESSAGE_PASSING
MAP_TO_UNISTD(SC_MESSAGE_PASSING),
#endif
#define SC_PRIORITIZED_IO      0x0040
#ifdef _SC_PRIORITIZED_IO
MAP_TO_UNISTD(SC_PRIORITIZED_IO),
#endif
#define SC_PRIORITY_SCHEDULING 0x0041
#ifdef _SC_PRIORITY_SCHEDULING
MAP_TO_UNISTD(SC_PRIORITY_SCHEDULING),
#endif
#define SC_REALTIME_SIGNALS    0x0042
#ifdef _SC_REALTIME_SIGNALS
MAP_TO_UNISTD(SC_REALTIME_SIGNALS),
#endif
#define SC_SEMAPHORES          0x0043
#ifdef _SC_SEMAPHORES
MAP_TO_UNISTD(SC_SEMAPHORES),
#endif
#define SC_SHARED_MEMORY_OBJECTS  0x0044
#ifdef _SC_SHARED_MEMORY_OBJECTS
MAP_TO_UNISTD(SC_SHARED_MEMORY_OBJECTS),
#endif
#define SC_SYNCHRONIZED_IO     0x0045
#ifdef _SC_SYNCHRONIZED_IO
MAP_TO_UNISTD(SC_SYNCHRONIZED_IO),
#endif
#define SC_TIMERS              0x0046
#ifdef _SC_TIMERS
MAP_TO_UNISTD(SC_TIMERS),
#endif
#define SC_GETGR_R_SIZE_MAX    0x0047
#ifdef _SC_GETGR_R_SIZE_MAX
MAP_TO_UNISTD(SC_GETGR_R_SIZE_MAX),
#endif
#define SC_GETPW_R_SIZE_MAX    0x0048
#ifdef _SC_GETPW_R_SIZE_MAX
MAP_TO_UNISTD(SC_GETPW_R_SIZE_MAX),
#endif
#define SC_LOGIN_NAME_MAX      0x0049
#ifdef _SC_LOGIN_NAME_MAX
MAP_TO_UNISTD(SC_LOGIN_NAME_MAX),
#endif
#define SC_THREAD_DESTRUCTOR_ITERATIONS  0x004a
#ifdef _SC_THREAD_DESTRUCTOR_ITERATIONS
MAP_TO_UNISTD(SC_THREAD_DESTRUCTOR_ITERATIONS),
#endif
#define SC_THREAD_KEYS_MAX     0x004b
#ifdef _SC_THREAD_KEYS_MAX
MAP_TO_UNISTD(SC_THREAD_KEYS_MAX),
#endif
#define SC_THREAD_STACK_MIN    0x004c
#ifdef _SC_THREAD_STACK_MIN
MAP_TO_UNISTD(SC_THREAD_STACK_MIN),
#endif
#define SC_THREAD_THREADS_MAX  0x004d
#ifdef _SC_THREAD_THREADS_MAX
MAP_TO_UNISTD(SC_THREAD_THREADS_MAX),
#endif
#define SC_TTY_NAME_MAX        0x004e
#ifdef _SC_TTY_NAME_MAX
MAP_TO_UNISTD(SC_TTY_NAME_MAX),
#endif

#define SC_THREADS                     0x004f
#ifdef _SC_THREADS
MAP_TO_UNISTD(SC_THREADS),
#endif
#define SC_THREAD_ATTR_STACKADDR       0x0050
#ifdef _SC_THREAD_ATTR_STACKADDR
MAP_TO_UNISTD(SC_THREAD_ATTR_STACKADDR),
#endif
#define SC_THREAD_ATTR_STACKSIZE       0x0051
#ifdef _SC_THREAD_ATTR_STACKSIZE
MAP_TO_UNISTD(SC_THREAD_ATTR_STACKSIZE),
#endif
#define SC_THREAD_PRIORITY_SCHEDULING  0x0052
#ifdef _SC_THREAD_PRIORITY_SCHEDULING
MAP_TO_UNISTD(SC_THREAD_PRIORITY_SCHEDULING),
#endif
#define SC_THREAD_PRIO_INHERIT         0x0053
#ifdef _SC_THREAD_PRIO_INHERIT
MAP_TO_UNISTD(SC_THREAD_PRIO_INHERIT),
#endif
#define SC_THREAD_PRIO_PROTECT         0x0054
#ifdef _SC_THREAD_PRIO_PROTECT
MAP_TO_UNISTD(SC_THREAD_PRIO_PROTECT),
#endif
#define SC_THREAD_SAFE_FUNCTIONS       0x0055
#ifdef _SC_THREAD_SAFE_FUNCTIONS
MAP_TO_UNISTD(SC_THREAD_SAFE_FUNCTIONS),
#endif

#define SC_NPROCESSORS_CONF            0x0060
#ifdef _SC_NPROCESSORS_CONF
MAP_TO_UNISTD(SC_NPROCESSORS_CONF),
#endif
#define SC_NPROCESSORS_ONLN            0x0061
#ifdef _SC_NPROCESSORS_ONLN
MAP_TO_UNISTD(SC_NPROCESSORS_ONLN),
#endif
#define SC_PHYS_PAGES                  0x0062
#ifdef _SC_PHYS_PAGES
MAP_TO_UNISTD(SC_PHYS_PAGES),
#endif
#define SC_AVPHYS_PAGES                0x0063
#ifdef _SC_AVPHYS_PAGES
MAP_TO_UNISTD(SC_AVPHYS_PAGES),
#endif
};
#undef MAP_TO_UNISTD

long _hybris_map_sysconf(int name)
{
	return sysconf(sysconf_map[name]);
}
