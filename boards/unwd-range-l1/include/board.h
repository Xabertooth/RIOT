/*
 * Copyright (C) 2016 Unwired Devices
 *
 * This file is subject to the terms and conditions of the GNU Lesser General
 * Public License v2.1. See the file LICENSE in the top level directory for more
 * details.
 */

/**
 * @defgroup    boards_unwd-range-l1 Unwired Range-l1
 * @ingroup     boards
 * @brief       Board specific files for the unwd-range-l1 board.
 * @{
 *
 * @file
 * @brief       Board specific definitions for the unwd-range-l1 board.
 *
 * @author      Cr0s
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "board_common.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name xtimer configuration
 * @{
 */
#define XTIMER              TIMER_DEV(0)
#define XTIMER_CHAN         (0)
#define XTIMER_OVERHEAD     (6)
#define XTIMER_BACKOFF      (3)
/** @} */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_H_ */
/** @} */
