void init_save_file_maybe(u32 fileNum) {
    s32 i;
    s32 unused1;

    gSaveBuffer1.files[fileNum].world = 1;
    gSaveBuffer1.files[fileNum].level = 1;
    gSaveBuffer1.files[fileNum].data8 = 0;
    gSaveBuffer1.files[fileNum].cutscenesWatched = 1;
    gSaveBuffer1.files[fileNum].percentComplete = 0;
    gSaveBuffer1.files[fileNum].soundSetting = 1;
    gSaveBuffer1.files[fileNum].hudDisplay = 0;
    gSaveBuffer1.files[fileNum].data13 = 0;
    gSaveBuffer1.files[fileNum].data14 = 0;
    gSaveBuffer1.files[fileNum].data15 = 0;
    gSaveBuffer1.files[fileNum].data16 = 0;
    gSaveBuffer1.files[fileNum].data17 = 0;
    gSaveBuffer1.files[fileNum].hundredYardHopRecord = 0x5DC; // 31 seconds
    gSaveBuffer1.files[fileNum].bumperCropBumpRecord = 10;
    gSaveBuffer1.files[fileNum].checkerBoardChaseRecord = 0x960;

    for (i = 0; i < 6; i++) {
        gSaveBuffer1.files[fileNum].data38[i] = 0;
    }

    for (i = 0; i < 6; i++) {
        gSaveBuffer1.files[fileNum].shards[i] = 0;
    }

    gSaveBuffer1.files[fileNum].enemyCard1E[0] = 0;
    gSaveBuffer1.files[fileNum].enemyCard1E[1] = (u8)0;


    for (i = 0; i != 16; i++) {
        gSaveBuffer1.files[fileNum].enemyCard1E[i] = 0;
    }
    verify_save(fileNum);
    calc_file_checksum(fileNum);

    func_80004D34(D_800D5150[fileNum], &gSaveBuffer1.files[fileNum], 0x58);
    func_80004D34(D_800D5150[fileNum], &gSaveBuffer1.files[fileNum], 0x58);

    gSaveBuffer2 = gSaveBuffer1;
}

void verify_save(s32 fileNum) {
    u32 i;
    u32 percent;

    if (gSaveBuffer1.files[fileNum].hundredYardHopRecord < 600) {
        gSaveBuffer1.files[fileNum].hundredYardHopRecord = 600;
    }
    if (gSaveBuffer1.files[fileNum].bumperCropBumpRecord > 200) {
        gSaveBuffer1.files[fileNum].bumperCropBumpRecord = 200;
    }
    if (gSaveBuffer1.files[fileNum].checkerBoardChaseRecord < 600) {
        gSaveBuffer1.files[fileNum].checkerBoardChaseRecord = 600;
    }
    gSaveBuffer1.files[fileNum].shards[23] = (u8)0;
    gSaveBuffer1.files[fileNum].shards[3] = (u8)0;
    gSaveBuffer1.files[fileNum].data38[3] = (u8)0;
    percent = 0;
    if (gSaveBuffer1.files[fileNum].cutscenesWatched & 2) {
        percent = 2;
    }


    for (i = 0; i < 5; i++) {
        if (i < gSaveBuffer1.files[fileNum].world - 1) {
            gSaveBuffer1.files[fileNum].shards[8 + i] = 1;
        }
    }
    // loop_9:
        // phi_a2->unk44 = (u8)0;
        // if (phi_a1 < (u32) (temp_v0->unk10 - 1)) {
            //     (temp_a3 + phi_a1)->unk44 = (u8)1U;
        // }
        // temp_a1 = phi_a1 + 1;
        // phi_a2 = phi_a2 + 1;
        // phi_a1 = (u32) temp_a1;
        // if (temp_a1 < 5) {
            //     goto loop_9;
        // }
    if (gSaveBuffer1.files[fileNum].world >= 8) {
        gSaveBuffer1.files[fileNum].data38[2] = 1;
        gSaveBuffer1.files[fileNum].data38[1] = 1;
    }
    if (gSaveBuffer1.files[fileNum].world < 6) {
        gSaveBuffer1.files[fileNum].data38[2] = 0;
        gSaveBuffer1.files[fileNum].data38[1] = 0;
    }

    // problematic loop; might have to regenerate in m2c
    for (i = 0; i < 16; i++) {
        if (gSaveBuffer1.files[fileNum].shards[8] != 0) {
            percent += D_800BE5A8[i];
        }
        if (gSaveBuffer1.files[fileNum].shards[i] & 1)
            percent++;
        if (gSaveBuffer1.files[fileNum].shards[i] & 2)
            percent++;
        if (gSaveBuffer1.files[fileNum].shards[i] & 4)
            percent++;
    }

    gSaveBuffer1.files[fileNum].percentComplete = percent;
    gSaveBuffer1.files[fileNum].data13 = 0U;
    if (gSaveBuffer1.files[fileNum].data38[1] != 0) {
        gSaveBuffer1.files[fileNum].data13 = 1U;
    }
    gSaveBuffer1.files[fileNum].data14 = 0U;
    if (gSaveBuffer1.files[fileNum].data38[2] != 0) {
        gSaveBuffer1.files[fileNum].data14 = 1U;
    }
}
