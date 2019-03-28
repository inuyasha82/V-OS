/*
 * Copyright 2004-2010, Haiku Inc. All Rights Reserved.
 * Distributed under the terms of the MIT License.
 */
#ifndef _USB_HID_PAGE_GAME_CONTROLS_H
#define _USB_HID_PAGE_GAME_CONTROLS_H


/* Reference:
 *		HID Usage Page 0x05: Game Controls
 *		HID Usage Tables Ver. 1.12
 *		http://www.usb.org/developers/devclass_docs/Hut1_12.pdf
 */

// Usage IDs
enum {
	B_HID_UID_GAM_3D_GAME_CONTROLLER = 0x01,
	B_HID_UID_GAM_PINBALL_DEVICE,
	B_HID_UID_GAM_GUN_DEVICE,
	
	B_HID_UID_GAM_POINT_OF_VIEW = 0x20,
	B_HID_UID_GAM_TURN_RIGHT_LEFT,
	B_HID_UID_GAM_PITCH_FORWARD_BACKWARD,
	B_HID_UID_GAM_ROLL_RIGHT_LEFT,
	B_HID_UID_GAM_MOVE_RIGHT_LEFT,
	B_HID_UID_GAM_MOVE_FORWARD_BACKWARD,
	B_HID_UID_GAM_MOVE_UP_DOWN,
	B_HID_UID_GAM_LEAN_RIGHT_LEFT,
	B_HID_UID_GAM_LEAN_FORWARD_BACKWARD,
	B_HID_UID_GAM_HEIGHT_OF_POV,
	B_HID_UID_GAM_FLIPPER,
	B_HID_UID_GAM_SECONDARY_FLIPPER,
	B_HID_UID_GAM_BUMP,
	B_HID_UID_GAM_NEW_GAME,
	B_HID_UID_GAM_SHOOT_BALL,
	B_HID_UID_GAM_PLAYER,
	B_HID_UID_GAM_GUN_BOLT,
	B_HID_UID_GAM_GUN_CLIP,
	B_HID_UID_GAM_GUN_SELECTOR,
	B_HID_UID_GAM_GUN_SINGLE_SHOT,
	B_HID_UID_GAM_GUN_BURST,
	B_HID_UID_GAM_GUN_AUTOMATIC,
	B_HID_UID_GAM_GUN_SAFETY,
	B_HID_UID_GAM_GAMEPAD_FIRE_JUMP,
	B_HID_UID_GAM_GAMEPAD_TRIGGER
};


#endif // _USB_HID_PAGE_GAME_CONTROLS_H
