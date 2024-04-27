#pragma once

#include <vector>

extern "C"
{
#include "lvgl.h"
#include "quickjs-libc.h"
#include "sjs.h"
};

// static const lv_font_t builtin_font_list[] = {
//     lv_font_montserrat_8,
//     lv_font_montserrat_10,
//     lv_font_montserrat_12,
//     lv_font_montserrat_14,
//     lv_font_montserrat_16,
//     lv_font_montserrat_18,
//     lv_font_montserrat_20,
//     lv_font_montserrat_22,
//     lv_font_montserrat_24,
//     lv_font_montserrat_26,
//     lv_font_montserrat_28,
//     lv_font_montserrat_30,
//     lv_font_montserrat_32,
//     lv_font_montserrat_34,
//     lv_font_montserrat_36,
//     lv_font_montserrat_38,
//     lv_font_montserrat_40,
//     lv_font_montserrat_42,
//     lv_font_montserrat_44,
//     lv_font_montserrat_46,
//     lv_font_montserrat_48,
// };

static const lv_font_t builtin_font_list[] = {
    lv_font_montserrat_8,
    lv_font_montserrat_10,
    lv_font_montserrat_12,
    source_han_sans_cn_regular_14,
    source_han_sans_cn_regular_16,
    source_han_sans_cn_regular_18,
    source_han_sans_cn_regular_20,
    source_han_sans_cn_regular_22,
    source_han_sans_cn_regular_24,
    source_han_sans_cn_regular_26,
    source_han_sans_cn_regular_28,
    source_han_sans_cn_regular_30,
    source_han_sans_cn_regular_32,
    source_han_sans_cn_regular_34,
    source_han_sans_cn_regular_36,
    source_han_sans_cn_regular_38,
    source_han_sans_cn_regular_40,
    source_han_sans_cn_regular_42,
    source_han_sans_cn_regular_44,
    source_han_sans_cn_regular_46,
    source_han_sans_cn_regular_48,
    source_han_sans_cn_regular_60,
};

void CompSetFontSize(lv_obj_t *comp, lv_style_t *style, JSContext *ctx, JSValue obj);

void CompSetFontSize1(lv_obj_t *comp, lv_style_t *style, JSContext *ctx, JSValue obj);