s16 update_obj_red_blue_shell(void *arg0) {
    f32 sp94;
    f32 sp90;
    f32 sp8C;
    f32 sp68;
    s16 sp56;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f4;
    s16 temp_ret;
    s16 temp_ret_2;
    s16 temp_t3;
    s16 temp_t6;
    s16 temp_t7;
    s16 temp_t8;
    s16 temp_v0;
    s16 temp_v0_5;
    s16 temp_v0_6;
    struct Controller *temp_v0_2;
    struct Controller *temp_v0_3;
    struct Controller *temp_v0_4;
    u16 temp_t4;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_4;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s1_5;
    void *temp_s1_6;
    void *temp_v0_7;
    struct Controller *phi_v0;
    f32 phi_f0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;
    s16 phi_return;
    s16 phi_return_2;

    temp_f2 = arg0->unk20;
    temp_f0_3 = arg0->unk18;
    temp_f12 = arg0->unk1C;
    sp56 = arg0->unk0;
    if ((temp_f2 < (f32) D_8015F6F2) || ((f32) (s16) D_8015F6F0 < temp_f2) || (temp_f0_3 < (f32) D_8015F6EA) || ((f32) (s16) D_8015F6E8 < temp_f0_3) || (phi_return_2 = (bitwise s16) temp_f0_3, (temp_f12 < (f32) D_8015F6EE))) {
        phi_return_2 = func_8029FDC8(temp_f12, arg0);
    }
    temp_t4 = arg0->unk6;
    arg0->unk10 = (s16) (arg0->unk10 + 0x71C);
    if ((u32) temp_t4 < 0xAU) {
        goto **(&jtbl_802B9F6C + (temp_t4 * 4));
    case 0:
        temp_s1 = (arg0->unk14 * 0xDD8) + &D_800F6990;
        func_802B0210(temp_s1 + 0x110, arg0 + 0x30);
        sp8C = 0.0f;
        sp90 = temp_s1->unk70;
        temp_f16 = -(temp_s1->unk70 + arg0->unkC + 2.0f);
        sp94 = temp_f16;
        func_802B63B8(&sp8C, temp_s1 + 0x174);
        arg0->unk18 = (f32) (sp8C + temp_s1->unk14);
        temp_f14 = temp_s1->unk18 - sp90;
        arg0->unk20 = (f32) (temp_f16 + temp_s1->unk1C);
        sp68 = temp_f14;
        temp_f0_4 = func_802ABE30(arg0->unk18, temp_f14, (bitwise s32) arg0->unk20, temp_s1->unk11A);
        temp_f2_2 = temp_f14 - temp_f0_4;
        if ((temp_f2_2 < 5.0f) && (temp_f2_2 > -5.0f)) {
            arg0->unk1C = (f32) (arg0->unkC + temp_f0_4);
        } else {
            arg0->unk1C = temp_f14;
        }
        if ((temp_s1->unk0 & 0x4000) != 0) {
            if (D_800DC51C != 0) {
                temp_v0_2 = D_800DC4BC;
                phi_v0 = temp_v0_2;
                phi_return = (s16) temp_v0_2;
            } else {
                temp_v0_3 = (arg0->unk14 * 0x10) + &gPlayer1Controller;
                phi_v0 = temp_v0_3;
                phi_return = (s16) temp_v0_3;
            }
        } else {
            temp_v0_4 = *(void *)0x800DC4BC;
            phi_v0 = temp_v0_4;
            phi_return = (s16) temp_v0_4;
        }
        temp_v1 = phi_v0->unk8;
        phi_return_2 = phi_return;
        if ((temp_v1 & 0x2000) != 0) {
            phi_v0->unk8 = (u16) (temp_v1 & 0xDFFF);
            arg0->unk6 = (u16)1U;
            if ((s32) temp_s1->unkC0 <= 0) {
                arg0->unk12 = (u16)-0x78E4;
                return phi_return;
            case 1:
                temp_v0_5 = arg0->unk12;
                temp_s1_2 = (arg0->unk14 * 0xDD8) + &D_800F6990;
                if ((s32) temp_v0_5 > 0) {
                    arg0->unk12 = (s16) (temp_v0_5 - 0x71C);
                    if ((s32) arg0->unk12 < 0) {
                        arg0->unk6 = (u16)2U;
                        func_800C9060(arg0->unk15, 0x19008004);
                        func_800C90F4(arg0->unk15, (temp_s1_2->unk254 * 0x10) + 0x29008000);
                        if (sp56 == 8) {
                            func_8000ED80((s32) (arg0 - &D_8015F9B8) / 0x70);
                        } else {
                            func_8000EE10((s32) (arg0 - &D_8015F9B8) / 0x70);
                            func_800C9D80(arg0 + 0x18, arg0 + 0x24, 0x51018008);
                        }
                    }
                } else {
                    arg0->unk12 = (s16) (temp_v0_5 + 0x71C);
                    if ((s32) arg0->unk12 > 0) {
                        arg0->unk6 = (u16)2U;
                        func_800C9060(arg0->unk15, 0x19008004);
                        func_800C90F4(arg0->unk15, (temp_s1_2->unk254 * 0x10) + 0x29008000);
                        if (sp56 == 8) {
                            func_8000ED80((s32) (arg0 - &D_8015F9B8) / 0x70);
                        } else {
                            func_8000EE10((s32) (arg0 - &D_8015F9B8) / 0x70);
                            func_800C9D80(arg0 + 0x18, arg0 + 0x24, 0x51018008);
                        }
                    }
                }
                if ((s16) arg0->unk6 != 2) {
                    temp_f10 = func_802B8018((u16) arg0->unk12) * 8.0f;
                    sp8C = temp_f10;
                    temp_f4 = arg0->unkC - temp_s1_2->unk70;
                    sp90 = temp_f4;
                    sp94 = func_802B8038((u16) arg0->unk12) * 8.0f;
                    temp_ret = func_802B63B8(&sp8C, temp_s1_2 + 0x174);
                    arg0->unk18 = (f32) (temp_f10 + temp_s1_2->unk14);
                    arg0->unk1C = (f32) (temp_f4 + temp_s1_2->unk18);
                    arg0->unk20 = (f32) (sp94 + temp_s1_2->unk1C);
                    return temp_ret;
                case 2:
                    arg0->unk4 = (s16) (arg0->unk4 - 1);
                    temp_s1_3 = (arg0->unk14 * 0xDD8) + &D_800F6990;
                    if (arg0->unk4 == 0) {
                        arg0->unk2 = (s16) (arg0->unk2 & 0xEFFF);
                        if (arg0->unk0 == 0x2A) {
                            arg0->unk6 = (u16)8U;
                            arg0->unk4 = (s16) D_8015F8F0;
                            arg0->unk8 = 1000.0f;
                            temp_v1_2 = D_80164430;
                            temp_t3 = ((((s32) (temp_s1_3 - D_800DC4DC) / 0xDD8) * 2) + 0x80160000)->unk4438 + 8;
                            phi_v0_2 = temp_t3;
                            if ((s32) temp_v1_2 < (s32) temp_t3) {
                                phi_v0_2 = (s16) (temp_t3 - temp_v1_2);
                            }
                            arg0->unk12 = phi_v0_2;
                        } else if (gModeSelection == (u16)3U) {
                            arg0->unk8 = 1000.0f;
                            arg0->unk4 = func_802B3FD0(temp_s1_3, arg0);
                            if ((s32) arg0->unk4 < 0) {
                                arg0->unk2 = (u16)-0x8000;
                                arg0->unk12 = (u16)0;
                                arg0->unk4 = (u16)0x3C;
                                arg0->unk6 = (u16)7U;
                                arg0->unk28 = 3.0f;
                            } else {
                                arg0->unk6 = (u16)3U;
                            }
                        } else {
                            temp_v0_6 = temp_s1_3->unk4;
                            if (temp_v0_6 == 0) {
                                arg0->unk6 = (u16)4U;
                                arg0->unk4 = (u16)0x258;
                                temp_v1_3 = D_80164430;
                                temp_t8 = ((((s32) (temp_s1_3 - D_800DC4DC) / 0xDD8) * 2) + 0x80160000)->unk4438 + 8;
                                phi_v0_3 = temp_t8;
                                if ((s32) temp_v1_3 < (s32) temp_t8) {
                                    phi_v0_3 = (s16) (temp_t8 - temp_v1_3);
                                }
                                arg0->unk12 = phi_v0_3;
                            } else if ((s32) temp_v0_6 >= 5) {
                                arg0->unk6 = (u16)5U;
                                arg0->unk8 = 1000.0f;
                                temp_v1_4 = D_80164430;
                                temp_t7 = ((((s32) (temp_s1_3 - D_800DC4DC) / 0xDD8) * 2) + 0x80160000)->unk4438 + 8;
                                phi_v0_4 = temp_t7;
                                if ((s32) temp_v1_4 < (s32) temp_t7) {
                                    phi_v0_4 = (s16) (temp_t7 - temp_v1_4);
                                }
                                arg0->unk12 = phi_v0_4;
                                arg0->unk4 = (s16) (&D_8015F8F0 + (temp_s1_3->unk4 * 2))->unk-2;
                            } else {
                                arg0->unk6 = (u16)3U;
                                arg0->unk8 = 1000.0f;
                                arg0->unk4 = (s16) (&D_8015F8F0 + (temp_s1_3->unk4 * 2))->unk-2;
                            }
                        }
                    }
                    arg0->unk28 = (f32) ((f64) arg0->unk28 - 0.5);
                    if (arg0->unk28 < -2.0f) {
                        arg0->unk28 = -2.0f;
                    }
                    sp38 = arg0->unk18;
                    sp3C = arg0->unk1C;
                    sp40 = arg0->unk20;
                    arg0->unk18 = (f32) (arg0->unk18 + arg0->unk24);
                    arg0->unk1C = (f32) (arg0->unk1C + arg0->unk28);
                    arg0->unk20 = (f32) (arg0->unk20 + arg0->unk2C);
                    func_802AD950(arg0 + 0x30, 0x40800000, (bitwise s32) arg0->unk18, (bitwise s32) arg0->unk1C, arg0->unk20, sp38, sp3C, sp40);
                    func_802B4E30(arg0);
                    return func_802B4104(arg0);
                case 3:
                    return func_802B3E7C(arg0, (arg0->unk4 * 0xDD8) + &D_800F6990);
                case 4:
                    func_802B3B44(arg0);
                    temp_v0 = arg0->unk4;
                    phi_return_2 = temp_v0;
                    if (temp_v0 != 0) {
                        return phi_return_2;
                    }
                    if ((arg0->unk2 & 0xF) != 0) {
                        arg0->unk4 = (s16) (temp_v0 - 1);
                        return temp_v0;
                    case 5:
                        func_802B3B44(arg0);
                        temp_s1_4 = (arg0->unk4 * 0xDD8) + &D_800F6990;
                        temp_f0 = temp_s1_4->unk14 - arg0->unk18;
                        temp_f2_4 = temp_s1_4->unk1C - arg0->unk20;
                        phi_return_2 = (bitwise s16) temp_f0;
                        if (!(((temp_f0 * temp_f0) + (temp_f2_4 * temp_f2_4)) < D_802B9F98)) {
                            return phi_return_2;
                        }
                        arg0->unk6 = (u16)3U;
                        return (bitwise s16) temp_f0;
                    case 6:
                        temp_v0_7 = (arg0->unk4 * 0x70) + &D_8015F9B8;
                        temp_s1_5 = (arg0->unk14 * 0xDD8) + &D_800F6990;
                        if (temp_v0_7->unk0 == 0x16) {
                            temp_t6 = arg0->unk12 + temp_v0_7->unk10;
                            arg0->unk12 = temp_t6;
                            sp8C = func_802B8018(temp_t6 & 0xFFFF) * 8.0f;
                            sp90 = arg0->unkC - temp_s1_5->unk70;
                            sp94 = func_802B8038((u16) arg0->unk12) * 8.0f;
                            func_802B63B8(&sp8C, temp_s1_5 + 0x174);
                            sp38 = arg0->unk18;
                            sp3C = arg0->unk1C;
                            sp40 = arg0->unk20;
                            arg0->unk18 = (f32) (sp8C + temp_s1_5->unk14);
                            arg0->unk1C = (f32) (sp90 + temp_s1_5->unk18);
                            arg0->unk20 = (f32) (sp94 + temp_s1_5->unk1C);
                            func_802AD950(arg0 + 0x30, 0x40800000, (bitwise s32) arg0->unk18, (bitwise s32) arg0->unk1C, arg0->unk20, sp38, sp3C, sp40);
                            return func_802B4E30(arg0);
                        case 7:
                            arg0->unk28 = (f32) (arg0->unk28 - D_802B9F9C);
                            if (arg0->unk28 < -5.0f) {
                                arg0->unk28 = -5.0f;
                            }
                            arg0->unk4 = (s16) (arg0->unk4 - 1);
                            arg0->unk12 = (s16) (arg0->unk12 + 0x5B0);
                            arg0->unk1C = (f32) (arg0->unk1C + arg0->unk28);
                            if (arg0->unk4 != 0) {
                                return phi_return_2;
                            }
                            return func_8029E854(-5.0f, arg0);
                        case 8:
                            func_802B3B44(arg0);
                            arg0->unk4 = (s16) D_8015F8F0;
                            temp_s1_6 = (D_8015F8F0 * 0xDD8) + &D_800F6990;
                            temp_f0_2 = temp_s1_6->unk14 - arg0->unk18;
                            temp_f2_5 = temp_s1_6->unk1C - arg0->unk20;
                            phi_return_2 = (bitwise s16) temp_f0_2;
                            if (!(((temp_f0_2 * temp_f0_2) + (temp_f2_5 * temp_f2_5)) < D_802B9FA0)) {
                                return phi_return_2;
                            }
                            arg0->unk6 = (u16)9U;
                            return (bitwise s16) temp_f0_2;
                        case 9:
                            phi_return_2 = func_802B3E7C(arg0, (arg0->unk4 * 0xDD8) + &D_800F6990);
                            return phi_return_2;
                        }
                        return func_8029FDC8(arg0);
                        return func_802B4E30(arg0);
                        return func_8029E854(-5.0f, arg0);
                        return (bitwise s16) temp_f0_2;
                    }
                    return func_8029FDC8(arg0);
                    return temp_v0;
                    return (bitwise s16) temp_f0;
                }
                arg0->unk4 = (u16)0x1E;
                temp_f2_3 = temp_s1_2->unk94;
                phi_f0 = 8.0f;
                if (temp_f2_3 > 8.0f) {
                    phi_f0 = temp_f2_3 * D_802B9F94;
                }
                sp94 = phi_f0;
                temp_a0 = &sp8C;
                sp8C = 0.0f;
                sp90 = 0.0f;
                temp_ret_2 = func_802B64C4(temp_a0, (s16) (temp_s1_2->unk2E + temp_s1_2->unkC0));
                arg0->unk24 = sp8C;
                arg0->unk28 = sp90;
                arg0->unk2C = sp94;
                return temp_ret_2;
                return temp_ret;
                return func_802B4104(arg0);
                return func_802B3E7C(arg0, (arg0->unk4 * 0xDD8) + &D_800F6990);
            }
            arg0->unk12 = (u16)0x78E3;
            return phi_return;
            return phi_return;
        }
    }
    return phi_return_2;
}
