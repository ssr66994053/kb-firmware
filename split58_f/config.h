#pragma once

#include "config_common.h"

#define DIODE_DIRECTION COL2ROW
#define MATRIX_ROWS 6
#define MATRIX_COLS 12
#define MATRIX_ROW_PINS {F4, F5, F6, F7, B1, B3}
#define MATRIX_COL_PINS {D3, D2, D1, D0, D4, C6, D7, E6, B4, B5, B6, B2}

#define FORCE_NKRO // 默认开启全键无冲
