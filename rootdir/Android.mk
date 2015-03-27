LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

include $(CLEAR_VARS)
LOCAL_MODULE       := twrp.fstab
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := etc/twrp.fstab
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := prebuilt_file_contexts
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := etc/prebuilt_file_contexts
include $(BUILD_PREBUILT)
