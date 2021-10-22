s32 func_80011180(void *arg0, void *arg1) {
    void *sp2D4;
    s32 sp2CC;
    void *sp2C0;
    void *sp2BC;
    void *sp2B8;
    f32 sp1CC;
    f32 sp190;
    s32 (*)[4] sp78;
    void *sp74;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f18_3;
    f32 temp_f18_4;
    f32 temp_f2;
    f32 temp_f2_10;
    f32 temp_f2_11;
    f32 temp_f2_12;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f2_8;
    f32 temp_f2_9;
    s32 (*)[4] temp_s0_7;
    s32 (*)[4] temp_v0_3;
    s32 temp_a0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u32 temp_t1;
    u32 temp_t7;
    u32 temp_t7_2;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v1;
    void *temp_a0_10;
    void *temp_a0_11;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;
    void *temp_a0_8;
    void *temp_a0_9;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s2;
    void *temp_t1_10;
    void *temp_t1_11;
    void *temp_t1_12;
    void *temp_t1_13;
    void *temp_t1_14;
    void *temp_t1_15;
    void *temp_t1_2;
    void *temp_t1_3;
    void *temp_t1_4;
    void *temp_t1_5;
    void *temp_t1_6;
    void *temp_t1_7;
    void *temp_t1_8;
    void *temp_t1_9;
    void *temp_t2;
    void *temp_t2_10;
    void *temp_t2_11;
    void *temp_t2_12;
    void *temp_t2_13;
    void *temp_t2_14;
    void *temp_t2_2;
    void *temp_t2_3;
    void *temp_t2_4;
    void *temp_t2_5;
    void *temp_t2_6;
    void *temp_t2_7;
    void *temp_t2_8;
    void *temp_t2_9;
    void *temp_t3;
    void *temp_t3_10;
    void *temp_t3_11;
    void *temp_t3_12;
    void *temp_t3_13;
    void *temp_t3_14;
    void *temp_t3_2;
    void *temp_t3_3;
    void *temp_t3_4;
    void *temp_t3_5;
    void *temp_t3_6;
    void *temp_t3_7;
    void *temp_t3_8;
    void *temp_t3_9;
    void *temp_t4;
    void *temp_t4_10;
    void *temp_t4_11;
    void *temp_t4_12;
    void *temp_t4_13;
    void *temp_t4_2;
    void *temp_t4_3;
    void *temp_t4_4;
    void *temp_t4_5;
    void *temp_t4_6;
    void *temp_t4_7;
    void *temp_t4_8;
    void *temp_t4_9;
    void *temp_t5;
    void *temp_t5_10;
    void *temp_t5_11;
    void *temp_t5_12;
    void *temp_t5_13;
    void *temp_t5_2;
    void *temp_t5_3;
    void *temp_t5_4;
    void *temp_t5_5;
    void *temp_t5_6;
    void *temp_t5_7;
    void *temp_t5_8;
    void *temp_t5_9;
    void *temp_t6;
    void *temp_t6_10;
    void *temp_t6_11;
    void *temp_t6_12;
    void *temp_t6_13;
    void *temp_t6_2;
    void *temp_t6_3;
    void *temp_t6_4;
    void *temp_t6_5;
    void *temp_t6_6;
    void *temp_t6_7;
    void *temp_t6_8;
    void *temp_t6_9;
    void *temp_t7_10;
    void *temp_t7_11;
    void *temp_t7_12;
    void *temp_t7_13;
    void *temp_t7_14;
    void *temp_t7_15;
    void *temp_t7_16;
    void *temp_t7_3;
    void *temp_t7_4;
    void *temp_t7_5;
    void *temp_t7_6;
    void *temp_t7_7;
    void *temp_t7_8;
    void *temp_t7_9;
    void *temp_t8;
    void *temp_t8_10;
    void *temp_t8_11;
    void *temp_t8_12;
    void *temp_t8_13;
    void *temp_t8_14;
    void *temp_t8_15;
    void *temp_t8_2;
    void *temp_t8_3;
    void *temp_t8_4;
    void *temp_t8_5;
    void *temp_t8_6;
    void *temp_t8_7;
    void *temp_t8_8;
    void *temp_t8_9;
    void *temp_t9;
    void *temp_t9_10;
    void *temp_t9_11;
    void *temp_t9_12;
    void *temp_t9_13;
    void *temp_t9_2;
    void *temp_t9_3;
    void *temp_t9_4;
    void *temp_t9_5;
    void *temp_t9_6;
    void *temp_t9_7;
    void *temp_t9_8;
    void *temp_t9_9;
    void *temp_v0;
    void *phi_a1;
    void *phi_v1;
    s32 phi_a0;
    void *phi_fp;
    s32 (*)[4] phi_s0;
    void *phi_a3;
    s32 phi_a0_2;
    u8 phi_v1_2;
    s32 (*)[4] phi_s0_2;
    void *phi_a3_2;
    s32 phi_a0_3;
    u8 phi_v0;
    s32 (*)[4] phi_s0_3;
    u32 phi_a2;
    s32 phi_t3;

    sp2CC = 0;
    sp2D4 = *arg0;
    temp_v0 = arg1->unk4C;
    if (temp_v0 != 0) {
        phi_a1 = temp_v0;
        phi_v1 = temp_v0 + 4;
        phi_a0 = 0;
        phi_fp = sp2BC;
loop_2:
        temp_v0_2 = *phi_a1;
        temp_a0 = phi_a0 + 1;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    if (temp_v0_2 != 3) {

                    } else {
                        sp2B8 = phi_v1;
block_10:
                        phi_v1 = phi_v1 + 0x10;
                    }
                } else {
                    phi_fp = phi_v1;
                    phi_v1 = phi_v1 + 0x14;
                }
            } else {
                sp2C0 = phi_v1;
                goto block_10;
            }
        }
        phi_a1 = phi_a1 + 1;
        phi_a0 = temp_a0;
        if (temp_a0 != 3) {
            goto loop_2;
        }
        sp2BC = phi_fp;
    }
    if (arg1->unk56 > 0) {
        sp74 = arg1;
loop_15:
        temp_s2 = sp74->unk58;
        temp_v0_3 = temp_s2 + 8;
        if (temp_s2 != 0) {
            temp_v1 = temp_s2->unk5;
            sp78 = temp_v0_3;
            if (temp_v1 != 2) {
                if (temp_v1 == 4) {
                    if (D_8003DCAB != arg1->unk4->unkE) {
                        *temp_v0_3 = gDynamicBuffer1.top;
                        temp_s0 = gDynamicBuffer1.top;
                        gDynamicBuffer1.top = temp_s0 + 0x40;
                        phi_s0 = temp_s0;
block_36:
                        temp_v0_6 = temp_s2->unk4;
                        temp_t1 = temp_v0_6 - 1;
                        if (temp_t1 < 0x3F) {
                            goto **(&jtbl_80040A70 + (temp_t1 * 4)); // switch 3
                        case 0: // switch 3
                            phi_v1_2 = temp_s2->unk5;
                            phi_s0_2 = phi_s0;
                            goto block_91;
                        case 1: // switch 3
                            phi_v1_2 = temp_s2->unk5;
                            phi_s0_2 = phi_s0;
                            goto block_91;
                        case 17: // switch 3
                            func_8001B784(phi_s0, (bitwise f32) arg1->unk1C, (bitwise f32) arg1->unk20, (bitwise f32) arg1->unk24);
                            goto block_90;
                        case 18: // switch 3
                            func_8001D0B4(phi_s0, arg1->unk2C, arg1->unk30, arg1->unk34, arg1->unk38);
                            goto block_90;
                        case 19: // switch 3
                            func_8001D184(phi_s0, arg1->unk1C, arg1->unk20, arg1->unk24, (bitwise f32) arg1->unk2C, (bitwise f32) arg1->unk30, (bitwise f32) arg1->unk34, arg1->unk38);
                            goto block_90;
                        case 20: // switch 3
                            func_8001D264(phi_s0, arg1->unk30, arg1->unk34, (bitwise s32) arg1->unk38);
                            goto block_90;
                        case 21: // switch 3
                            func_8001D34C(phi_s0, arg1->unk1C, arg1->unk20, arg1->unk24, (bitwise f32) arg1->unk30, (bitwise f32) arg1->unk34, arg1->unk38);
                            goto block_90;
                        case 22: // switch 3
                            func_8001B9B8(phi_s0, arg1->unk2C, arg1->unk30, arg1->unk34, arg1->unk38);
                            goto block_90;
                        case 23: // switch 3
                            func_8001BA60(phi_s0, arg1->unk1C, arg1->unk20, arg1->unk24, (bitwise f32) arg1->unk2C, (bitwise f32) arg1->unk30, (bitwise f32) arg1->unk34, arg1->unk38);
                            goto block_90;
                        case 24: // switch 3
                            func_8001BB30(phi_s0, arg1->unk1C, arg1->unk20, arg1->unk24, (bitwise f32) arg1->unk2C, (bitwise f32) arg1->unk30, (bitwise f32) arg1->unk34, arg1->unk38, arg1->unk40, arg1->unk44, arg1->unk48);
                            D_8004AA94 = D_8004AA94 * arg1->unk40;
                            phi_v1_2 = temp_s2->unk5;
                            phi_s0_2 = phi_s0;
                            goto block_91;
                        case 25: // switch 3
                            func_8001BCE0(phi_s0, arg1->unk30, arg1->unk34, (bitwise s32) arg1->unk38);
                            goto block_90;
                        case 26: // switch 3
                            func_8001BFDC(phi_s0, arg1->unk1C, arg1->unk20, arg1->unk24, (bitwise f32) arg1->unk30, (bitwise f32) arg1->unk34, arg1->unk38);
                            goto block_90;
                        case 27: // switch 3
                            func_8001C348(phi_s0, arg1->unk1C, arg1->unk20, arg1->unk24, (bitwise f32) arg1->unk30, (bitwise f32) arg1->unk34, arg1->unk38, arg1->unk40, arg1->unk44, arg1->unk48);
                            D_8004AA94 = D_8004AA94 * arg1->unk40;
                            phi_v1_2 = temp_s2->unk5;
                            phi_s0_2 = phi_s0;
                            goto block_91;
                        case 28: // switch 3
                            func_8001C874(phi_s0, arg1->unk30, arg1->unk34, (bitwise s32) arg1->unk38);
                            goto block_90;
                        case 29: // switch 3
                            func_8001C90C(phi_s0, arg1->unk1C, arg1->unk20, arg1->unk24, (bitwise f32) arg1->unk30, (bitwise f32) arg1->unk34, arg1->unk38);
                            goto block_90;
                        case 30: // switch 3
                            func_8001C9CC(phi_s0, arg1->unk1C, arg1->unk20, arg1->unk24, (bitwise f32) arg1->unk30, (bitwise f32) arg1->unk34, arg1->unk38, arg1->unk40, arg1->unk44, arg1->unk48);
                            D_8004AA94 = D_8004AA94 * arg1->unk40;
                            phi_v1_2 = temp_s2->unk5;
                            phi_s0_2 = phi_s0;
                            goto block_91;
                        case 31: // switch 3
                            func_8001B540(phi_s0, (bitwise s32) arg1->unk40, (bitwise s32) arg1->unk44, (bitwise s32) arg1->unk48);
                            D_8004AA94 = D_8004AA94 * arg1->unk40;
                            phi_v1_2 = temp_s2->unk5;
                            phi_s0_2 = phi_s0;
                            goto block_91;
                        case 32: // switch 3
                            func_80010EF8(phi_s0, arg1, 0);
                            goto block_90;
                        case 33: // switch 3
                            func_80010EF8(phi_s0, arg1, 1);
                            goto block_90;
                        case 34: // switch 3
                            func_80010B58(phi_s0, arg1, 0);
                            goto block_90;
                        case 35: // switch 3
                            func_80010B58(phi_s0, arg1, 1);
                            goto block_90;
                        case 36: // switch 3
                            func_8001103C(phi_s0, arg1, 0);
                            goto block_90;
                        case 37: // switch 3
                            func_8001103C(phi_s0, arg1, 1);
                            goto block_90;
                        case 38: // switch 3
                            func_80010D28(phi_s0, arg1, 0);
                            goto block_90;
                        case 39: // switch 3
                            func_80010D28(phi_s0, arg1, 1);
                            goto block_90;
                        case 55: // switch 3
                            func_8001B784(phi_s0, (bitwise f32) sp2C0->unk4, (bitwise f32) sp2C0->unk8, (bitwise f32) sp2C0->unkC);
                            goto block_90;
                        case 56: // switch 3
                            func_8001B9B8(phi_s0, sp2BC->unk4, sp2BC->unk8, sp2BC->unkC, sp2BC->unk10);
                            goto block_90;
                        case 57: // switch 3
                            func_8001BCE0(phi_s0, sp2BC->unk8, sp2BC->unkC, (bitwise s32) sp2BC->unk10);
                            goto block_90;
                        case 58: // switch 3
                            func_8001B540(phi_s0, sp2B8->unk4, sp2B8->unk8, sp2B8->unkC);
                            D_8004AA94 = D_8004AA94 * sp2B8->unk4;
                            phi_v1_2 = temp_s2->unk5;
                            phi_s0_2 = phi_s0;
                            goto block_91;
                        case 59: // switch 3
                            func_8001BA60(phi_s0, sp2C0->unk4, sp2C0->unk8, sp2C0->unkC, (bitwise f32) sp2BC->unk4, (bitwise f32) sp2BC->unk8, (bitwise f32) sp2BC->unkC, sp2BC->unk10);
                            goto block_90;
                        case 60: // switch 3
                            func_8001BB30(phi_s0, sp2C0->unk4, sp2C0->unk8, sp2C0->unkC, (bitwise f32) sp2BC->unk4, (bitwise f32) sp2BC->unk8, (bitwise f32) sp2BC->unkC, sp2BC->unk10, sp2B8->unk4, sp2B8->unk8, sp2B8->unkC);
                            D_8004AA94 = D_8004AA94 * sp2B8->unk4;
                            phi_v1_2 = temp_s2->unk5;
                            phi_s0_2 = phi_s0;
                            goto block_91;
                        case 61: // switch 3
                            func_8001BFDC(phi_s0, sp2C0->unk4, sp2C0->unk8, sp2C0->unkC, (bitwise f32) sp2BC->unk8, (bitwise f32) sp2BC->unkC, sp2BC->unk10);
                            goto block_90;
                        case 62: // switch 3
                            func_8001C348(phi_s0, sp2C0->unk4, sp2C0->unk8, sp2C0->unkC, (bitwise f32) sp2BC->unk8, (bitwise f32) sp2BC->unkC, sp2BC->unk10, sp2B8->unk4, sp2B8->unk8, sp2B8->unkC);
                            D_8004AA94 = D_8004AA94 * sp2B8->unk4;
                            phi_v1_2 = temp_s2->unk5;
                            phi_s0_2 = phi_s0;
                            goto block_91;
                        case 40: // switch 3
                            temp_t7_3 = sp2D4;
                            sp2D4 = temp_t7_3 + 8;
                            temp_t7_3->unk4 = 0;
                            temp_t7_3->unk0 = 0xD5000001;
                            temp_t2 = sp2D4;
                            sp2D4 = temp_t2 + 8;
                            temp_t2->unk0 = 0xDB000008;
                            temp_t2->unk4 = D_8004AA90->unk0;
                            temp_t6 = sp2D4;
                            sp2D4 = temp_t6 + 8;
                            temp_t6->unk0 = 0xDB00000C;
                            temp_t6->unk4 = D_8004AA90->unk4;
                            temp_t1_2 = sp2D4;
                            sp2D4 = temp_t1_2 + 8;
                            temp_t1_2->unk0 = 0xDB000010;
                            temp_t1_2->unk4 = D_8004AA90->unk8;
                            temp_t7_4 = sp2D4;
                            sp2D4 = temp_t7_4 + 8;
                            temp_t7_4->unk0 = 0xDB000014;
                            temp_t7_4->unk4 = D_8004AA90->unkC;
                            temp_t3 = sp2D4;
                            sp2D4 = temp_t3 + 8;
                            temp_t3->unk0 = 0xDB000000;
                            temp_t3->unk4 = D_8004AA90->unk10;
                            temp_t8 = sp2D4;
                            sp2D4 = temp_t8 + 8;
                            temp_t8->unk0 = 0xDB000004;
                            temp_t8->unk4 = D_8004AA90->unk14;
                            temp_t5 = sp2D4;
                            sp2D4 = temp_t5 + 8;
                            temp_t5->unk0 = 0xDB000028;
                            temp_t5->unk4 = D_8004AA90->unk20;
                            temp_t9 = sp2D4;
                            sp2D4 = temp_t9 + 8;
                            temp_t9->unk0 = 0xDB00002C;
                            temp_t9->unk4 = D_8004AA90->unk24;
                            temp_t4 = sp2D4;
                            sp2D4 = temp_t4 + 8;
                            temp_t4->unk0 = 0xDB000030;
                            temp_t4->unk4 = D_8004AA90->unk28;
                            temp_t2_2 = sp2D4;
                            sp2D4 = temp_t2_2 + 8;
                            temp_t2_2->unk0 = 0xDB000034;
                            temp_t2_2->unk4 = D_8004AA90->unk2C;
                            temp_a0_2 = sp2D4;
                            sp2D4 = temp_a0_2 + 8;
                            temp_a0_2->unk0 = 0xDB000020;
                            temp_a0_2->unk4 = D_8004AA90->unk30;
                            temp_t1_3 = sp2D4;
                            sp2D4 = temp_t1_3 + 8;
                            temp_t1_3->unk0 = 0xDB000024;
                            temp_t1_3->unk4 = D_8004AA90->unk34;
                            phi_a2 = (arg1->unk56 * 4) + arg1;
                            goto block_117;
                        case 41: // switch 3
                            temp_t8_2 = sp2D4;
                            sp2D4 = temp_t8_2 + 8;
                            temp_t8_2->unk4 = 0;
                            temp_t8_2->unk0 = 0xD5000001;
                            temp_t1_4 = sp2D4;
                            sp2D4 = temp_t1_4 + 8;
                            temp_t1_4->unk0 = 0xDB000000;
                            temp_t1_4->unk4 = D_8004AA90->unk0;
                            temp_t7_5 = sp2D4;
                            sp2D4 = temp_t7_5 + 8;
                            temp_t7_5->unk0 = 0xDB000004;
                            temp_t7_5->unk4 = D_8004AA90->unk4;
                            temp_t3_2 = sp2D4;
                            sp2D4 = temp_t3_2 + 8;
                            temp_t3_2->unk0 = 0xDB000008;
                            temp_t3_2->unk4 = D_8004AA90->unk8;
                            temp_t8_3 = sp2D4;
                            sp2D4 = temp_t8_3 + 8;
                            temp_t8_3->unk0 = 0xDB00000C;
                            temp_t8_3->unk4 = D_8004AA90->unkC;
                            temp_t5_2 = sp2D4;
                            sp2D4 = temp_t5_2 + 8;
                            temp_t5_2->unk0 = 0xDB000010;
                            temp_t5_2->unk4 = D_8004AA90->unk10;
                            temp_t9_2 = sp2D4;
                            sp2D4 = temp_t9_2 + 8;
                            temp_t9_2->unk0 = 0xDB000014;
                            temp_t9_2->unk4 = D_8004AA90->unk14;
                            temp_t4_2 = sp2D4;
                            sp2D4 = temp_t4_2 + 8;
                            temp_t4_2->unk0 = 0xDB000020;
                            temp_t4_2->unk4 = D_8004AA90->unk20;
                            temp_t2_3 = sp2D4;
                            sp2D4 = temp_t2_3 + 8;
                            temp_t2_3->unk0 = 0xDB000024;
                            temp_t2_3->unk4 = D_8004AA90->unk24;
                            temp_t6_2 = sp2D4;
                            sp2D4 = temp_t6_2 + 8;
                            temp_t6_2->unk0 = 0xDB000028;
                            temp_t6_2->unk4 = D_8004AA90->unk28;
                            temp_t1_5 = sp2D4;
                            sp2D4 = temp_t1_5 + 8;
                            temp_t1_5->unk0 = 0xDB00002C;
                            temp_t1_5->unk4 = D_8004AA90->unk2C;
                            temp_a0_3 = sp2D4;
                            sp2D4 = temp_a0_3 + 8;
                            temp_a0_3->unk0 = 0xDB000030;
                            temp_a0_3->unk4 = D_8004AA90->unk30;
                            temp_t3_3 = sp2D4;
                            sp2D4 = temp_t3_3 + 8;
                            temp_t3_3->unk0 = 0xDB000034;
                            temp_t3_3->unk4 = D_8004AA90->unk34;
                            phi_a2 = (arg1->unk56 * 4) + arg1;
                            goto block_117;
                        case 42: // switch 3
                            temp_f18 = D_8004AA94;
                            temp_f18_2 = arg1->unk44 * temp_f18;
                            D_8004AA94 = temp_f18 * arg1->unk40;
                            temp_f16 = D_8004AA94;
                            D_8004AAD8.unk4 = 0.0f;
                            D_8004AAD8.unk8 = 0.0f;
                            D_8004AAD8.unkC = 0.0f;
                            D_8004AAD8.unk10 = 0.0f;
                            D_8004AAD8.unk18 = 0.0f;
                            D_8004AAD8.unk14 = D_8004AA98.unk14 * temp_f18_2;
                            D_8004AAD8.unk1C = 0.0f;
                            D_8004AAD8.unk0 = D_8004AA98.unk0 * temp_f16;
                            D_8004AAD8.unk20 = 0.0f;
                            D_8004AAD8.unk24 = 0.0f;
                            D_8004AAD8.unk28 = D_8004AA98.unk28 * temp_f16;
                            D_8004AAD8.unk2C = D_8004AA98.unk2C * temp_f16;
                            func_80019A30(&D_8004AAD8, phi_s0);
                            temp_t9_3 = sp2D4;
                            sp2D4 = temp_t9_3 + 8;
                            temp_t9_3->unk4 = 0;
                            temp_t9_3->unk0 = 0xD5000001;
                            temp_t3_4 = sp2D4;
                            sp2D4 = temp_t3_4 + 8;
                            temp_t3_4->unk0 = 0xDB000008;
                            temp_t3_4->unk4 = phi_s0->unk0;
                            temp_t7_6 = sp2D4;
                            sp2D4 = temp_t7_6 + 8;
                            temp_t7_6->unk0 = 0xDB00000C;
                            temp_t7_6->unk4 = phi_s0->unk4;
                            temp_t1_6 = sp2D4;
                            sp2D4 = temp_t1_6 + 8;
                            temp_t1_6->unk0 = 0xDB000010;
                            temp_t1_6->unk4 = phi_s0->unk8;
                            temp_t6_3 = sp2D4;
                            sp2D4 = temp_t6_3 + 8;
                            temp_t6_3->unk0 = 0xDB000014;
                            temp_t6_3->unk4 = phi_s0->unkC;
                            temp_t2_4 = sp2D4;
                            sp2D4 = temp_t2_4 + 8;
                            temp_t2_4->unk0 = 0xDB000000;
                            temp_t2_4->unk4 = phi_s0->unk10;
                            temp_t4_3 = sp2D4;
                            sp2D4 = temp_t4_3 + 8;
                            temp_t4_3->unk0 = 0xDB000004;
                            temp_t4_3->unk4 = phi_s0->unk14;
                            temp_t9_4 = sp2D4;
                            sp2D4 = temp_t9_4 + 8;
                            temp_t9_4->unk0 = 0xDB000028;
                            temp_t9_4->unk4 = phi_s0->unk20;
                            temp_t5_3 = sp2D4;
                            sp2D4 = temp_t5_3 + 8;
                            temp_t5_3->unk0 = 0xDB00002C;
                            temp_t5_3->unk4 = phi_s0->unk24;
                            temp_t8_4 = sp2D4;
                            sp2D4 = temp_t8_4 + 8;
                            temp_t8_4->unk0 = 0xDB000030;
                            temp_t8_4->unk4 = phi_s0->unk28;
                            temp_t3_5 = sp2D4;
                            sp2D4 = temp_t3_5 + 8;
                            temp_t3_5->unk0 = 0xDB000034;
                            temp_t3_5->unk4 = phi_s0->unk2C;
                            temp_a0_4 = sp2D4;
                            sp2D4 = temp_a0_4 + 8;
                            temp_a0_4->unk0 = 0xDB000020;
                            temp_a0_4->unk4 = phi_s0->unk30;
                            temp_t1_7 = sp2D4;
                            sp2D4 = temp_t1_7 + 8;
                            temp_t1_7->unk0 = 0xDB000024;
                            temp_t1_7->unk4 = phi_s0->unk34;
                            phi_a2 = (arg1->unk56 * 4) + arg1;
                            goto block_117;
                        case 43: // switch 3
                            temp_f18_3 = D_8004AA94;
                            temp_f18_4 = arg1->unk44 * temp_f18_3;
                            D_8004AA94 = temp_f18_3 * arg1->unk40;
                            temp_f16_2 = D_8004AA94;
                            D_8004AAD8.unk4 = 0.0f;
                            D_8004AAD8.unk8 = 0.0f;
                            D_8004AAD8.unkC = 0.0f;
                            D_8004AAD8.unk10 = 0.0f;
                            D_8004AAD8.unk18 = 0.0f;
                            D_8004AAD8.unk14 = D_8004AA98.unk14 * temp_f18_4;
                            D_8004AAD8.unk1C = 0.0f;
                            D_8004AAD8.unk0 = D_8004AA98.unk0 * temp_f16_2;
                            D_8004AAD8.unk20 = 0.0f;
                            D_8004AAD8.unk24 = 0.0f;
                            D_8004AAD8.unk28 = D_8004AA98.unk28 * temp_f16_2;
                            D_8004AAD8.unk2C = D_8004AA98.unk2C * temp_f16_2;
                            func_80019A30(&D_8004AAD8, phi_s0);
                            temp_t7_7 = sp2D4;
                            sp2D4 = temp_t7_7 + 8;
                            temp_t7_7->unk4 = 0;
                            temp_t7_7->unk0 = 0xD5000001;
                            temp_t2_5 = sp2D4;
                            sp2D4 = temp_t2_5 + 8;
                            temp_t2_5->unk0 = 0xDB000000;
                            temp_t2_5->unk4 = phi_s0->unk0;
                            temp_t4_4 = sp2D4;
                            sp2D4 = temp_t4_4 + 8;
                            temp_t4_4->unk0 = 0xDB000004;
                            temp_t4_4->unk4 = phi_s0->unk4;
                            temp_t9_5 = sp2D4;
                            sp2D4 = temp_t9_5 + 8;
                            temp_t9_5->unk0 = 0xDB000008;
                            temp_t9_5->unk4 = phi_s0->unk8;
                            temp_t5_4 = sp2D4;
                            sp2D4 = temp_t5_4 + 8;
                            temp_t5_4->unk0 = 0xDB00000C;
                            temp_t5_4->unk4 = phi_s0->unkC;
                            temp_t8_5 = sp2D4;
                            sp2D4 = temp_t8_5 + 8;
                            temp_t8_5->unk0 = 0xDB000010;
                            temp_t8_5->unk4 = phi_s0->unk10;
                            temp_t3_6 = sp2D4;
                            sp2D4 = temp_t3_6 + 8;
                            temp_t3_6->unk0 = 0xDB000014;
                            temp_t3_6->unk4 = phi_s0->unk14;
                            temp_t7_8 = sp2D4;
                            sp2D4 = temp_t7_8 + 8;
                            temp_t7_8->unk0 = 0xDB000020;
                            temp_t7_8->unk4 = phi_s0->unk20;
                            temp_t1_8 = sp2D4;
                            sp2D4 = temp_t1_8 + 8;
                            temp_t1_8->unk0 = 0xDB000024;
                            temp_t1_8->unk4 = phi_s0->unk24;
                            temp_t6_4 = sp2D4;
                            sp2D4 = temp_t6_4 + 8;
                            temp_t6_4->unk0 = 0xDB000028;
                            temp_t6_4->unk4 = phi_s0->unk28;
                            temp_t2_6 = sp2D4;
                            sp2D4 = temp_t2_6 + 8;
                            temp_t2_6->unk0 = 0xDB00002C;
                            temp_t2_6->unk4 = phi_s0->unk2C;
                            temp_a0_5 = sp2D4;
                            sp2D4 = temp_a0_5 + 8;
                            temp_a0_5->unk0 = 0xDB000030;
                            temp_a0_5->unk4 = phi_s0->unk30;
                            temp_t9_6 = sp2D4;
                            sp2D4 = temp_t9_6 + 8;
                            temp_t9_6->unk0 = 0xDB000034;
                            temp_t9_6->unk4 = phi_s0->unk34;
                            phi_a2 = (arg1->unk56 * 4) + arg1;
                            goto block_117;
                        case 44: // switch 3
                            sp1CC = sinf((bitwise f32) arg1->unk30);
                            temp_f0 = cosf((bitwise f32) arg1->unk30);
                            temp_f2 = D_8004AA94;
                            temp_f12 = arg1->unk44 * temp_f2;
                            D_8004AAD8.unk8 = 0.0f;
                            D_8004AAD8.unk18 = 0.0f;
                            D_8004AAD8.unkC = 0.0f;
                            D_8004AAD8.unk1C = 0.0f;
                            D_8004AA94 = temp_f2 * arg1->unk40;
                            temp_f2_2 = D_8004AA94;
                            D_8004AAD8.unk20 = 0.0f;
                            D_8004AAD8.unk24 = 0.0f;
                            temp_f14 = D_8004AA98.unk0 * temp_f2_2;
                            temp_f16_3 = D_8004AA98.unk14 * temp_f12;
                            D_8004AAD8.unk0 = temp_f14 * temp_f0;
                            D_8004AAD8.unk10 = temp_f14 * -sp1CC;
                            D_8004AAD8.unk4 = temp_f16_3 * sp1CC;
                            D_8004AAD8.unk14 = temp_f16_3 * temp_f0;
                            D_8004AAD8.unk28 = D_8004AA98.unk28 * temp_f2_2;
                            D_8004AAD8.unk2C = D_8004AA98.unk2C * temp_f2_2;
                            func_80019A30(&D_8004AAD8, phi_s0);
                            temp_t4_5 = sp2D4;
                            sp2D4 = temp_t4_5 + 8;
                            temp_t4_5->unk4 = 0;
                            temp_t4_5->unk0 = 0xD5000001;
                            temp_t8_6 = sp2D4;
                            sp2D4 = temp_t8_6 + 8;
                            temp_t8_6->unk0 = 0xDB000000;
                            temp_t8_6->unk4 = phi_s0->unk0;
                            temp_t3_7 = sp2D4;
                            sp2D4 = temp_t3_7 + 8;
                            temp_t3_7->unk0 = 0xDB000004;
                            temp_t3_7->unk4 = phi_s0->unk4;
                            temp_t7_9 = sp2D4;
                            sp2D4 = temp_t7_9 + 8;
                            temp_t7_9->unk0 = 0xDB000008;
                            temp_t7_9->unk4 = phi_s0->unk8;
                            temp_t1_9 = sp2D4;
                            sp2D4 = temp_t1_9 + 8;
                            temp_t1_9->unk0 = 0xDB00000C;
                            temp_t1_9->unk4 = phi_s0->unkC;
                            temp_t6_5 = sp2D4;
                            sp2D4 = temp_t6_5 + 8;
                            temp_t6_5->unk0 = 0xDB000010;
                            temp_t6_5->unk4 = phi_s0->unk10;
                            temp_t2_7 = sp2D4;
                            sp2D4 = temp_t2_7 + 8;
                            temp_t2_7->unk0 = 0xDB000014;
                            temp_t2_7->unk4 = phi_s0->unk14;
                            temp_t4_6 = sp2D4;
                            sp2D4 = temp_t4_6 + 8;
                            temp_t4_6->unk0 = 0xDB000020;
                            temp_t4_6->unk4 = phi_s0->unk20;
                            temp_t9_7 = sp2D4;
                            sp2D4 = temp_t9_7 + 8;
                            temp_t9_7->unk0 = 0xDB000024;
                            temp_t9_7->unk4 = phi_s0->unk24;
                            temp_t5_5 = sp2D4;
                            sp2D4 = temp_t5_5 + 8;
                            temp_t5_5->unk0 = 0xDB000028;
                            temp_t5_5->unk4 = phi_s0->unk28;
                            temp_t8_7 = sp2D4;
                            sp2D4 = temp_t8_7 + 8;
                            temp_t8_7->unk0 = 0xDB00002C;
                            temp_t8_7->unk4 = phi_s0->unk2C;
                            temp_a0_6 = sp2D4;
                            sp2D4 = temp_a0_6 + 8;
                            temp_a0_6->unk0 = 0xDB000030;
                            temp_a0_6->unk4 = phi_s0->unk30;
                            temp_t7_10 = sp2D4;
                            sp2D4 = temp_t7_10 + 8;
                            temp_t7_10->unk0 = 0xDB000034;
                            temp_t7_10->unk4 = phi_s0->unk34;
                            phi_a2 = (arg1->unk56 * 4) + arg1;
                            goto block_117;
                        case 45: // switch 3
                            sp190 = sinf(arg1->unk38);
                            temp_f0_2 = cosf(arg1->unk38);
                            temp_f2_3 = D_8004AA94;
                            temp_f12_2 = arg1->unk44 * temp_f2_3;
                            D_8004AAD8.unk8 = 0.0f;
                            D_8004AAD8.unk18 = 0.0f;
                            D_8004AAD8.unkC = 0.0f;
                            D_8004AAD8.unk1C = 0.0f;
                            D_8004AA94 = temp_f2_3 * arg1->unk40;
                            temp_f2_4 = D_8004AA94;
                            D_8004AAD8.unk20 = 0.0f;
                            D_8004AAD8.unk24 = 0.0f;
                            temp_f14_2 = D_8004AA98.unk0 * temp_f2_4;
                            temp_f16_4 = D_8004AA98.unk14 * temp_f12_2;
                            D_8004AAD8.unk0 = temp_f14_2 * temp_f0_2;
                            D_8004AAD8.unk10 = temp_f14_2 * -sp190;
                            D_8004AAD8.unk4 = temp_f16_4 * sp190;
                            D_8004AAD8.unk14 = temp_f16_4 * temp_f0_2;
                            D_8004AAD8.unk28 = D_8004AA98.unk28 * temp_f2_4;
                            D_8004AAD8.unk2C = D_8004AA98.unk2C * temp_f2_4;
                            func_80019A30(&D_8004AAD8, phi_s0);
                            temp_t3_8 = sp2D4;
                            sp2D4 = temp_t3_8 + 8;
                            temp_t3_8->unk4 = 0;
                            temp_t3_8->unk0 = 0xD5000001;
                            temp_t6_6 = sp2D4;
                            sp2D4 = temp_t6_6 + 8;
                            temp_t6_6->unk0 = 0xDB000000;
                            temp_t6_6->unk4 = phi_s0->unk0;
                            temp_t2_8 = sp2D4;
                            sp2D4 = temp_t2_8 + 8;
                            temp_t2_8->unk0 = 0xDB000004;
                            temp_t2_8->unk4 = phi_s0->unk4;
                            temp_t4_7 = sp2D4;
                            sp2D4 = temp_t4_7 + 8;
                            temp_t4_7->unk0 = 0xDB000008;
                            temp_t4_7->unk4 = phi_s0->unk8;
                            temp_t9_8 = sp2D4;
                            sp2D4 = temp_t9_8 + 8;
                            temp_t9_8->unk0 = 0xDB00000C;
                            temp_t9_8->unk4 = phi_s0->unkC;
                            temp_t5_6 = sp2D4;
                            sp2D4 = temp_t5_6 + 8;
                            temp_t5_6->unk0 = 0xDB000010;
                            temp_t5_6->unk4 = phi_s0->unk10;
                            temp_t8_8 = sp2D4;
                            sp2D4 = temp_t8_8 + 8;
                            temp_t8_8->unk0 = 0xDB000014;
                            temp_t8_8->unk4 = phi_s0->unk14;
                            temp_t3_9 = sp2D4;
                            sp2D4 = temp_t3_9 + 8;
                            temp_t3_9->unk0 = 0xDB000020;
                            temp_t3_9->unk4 = phi_s0->unk20;
                            temp_t7_11 = sp2D4;
                            sp2D4 = temp_t7_11 + 8;
                            temp_t7_11->unk0 = 0xDB000024;
                            temp_t7_11->unk4 = phi_s0->unk24;
                            temp_t1_10 = sp2D4;
                            sp2D4 = temp_t1_10 + 8;
                            temp_t1_10->unk0 = 0xDB000028;
                            temp_t1_10->unk4 = phi_s0->unk28;
                            temp_t6_7 = sp2D4;
                            sp2D4 = temp_t6_7 + 8;
                            temp_t6_7->unk0 = 0xDB00002C;
                            temp_t6_7->unk4 = phi_s0->unk2C;
                            temp_a0_7 = sp2D4;
                            sp2D4 = temp_a0_7 + 8;
                            temp_a0_7->unk0 = 0xDB000030;
                            temp_a0_7->unk4 = phi_s0->unk30;
                            temp_t4_8 = sp2D4;
                            sp2D4 = temp_t4_8 + 8;
                            temp_t4_8->unk0 = 0xDB000034;
                            temp_t4_8->unk4 = phi_s0->unk34;
                            phi_a2 = (arg1->unk56 * 4) + arg1;
                            goto block_117;
                        case 46: // switch 3
                            temp_f2_5 = D_8004AA94;
                            temp_f12_3 = arg1->unk44 * temp_f2_5;
                            D_8004AA94 = temp_f2_5 * arg1->unk40;
                            temp_f2_6 = D_8004AA94;
                            D_8004AAD8.unk0 = D_8004AB18.unk0 * temp_f2_6;
                            D_8004AAD8.unk4 = D_8004AB18.unk4 * temp_f2_6;
                            D_8004AAD8.unk8 = D_8004AB18.unk8 * temp_f2_6;
                            D_8004AAD8.unkC = D_8004AB18.unkC * temp_f2_6;
                            D_8004AAD8.unk10 = D_8004AB18.unk10 * temp_f12_3;
                            D_8004AAD8.unk14 = D_8004AB18.unk14 * temp_f12_3;
                            D_8004AAD8.unk18 = D_8004AB18.unk18 * temp_f12_3;
                            D_8004AAD8.unk1C = D_8004AB18.unk1C * temp_f12_3;
                            D_8004AAD8.unk20 = D_8004AB18.unk20 * temp_f2_6;
                            D_8004AAD8.unk24 = D_8004AB18.unk24 * temp_f2_6;
                            D_8004AAD8.unk28 = D_8004AB18.unk28 * temp_f2_6;
                            D_8004AAD8.unk2C = D_8004AB18.unk2C * temp_f2_6;
                            func_80019A30(&D_8004AAD8, phi_s0);
                            temp_t2_9 = sp2D4;
                            sp2D4 = temp_t2_9 + 8;
                            temp_t2_9->unk4 = 0;
                            temp_t2_9->unk0 = 0xD5000001;
                            temp_t5_7 = sp2D4;
                            sp2D4 = temp_t5_7 + 8;
                            temp_t5_7->unk0 = 0xDB000008;
                            temp_t5_7->unk4 = phi_s0->unk0;
                            temp_t8_9 = sp2D4;
                            sp2D4 = temp_t8_9 + 8;
                            temp_t8_9->unk0 = 0xDB00000C;
                            temp_t8_9->unk4 = phi_s0->unk4;
                            temp_t3_10 = sp2D4;
                            sp2D4 = temp_t3_10 + 8;
                            temp_t3_10->unk0 = 0xDB000010;
                            temp_t3_10->unk4 = phi_s0->unk8;
                            temp_t7_12 = sp2D4;
                            sp2D4 = temp_t7_12 + 8;
                            temp_t7_12->unk0 = 0xDB000014;
                            temp_t7_12->unk4 = phi_s0->unkC;
                            temp_t1_11 = sp2D4;
                            sp2D4 = temp_t1_11 + 8;
                            temp_t1_11->unk0 = 0xDB000000;
                            temp_t1_11->unk4 = phi_s0->unk10;
                            temp_t6_8 = sp2D4;
                            sp2D4 = temp_t6_8 + 8;
                            temp_t6_8->unk0 = 0xDB000004;
                            temp_t6_8->unk4 = phi_s0->unk14;
                            temp_t2_10 = sp2D4;
                            sp2D4 = temp_t2_10 + 8;
                            temp_t2_10->unk0 = 0xDB000028;
                            temp_t2_10->unk4 = phi_s0->unk20;
                            temp_t4_9 = sp2D4;
                            sp2D4 = temp_t4_9 + 8;
                            temp_t4_9->unk0 = 0xDB00002C;
                            temp_t4_9->unk4 = phi_s0->unk24;
                            temp_t9_9 = sp2D4;
                            sp2D4 = temp_t9_9 + 8;
                            temp_t9_9->unk0 = 0xDB000030;
                            temp_t9_9->unk4 = phi_s0->unk28;
                            temp_t5_8 = sp2D4;
                            sp2D4 = temp_t5_8 + 8;
                            temp_t5_8->unk0 = 0xDB000034;
                            temp_t5_8->unk4 = phi_s0->unk2C;
                            temp_a0_8 = sp2D4;
                            sp2D4 = temp_a0_8 + 8;
                            temp_a0_8->unk0 = 0xDB000020;
                            temp_a0_8->unk4 = phi_s0->unk30;
                            temp_t3_11 = sp2D4;
                            sp2D4 = temp_t3_11 + 8;
                            temp_t3_11->unk0 = 0xDB000024;
                            temp_t3_11->unk4 = phi_s0->unk34;
                            phi_a2 = (arg1->unk56 * 4) + arg1;
                            goto block_117;
                        case 47: // switch 3
                            temp_f2_7 = D_8004AA94;
                            temp_f12_4 = arg1->unk44 * temp_f2_7;
                            D_8004AA94 = temp_f2_7 * arg1->unk40;
                            temp_f2_8 = D_8004AA94;
                            D_8004AAD8.unk0 = D_8004AB18.unk0 * temp_f2_8;
                            D_8004AAD8.unk4 = D_8004AB18.unk4 * temp_f2_8;
                            D_8004AAD8.unk8 = D_8004AB18.unk8 * temp_f2_8;
                            D_8004AAD8.unkC = D_8004AB18.unkC * temp_f2_8;
                            D_8004AAD8.unk10 = D_8004AB18.unk10 * temp_f12_4;
                            D_8004AAD8.unk14 = D_8004AB18.unk14 * temp_f12_4;
                            D_8004AAD8.unk18 = D_8004AB18.unk18 * temp_f12_4;
                            D_8004AAD8.unk1C = D_8004AB18.unk1C * temp_f12_4;
                            D_8004AAD8.unk20 = D_8004AB18.unk20 * temp_f2_8;
                            D_8004AAD8.unk24 = D_8004AB18.unk24 * temp_f2_8;
                            D_8004AAD8.unk28 = D_8004AB18.unk28 * temp_f2_8;
                            D_8004AAD8.unk2C = D_8004AB18.unk2C * temp_f2_8;
                            func_80019A30(&D_8004AAD8, phi_s0);
                            temp_t8_10 = sp2D4;
                            sp2D4 = temp_t8_10 + 8;
                            temp_t8_10->unk4 = 0;
                            temp_t8_10->unk0 = 0xD5000001;
                            temp_t1_12 = sp2D4;
                            sp2D4 = temp_t1_12 + 8;
                            temp_t1_12->unk0 = 0xDB000000;
                            temp_t1_12->unk4 = phi_s0->unk0;
                            temp_t6_9 = sp2D4;
                            sp2D4 = temp_t6_9 + 8;
                            temp_t6_9->unk0 = 0xDB000004;
                            temp_t6_9->unk4 = phi_s0->unk4;
                            temp_t2_11 = sp2D4;
                            sp2D4 = temp_t2_11 + 8;
                            temp_t2_11->unk0 = 0xDB000008;
                            temp_t2_11->unk4 = phi_s0->unk8;
                            temp_t4_10 = sp2D4;
                            sp2D4 = temp_t4_10 + 8;
                            temp_t4_10->unk0 = 0xDB00000C;
                            temp_t4_10->unk4 = phi_s0->unkC;
                            temp_t9_10 = sp2D4;
                            sp2D4 = temp_t9_10 + 8;
                            temp_t9_10->unk0 = 0xDB000010;
                            temp_t9_10->unk4 = phi_s0->unk10;
                            temp_t5_9 = sp2D4;
                            sp2D4 = temp_t5_9 + 8;
                            temp_t5_9->unk0 = 0xDB000014;
                            temp_t5_9->unk4 = phi_s0->unk14;
                            temp_t8_11 = sp2D4;
                            sp2D4 = temp_t8_11 + 8;
                            temp_t8_11->unk0 = 0xDB000020;
                            temp_t8_11->unk4 = phi_s0->unk20;
                            temp_t3_12 = sp2D4;
                            sp2D4 = temp_t3_12 + 8;
                            temp_t3_12->unk0 = 0xDB000024;
                            temp_t3_12->unk4 = phi_s0->unk24;
                            temp_t7_13 = sp2D4;
                            sp2D4 = temp_t7_13 + 8;
                            temp_t7_13->unk0 = 0xDB000028;
                            temp_t7_13->unk4 = phi_s0->unk28;
                            temp_t1_13 = sp2D4;
                            sp2D4 = temp_t1_13 + 8;
                            temp_t1_13->unk0 = 0xDB00002C;
                            temp_t1_13->unk4 = phi_s0->unk2C;
                            temp_a0_9 = sp2D4;
                            sp2D4 = temp_a0_9 + 8;
                            temp_a0_9->unk0 = 0xDB000030;
                            temp_a0_9->unk4 = phi_s0->unk30;
                            temp_t2_12 = sp2D4;
                            sp2D4 = temp_t2_12 + 8;
                            temp_t2_12->unk0 = 0xDB000034;
                            temp_t2_12->unk4 = phi_s0->unk34;
                            phi_a2 = (arg1->unk56 * 4) + arg1;
                            goto block_117;
                        case 48: // switch 3
                            temp_f2_9 = D_8004AA94;
                            temp_f12_5 = arg1->unk44 * temp_f2_9;
                            D_8004AA94 = temp_f2_9 * arg1->unk40;
                            temp_f2_10 = D_8004AA94;
                            D_8004AAD8.unk0 = D_8004AB58.unk0 * temp_f2_10;
                            D_8004AAD8.unk4 = D_8004AB58.unk4 * temp_f2_10;
                            D_8004AAD8.unk8 = D_8004AB58.unk8 * temp_f2_10;
                            D_8004AAD8.unkC = D_8004AB58.unkC * temp_f2_10;
                            D_8004AAD8.unk10 = D_8004AB58.unk10 * temp_f12_5;
                            D_8004AAD8.unk14 = D_8004AB58.unk14 * temp_f12_5;
                            D_8004AAD8.unk18 = D_8004AB58.unk18 * temp_f12_5;
                            D_8004AAD8.unk1C = D_8004AB58.unk1C * temp_f12_5;
                            D_8004AAD8.unk20 = D_8004AB58.unk20 * temp_f2_10;
                            D_8004AAD8.unk24 = D_8004AB58.unk24 * temp_f2_10;
                            D_8004AAD8.unk28 = D_8004AB58.unk28 * temp_f2_10;
                            D_8004AAD8.unk2C = D_8004AB58.unk2C * temp_f2_10;
                            func_80019A30(&D_8004AAD8, phi_s0);
                            temp_t6_10 = sp2D4;
                            sp2D4 = temp_t6_10 + 8;
                            temp_t6_10->unk4 = 0;
                            temp_t6_10->unk0 = 0xD5000001;
                            temp_t9_11 = sp2D4;
                            sp2D4 = temp_t9_11 + 8;
                            temp_t9_11->unk0 = 0xDB000008;
                            temp_t9_11->unk4 = phi_s0->unk0;
                            temp_t5_10 = sp2D4;
                            sp2D4 = temp_t5_10 + 8;
                            temp_t5_10->unk0 = 0xDB00000C;
                            temp_t5_10->unk4 = phi_s0->unk4;
                            temp_t8_12 = sp2D4;
                            sp2D4 = temp_t8_12 + 8;
                            temp_t8_12->unk0 = 0xDB000010;
                            temp_t8_12->unk4 = phi_s0->unk8;
                            temp_t3_13 = sp2D4;
                            sp2D4 = temp_t3_13 + 8;
                            temp_t3_13->unk0 = 0xDB000014;
                            temp_t3_13->unk4 = phi_s0->unkC;
                            temp_t7_14 = sp2D4;
                            sp2D4 = temp_t7_14 + 8;
                            temp_t7_14->unk0 = 0xDB000000;
                            temp_t7_14->unk4 = phi_s0->unk10;
                            temp_t1_14 = sp2D4;
                            sp2D4 = temp_t1_14 + 8;
                            temp_t1_14->unk0 = 0xDB000004;
                            temp_t1_14->unk4 = phi_s0->unk14;
                            temp_t6_11 = sp2D4;
                            sp2D4 = temp_t6_11 + 8;
                            temp_t6_11->unk0 = 0xDB000028;
                            temp_t6_11->unk4 = phi_s0->unk20;
                            temp_t2_13 = sp2D4;
                            sp2D4 = temp_t2_13 + 8;
                            temp_t2_13->unk0 = 0xDB00002C;
                            temp_t2_13->unk4 = phi_s0->unk24;
                            temp_t4_11 = sp2D4;
                            sp2D4 = temp_t4_11 + 8;
                            temp_t4_11->unk0 = 0xDB000030;
                            temp_t4_11->unk4 = phi_s0->unk28;
                            temp_t9_12 = sp2D4;
                            sp2D4 = temp_t9_12 + 8;
                            temp_t9_12->unk0 = 0xDB000034;
                            temp_t9_12->unk4 = phi_s0->unk2C;
                            temp_a0_10 = sp2D4;
                            sp2D4 = temp_a0_10 + 8;
                            temp_a0_10->unk0 = 0xDB000020;
                            temp_a0_10->unk4 = phi_s0->unk30;
                            temp_t8_13 = sp2D4;
                            sp2D4 = temp_t8_13 + 8;
                            temp_t8_13->unk0 = 0xDB000024;
                            temp_t8_13->unk4 = phi_s0->unk34;
                            phi_t3 = arg1->unk56 * 4;
                            goto block_116;
                        case 49: // switch 3
                            temp_f2_11 = D_8004AA94;
                            temp_f12_6 = arg1->unk44 * temp_f2_11;
                            D_8004AA94 = temp_f2_11 * arg1->unk40;
                            temp_f2_12 = D_8004AA94;
                            D_8004AAD8.unk0 = D_8004AB58.unk0 * temp_f2_12;
                            D_8004AAD8.unk4 = D_8004AB58.unk4 * temp_f2_12;
                            D_8004AAD8.unk8 = D_8004AB58.unk8 * temp_f2_12;
                            D_8004AAD8.unkC = D_8004AB58.unkC * temp_f2_12;
                            D_8004AAD8.unk10 = D_8004AB58.unk10 * temp_f12_6;
                            D_8004AAD8.unk14 = D_8004AB58.unk14 * temp_f12_6;
                            D_8004AAD8.unk18 = D_8004AB58.unk18 * temp_f12_6;
                            D_8004AAD8.unk1C = D_8004AB58.unk1C * temp_f12_6;
                            D_8004AAD8.unk20 = D_8004AB58.unk20 * temp_f2_12;
                            D_8004AAD8.unk24 = D_8004AB58.unk24 * temp_f2_12;
                            D_8004AAD8.unk28 = D_8004AB58.unk28 * temp_f2_12;
                            D_8004AAD8.unk2C = D_8004AB58.unk2C * temp_f2_12;
                            func_80019A30(&D_8004AAD8, phi_s0);
                            temp_t5_11 = sp2D4;
                            sp2D4 = temp_t5_11 + 8;
                            temp_t5_11->unk4 = 0;
                            temp_t5_11->unk0 = 0xD5000001;
                            temp_t7_15 = sp2D4;
                            sp2D4 = temp_t7_15 + 8;
                            temp_t7_15->unk0 = 0xDB000000;
                            temp_t7_15->unk4 = phi_s0->unk0;
                            temp_t1_15 = sp2D4;
                            sp2D4 = temp_t1_15 + 8;
                            temp_t1_15->unk0 = 0xDB000004;
                            temp_t1_15->unk4 = phi_s0->unk4;
                            temp_t6_12 = sp2D4;
                            sp2D4 = temp_t6_12 + 8;
                            temp_t6_12->unk0 = 0xDB000008;
                            temp_t6_12->unk4 = phi_s0->unk8;
                            temp_t2_14 = sp2D4;
                            sp2D4 = temp_t2_14 + 8;
                            temp_t2_14->unk0 = 0xDB00000C;
                            temp_t2_14->unk4 = phi_s0->unkC;
                            temp_t4_12 = sp2D4;
                            sp2D4 = temp_t4_12 + 8;
                            temp_t4_12->unk0 = 0xDB000010;
                            temp_t4_12->unk4 = phi_s0->unk10;
                            temp_t9_13 = sp2D4;
                            sp2D4 = temp_t9_13 + 8;
                            temp_t9_13->unk0 = 0xDB000014;
                            temp_t9_13->unk4 = phi_s0->unk14;
                            temp_t5_12 = sp2D4;
                            sp2D4 = temp_t5_12 + 8;
                            temp_t5_12->unk0 = 0xDB000020;
                            temp_t5_12->unk4 = phi_s0->unk20;
                            temp_t8_14 = sp2D4;
                            sp2D4 = temp_t8_14 + 8;
                            temp_t8_14->unk0 = 0xDB000024;
                            temp_t8_14->unk4 = phi_s0->unk24;
                            temp_t3_14 = sp2D4;
                            sp2D4 = temp_t3_14 + 8;
                            temp_t3_14->unk0 = 0xDB000028;
                            temp_t3_14->unk4 = phi_s0->unk28;
                            temp_t7_16 = sp2D4;
                            sp2D4 = temp_t7_16 + 8;
                            temp_t7_16->unk0 = 0xDB00002C;
                            temp_t7_16->unk4 = phi_s0->unk2C;
                            temp_a0_11 = sp2D4;
                            sp2D4 = temp_a0_11 + 8;
                            temp_a0_11->unk0 = 0xDB000030;
                            temp_a0_11->unk4 = phi_s0->unk30;
                            temp_t6_13 = sp2D4;
                            sp2D4 = temp_t6_13 + 8;
                            temp_t6_13->unk0 = 0xDB000034;
                            temp_t6_13->unk4 = phi_s0->unk34;
                            phi_a2 = (arg1->unk56 * 4) + arg1;
                        } else {
                        default: // switch 3
                            phi_a0_2 = 0;
                            if (temp_v0_6 >= 0x43) {
                                temp_v1_2 = D_8004AB9C;
                                phi_a0_2 = 0;
                                if (temp_v1_2 != 0) {
                                    if (D_8003DCAB != arg1->unk4->unkE) {
                                        phi_a3 = (temp_v1_2 + (temp_v0_6 * 8))->unk-218;
                                    } else {
                                        phi_a3 = (temp_v1_2 + (temp_v0_6 * 8))->unk-214;
                                    }
                                    phi_a0_2 = phi_a3(phi_s0, arg1, &sp2D4, phi_a3);
                                }
                            }
                            if (phi_a0_2 == 1) {
                                phi_a2 = (arg1->unk56 * 4) + arg1;
                            } else {
block_90:
                                phi_s0_2 = phi_s0;
block_91:
                                phi_v0 = temp_s2->unk4;
                                phi_s0_3 = phi_s0_2;
                                if (phi_v1_2 == 1) {
                                    phi_v0 = temp_s2->unk4;
                                    phi_s0_3 = phi_s0_2;
                                    if ((temp_s2 + 8) == phi_s0_2) {
                                        if ((temp_s2->unk4 == 0x1C) && (arg1->unk40 != 1.0f)) {
                                            temp_s2->unk4 = 0x42;
                                        }
                                        temp_s2->unk5 = 2;
                                        phi_s0_3 = phi_s0_2;
block_107:
                                        phi_v0 = temp_s2->unk4;
                                    }
                                }
                                if (phi_v0 != 2) {
                                    temp_t8_15 = sp2D4;
                                    if (sp2CC == 0) {
                                        temp_t5_13 = sp2D4;
                                        if ((arg1->unk14 == 1) || (arg1->unk8 != 0)) {
                                            sp2D4 = temp_t5_13 + 8;
                                            temp_t5_13->unk0 = 0xDA380000;
                                            temp_t5_13->unk4 = phi_s0_3;
                                        } else {
block_113:
                                            sp2D4 = temp_t8_15 + 8;
                                            temp_t8_15->unk0 = 0xDA380001;
                                            temp_t8_15->unk4 = phi_s0_3;
                                        }
                                    } else {
                                        goto block_113;
                                    }
                                    sp2CC = sp2CC + 1;
                                }
block_115:
                                phi_t3 = arg1->unk56 * 4;
block_116:
                                phi_a2 = phi_t3 + arg1;
                            }
                        }
                    } else {
                        temp_v0_4 = temp_s2->unk4;
                        temp_t7 = temp_v0_4 - 0x21;
                        if (temp_t7 < 0x12) {
                            goto **(&jtbl_800409E0 + (temp_t7 * 4)); // switch 1
                        default: // switch 1
                        case 0: // switch 1
                            temp_s0_2 = gDynamicBuffer1.top;
                            gDynamicBuffer1.top = temp_s0_2 + 0x40;
                            phi_s0 = temp_s0_2;
                            goto block_36;
                        } else if (temp_v0_4 >= 0x43) {
                            temp_s0_3 = gDynamicBuffer1.top;
                            gDynamicBuffer1.top = temp_s0_3 + 0x40;
                            phi_s0 = temp_s0_3;
                            goto block_36;
                        } else {
                            phi_v1_2 = temp_v1;
                            phi_s0_2 = *sp78;
                            goto block_91;
                        }
                    }
                } else if (D_8004A450 > 0) {
                    temp_s0_4 = gDynamicBuffer1.top;
                    gDynamicBuffer1.top = temp_s0_4 + 0x40;
                    phi_s0 = temp_s0_4;
                    goto block_36;
                } else {
                    phi_s0 = temp_v0_3;
                    if (D_8003DCAB == arg1->unk4->unkE) {
                        temp_v0_5 = temp_s2->unk4;
                        temp_t7_2 = temp_v0_5 - 0x21;
                        if (temp_t7_2 < 0x12) {
                            goto **(&jtbl_80040A28 + (temp_t7_2 * 4)); // switch 2
                        default: // switch 2
                        case 0: // switch 2
                            temp_s0_5 = gDynamicBuffer1.top;
                            gDynamicBuffer1.top = temp_s0_5 + 0x40;
                            phi_s0 = temp_s0_5;
                            goto block_36;
                        } else if (temp_v0_5 >= 0x43) {
                            temp_s0_6 = gDynamicBuffer1.top;
                            gDynamicBuffer1.top = temp_s0_6 + 0x40;
                            phi_s0 = temp_s0_6;
                            goto block_36;
                        } else {
                            phi_v1_2 = temp_v1;
                            phi_s0_2 = temp_v0_3;
                            if (temp_v1 == 3) {
                                temp_s0_7 = D_8004A404;
                                D_8004A404 = temp_s0_7 + 0x40;
                                phi_s0 = temp_s0_7;
                                goto block_36;
                            } else {
                                goto block_91;
                            }
                        }
                    } else {
                        goto block_36;
                    }
                }
            } else {
                if (temp_s2->unk4 == 0x42) {
                    D_8004AA94 = D_8004AA94 * arg1->unk40;
                }
                phi_a0_3 = 0;
                if (temp_s2->unk4 >= 0x43) {
                    temp_v1_3 = D_8004AB9C;
                    phi_a0_3 = 0;
                    if (temp_v1_3 != 0) {
                        if (D_8003DCAB != arg1->unk4->unkE) {
                            phi_a3_2 = (temp_v1_3 + (temp_s2->unk4 * 8))->unk-218;
                        } else {
                            phi_a3_2 = (temp_v1_3 + (temp_s2->unk4 * 8))->unk-214;
                        }
                        phi_a0_3 = phi_a3_2(sp78, arg1, &sp2D4, phi_a3_2);
                    }
                }
                phi_s0_3 = temp_v0_3;
                if (phi_a0_3 == 1) {
                    phi_t3 = arg1->unk56 * 4;
                } else {
                    goto block_107;
                }
                goto block_116;
            }
        } else {
            goto block_115;
        }
block_117:
        temp_t4_13 = sp74 + 4;
        sp74 = temp_t4_13;
        if (temp_t4_13 < phi_a2) {
            goto loop_15;
        }
    }
    *arg0 = sp2D4;
    return sp2CC;
}
