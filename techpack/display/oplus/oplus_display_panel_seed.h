/***************************************************************
** Copyright (C), 2022, OPLUS Mobile Comm Corp., Ltd
**
** File : oplus_display_panel_seed.h
** Description : oplus display panel seed feature
** Version : 1.0
** Date : 2022/08/01
** Author : Display
******************************************************************/
#ifndef _OPLUS_DISPLAY_PANEL_SEED_H_
#define _OPLUS_DISPLAY_PANEL_SEED_H_

#include <linux/err.h>
#include "dsi_display.h"
#include "dsi_panel.h"
#include "dsi_ctrl.h"
#include "dsi_ctrl_hw.h"
#include "dsi_drm.h"
#include "dsi_clk.h"
#include "dsi_pwr.h"
#include "sde_dbg.h"

#define PANEL_LOADING_EFFECT_FLAG 100
#define PANEL_LOADING_EFFECT_MODE1 101
#define PANEL_LOADING_EFFECT_MODE2 102
#define PANEL_LOADING_EFFECT_OFF 100

int oplus_display_get_seed_mode(void);
int oplus_display_panel_get_seed(void *data);
int oplus_display_panel_set_seed(void *data);
int __oplus_display_set_seed(int mode);
int dsi_panel_seed_mode(struct dsi_panel *panel, int mode);
int dsi_panel_seed_mode_unlock(struct dsi_panel *panel, int mode);
int dsi_display_seed_mode_lock(struct dsi_display *display, int mode);

#endif
