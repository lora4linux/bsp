DISTRO = l4l

image:
	bitbake l4l-image-dev

override OB_EXPORT += TEMPLATECONF
TEMPLATECONF = ${OB_ROOT_DIR}/platform/meta-lora4linux/conf/templates/default

DL_DIR     ?= ${OB_ROOT_DIR}/downloads
SSTATE_DIR ?= ${OB_ROOT_DIR}/sstate-cache
