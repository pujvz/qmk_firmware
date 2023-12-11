// Copyright 2023 z (@z)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// USART half-duplex
#define SERIAL_USART_TX_PIN GP0

// Split
#define MASTER_RIGHT

// Trackpoint
// I think PS2_PIO_USE_PIO1 is required bc PIO0 is used for serial communication.
#define PS2_PIO_USE_PIO1
#define PS2_MOUSE_X_MULTIPLIER 5
#define PS2_MOUSE_Y_MULTIPLIER 5
