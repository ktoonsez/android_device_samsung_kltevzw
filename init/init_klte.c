/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

#include "init_msm.h"

void init_msm_properties(unsigned long msm_id, unsigned long msm_ver, char *board_type)
{
    char platform[PROP_VALUE_MAX];
    char bootloader[PROP_VALUE_MAX];
    char device[PROP_VALUE_MAX];
    char devicename[PROP_VALUE_MAX];
    int rc;

    UNUSED(msm_id);
    UNUSED(msm_ver);
    UNUSED(board_type);

    rc = property_get("ro.board.platform", platform);
    if (!rc || !ISMATCH(platform, ANDROID_TARGET))
        return;

    property_get("ro.bootloader", bootloader);

    if (strstr(bootloader, "G900V")) {
        /* kltevzw */
        property_set("ro.build.fingerprint", "Verizon/kltevzw/kltevzw:4.4.2/KOT49H/G900VVRU1ANE9:user/release-keys");
        property_set("ro.build.description", "kltevzw-user 4.4.2 KOT49H G900VVRU1ANE9 release-keys");
        property_set("ro.product.model", "SM-G900V");
        property_set("ro.product.device", "kltevzw");
        cdma_properties("0", "311480", "Verizon");
    } else if (strstr(bootloader, "G900W8")) {
        /* kltecan */
        property_set("ro.build.fingerprint", "samsung/kltevl/kltecan:4.3/JSS15J/N900W8VLUBMJ4:user/release-keys");
        property_set("ro.build.description", "kltevl-user 4.3 JSS15J N900W8VLUBMJ4 release-keys");
        property_set("ro.product.model", "SM-G900W8");
        property_set("ro.product.device", "kltecan");
        gsm_properties();
    } else if (strstr(bootloader, "G900T")) {
        /* kltetmo */
        property_set("ro.build.fingerprint", "samsung/kltetmo/kltetmo:4.4.2/KOT49H/G900TUVU1BNH5:user/release-keys");
        property_set("ro.build.description", "kltetmo-user 4.4.2 KOT49H G900TUVU1BNH5 release-keys");
        property_set("ro.product.model", "SM-G900T");
        property_set("ro.product.device", "kltetmo");
        gsm_properties();
    } else if (strstr(bootloader, "G900M")) {
        /* klteub */
        property_set("ro.build.fingerprint", "samsung/klteub/klte:4.4.2/KOT49H/G900MUBU1ANCE:user/release-keys");
        property_set("ro.build.description", "klteub-user 4.4.2 KOT49H G900MUBU1ANCE release-keys");
        property_set("ro.product.model", "SM-G900M");
        property_set("ro.product.device", "klteub");
        gsm_properties();
    } else if (strstr(bootloader, "G900A")) {
        /* klteatt */
        property_set("ro.build.fingerprint", "samsung/klteatt/klte:4.4.2/KOT49H/G900AUCU2AND3:user/release-keys");
        property_set("ro.build.description", "klteatt-user 4.4.2 KOT49H G900AUCU2AND3 release-keys");
        property_set("ro.product.model", "SM-G900A");
        property_set("ro.product.device", "klteatt");
        gsm_properties();
    } else if (strstr(bootloader, "G900S")) {
        /* klteskt */
        property_set("ro.build.fingerprint", "samsung/klteskt/klte:4.4.2/KOT49H/G900SKSU1ANI1:user/release-keys");
        property_set("ro.build.description", "klteskt-user 4.4.2 KOT49H G900SKSU1ANI1 release-keys");
        property_set("ro.product.model", "SM-G900S");
        property_set("ro.product.device", "klteskt");
        gsm_properties();
    } else if (strstr(bootloader, "G900K")) {
        /* kltektt */
        property_set("ro.build.fingerprint", "samsung/kltektt/klte:4.4.2/KOT49H/G900KKTU1ANI2:user/release-keys");
        property_set("ro.build.description", "kltektt-user 4.4.2 KOT49H G900KKTU1ANI2 release-keys");
        property_set("ro.product.model", "SM-G900K");
        property_set("ro.product.device", "kltektt");
        gsm_properties();
    } else if (strstr(bootloader, "G900P")) {
        /* kltespr */
        property_set("ro.build.fingerprint", "samsung/kltespr/kltespr:4.4.2/KOT49H/G900PVPU1ANCB:user/release-keys");
        property_set("ro.build.description", "kltespr-user 4.4.2 KOT49H G900PVPU1ANCB release-keys");
        property_set("ro.product.model", "SM-G900P");
        property_set("ro.product.device", "kltespr");
        property_set("telephony.sms.pseudo_multipart", "1");
        cdma_properties("1", "310120", "Sprint");
    } else if (strstr(bootloader, "G900R4")) {
        /* klteusc */
        property_set("ro.build.fingerprint", "samsung/klteusc/klteusc:4.4.2/KOT49H/G900R4VXU1ANCF:user/release-keys");
        property_set("ro.build.description", "klteusc-user 4.4.2 KOT49H G900R4VXU1ANCF release-keys");
        property_set("ro.product.model", "SM-G900R4");
        property_set("ro.product.device", "klteusc");
        cdma_properties("0", "311580", "U.S.Cellular");
    } else if (strstr(bootloader, "G900I")) {
        /* kltedv */
        property_set("ro.build.fingerprint", "samsung/kltedv/klte:4.4.2/KOT49H/G900IDVU1ANC6:user/release-keys");
        property_set("ro.build.description", "kltedv-user 4.4.2 KOT49H G900IDVU1ANC6 release-keys");
        property_set("ro.product.model", "SM-G900I");
        property_set("ro.product.device", "kltedv");
        gsm_properties();
    } else if (strstr(bootloader, "G900FD")) {
        /* klteduosxx */
        property_set("ro.build.fingerprint", "samsung/klteduosxx/klte:5.0/LRX21T/G900FDXXU1BNL9:user/release-keys");
        property_set("ro.build.description", "klteduosxx-user 5.0 LRX21T G900FDXXU1BNL9 release-keys");
        property_set("ro.product.model", "SM-G900FD");
        property_set("ro.product.device", "klte");
        gsm_properties_duos();
    } else {
        /* kltexx */
        property_set("ro.build.fingerprint", "samsung/kltexx/klte:4.4.2/KOT49H/G900FXXU1ANG2:user/release-keys");
        property_set("ro.build.description", "kltexx-user 4.4.2 KOT49H G900FXXU1ANG2 release-keys");
        property_set("ro.product.model", "SM-G900F");
        property_set("ro.product.device", "kltexx");
        gsm_properties();
    }

    property_get("ro.product.device", device);
    strlcpy(devicename, device, sizeof(devicename));
    INFO("Found bootloader id %s setting build properties for %s device\n", bootloader, devicename);
}

void cdma_properties(char default_cdma_sub[], char operator_numeric[],
        char operator_alpha[])
{
    property_set("ril.subscription.types", "NV,RUIM");
    property_set("ro.cdma.home.operator.numeric", operator_numeric);
    property_set("ro.cdma.home.operator.alpha", operator_alpha);
    property_set("ro.telephony.default_cdma_sub", default_cdma_sub);
    property_set("ro.telephony.default_network", "10");
    property_set("ro.telephony.ril.config", "newDriverCallU,newDialCode");
    property_set("telephony.lteOnCdmaDevice", "1");
}

void gsm_properties()
{
    property_set("telephony.lteOnGsmDevice", "1");
    property_set("ro.telephony.default_network", "9");
    property_set("ro.telephony.ril.config", "newDialCode");
}

void gsm_properties_duos()
{
    property_set("telephony.lteOnGsmDevice", "1");
    property_set("ro.telephony.default_network", "9");
    property_set("ro.telephony.ril.config", "newDialCode");
}
