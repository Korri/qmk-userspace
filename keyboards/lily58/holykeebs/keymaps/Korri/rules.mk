LTO_ENABLE = yes                # Link Time Optimization enabled
BOOTMAGIC_ENABLE = no           # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no            # Mouse keys
EXTRAKEY_ENABLE = no            # Audio control and System control
CONSOLE_ENABLE = no             # Console for debug
COMMAND_ENABLE = no             # Commands for debug and configuration
NKRO_ENABLE = no                # N-Key Rollover
BACKLIGHT_ENABLE = no           # Enable keyboard backlight functionality
AUDIO_ENABLE = no               # Audio output
RGBLIGHT_ENABLE = no            # Enable WS2812 RGB underlight.
SWAP_HANDS_ENABLE = no          # Enable one-hand typing
TRI_LAYER_ENABLE = yes          # Add tri layer (e.g. raise + lower = adjust)
VIA_ENABLE = yes				# Enable VIA support for quick remapping of keys
SPLIT_POINTING_ENABLE = yes		# Enable split pointing device support
POINTING_DEVICE_ENABLE = yes    # Enable pointing device support
POINTING_DEVICE_DRIVER = azoteq_iqs5xx # Enable Azoteq IQS5xx driver for capacitive touch pointing device
POINTING_DEVICE_COMBINED = yes # Enable combined pointing device support (e.g. trackball + touchpad)

ifeq ($(strip $(SIDE)),right)
	OPT_DEFS += -DAZOTEQ_IQS5XX_ROTATION_180
endif

