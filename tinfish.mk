# Copyright (C) 2012 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

$(call inherit-product, build/target/product/aosp_x86.mk)


PRODUCT_COPY_FILES += \
	device/spamdroid/etc/handheld_core_hardware.xml:system/etc/permissions/handheld_core_hardware.xml \
    device/tinfish/init.rc:root/init.rc \
    device/tinfish/ueventd.tinfish.rc:root/ueventd.tinfish.rc \
    device/tinfish/fstab.tinfish:root/fstab.tinfish \
    device/tinfish/init.tinfish.rc:root/init.tinfish.rc 

PRODUCT_PACKAGES += \
    sensors.tinfish \
    camera.tinfish \
    audio.tinfish \
    tinyhome \
    tinyrild \
    TinyMediaProvider \
    busybox \
    libGLES_mesa \
    libmesa_gallium \
    libmesa_glsl \
    libnb 

$(call inherit-product, device/tinfish/nativebridge/nativebridge.mk)

# PRODUCT_PROPERTY_OVERRIDES += \
#     dalvik.vm.heapstartsize=8m \
#     dalvik.vm.heapgrowthlimit=128m \
#     dalvik.vm.heapsize=174m

PRODUCT_PROPERTY_OVERRIDES += \
    ro.carrier=Vodafone \
    rild.libpath=/system/lib/tinyrild.so

PRODUCT_NAME := tinfish
PRODUCT_DEVICE := tinfish
PRODUCT_BRAND := tinfish
PRODUCT_MODEL := tinfish

# default is nosdcard, S/W button enabled in resource
DEVICE_PACKAGE_OVERLAYS := device/generic/x86/overlay
PRODUCT_CHARACTERISTICS := nosdcard
