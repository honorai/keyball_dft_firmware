#pragma once
#include "quantum.h"  // QMKの基本定義を含む

// Tap Danceのインデックス（TD()マクロで使用）
enum {
    TD_LNG12,
    TD_7_SMINS,
    TD_CL_ALLCL,
};

// TD() マクロを使いやすくするための定義
#define TD_1 TD(TD_LNG12)
#define TD_2 TD(TD_7_SMINS)
#define TD_3 TD(TD_CL_ALLCL)
