void func_80005A98(struct Unk80005A98 *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    u32 temp_v1;
    void *temp_v0;

    arg0->unk0 = 1;
    arg0->unk4 = 0x32;
    if (D_80049308 != 0) {
        arg0->unk14 = D_8004A48C;
        arg0->unk68 = D_80049308;
        D_80049308 = NULL;
    } else {
        arg0->unk14 = NULL;
        arg0->unk68 = 0;
    }
    arg0->unk6C = arg1;
    arg0->unk70 = D_8004A3F4;
    if (arg1 != 0) {
        arg0->unk20 = &D_80049320;
        arg0->unk1C = arg3;
    } else {
        arg0->unk20 = NULL;
    }
    arg0->unk18 = 2;
    arg0->unk7C = 0;
    arg0->unk28 = 1;
    arg0->unk2C = 4;
    arg0->unk30 = &D_80048900;
    arg0->unk34 = 0x100;
    temp_v0 = (arg2 * 8) + D_8003DCAC;
    arg0->unk80 = D_8004A450;
    temp_v1 = temp_v0->unk0;
    if (temp_v1 == 0) {
        fatal_printf(D_800400C0, arg2);
loop_8:
        goto loop_8;
    }
    arg0->unk38 = temp_v1;
    arg0->unk3C = 0x1000;
    arg0->unk44 = 0x800;
    arg0->unk48 = ((D_80049358 + 0xF) >> 4) * 0x10;
    arg0->unk4C = 0x400;
    arg0->unk40 = temp_v0->unk4;
    if (arg2 < 0x10) {
        goto **(&jtbl_80040108 + (arg2 * 4));
    default:
        arg0->unk50 = arg5;
        arg0->unk74 = 2;
        arg0->unk54 = arg5 + arg6;
        goto block_13;
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 13:
    case 15:
        arg0->unk50 = 0;
        arg0->unk54 = 0;
        arg0->unk74 = 0;
    }
case 10:
case 11:
block_13:
    arg0->unk5C = 0;
    arg0->unk60 = ((D_80049760 + 0xF) >> 4) * 0x10;
    arg0->unk64 = 0xC00;
    arg0->unk58 = arg4;
    osWritebackDCacheAll();
    osSendMesg(&gInterruptMesgQueue, arg0, 0);
}
