/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Register/reg_8bit_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4133266227_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);

LAB4:    if ((unsigned char)1 != 0)
        goto LAB5;

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(28, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:;
LAB8:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(29, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_4133266227_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);

LAB6:    t2 = (t0 + 3392);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 3392);
    *((int *)t5) = 0;
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5755);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(38, ng0);

LAB10:    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t5 = (t0 + 3408);
    *((int *)t5) = 0;
    xsi_set_current_line(38, ng0);
    t10 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5763);
    t4 = 1;
    if (8U == 8U)
        goto LAB18;

LAB19:    t4 = 0;

LAB20:    if (t4 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(42, ng0);

LAB26:    t2 = (t0 + 3424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t8 = (t0 + 5771);
    xsi_report(t8, 11U, (unsigned char)2);
    goto LAB17;

LAB18:    t11 = 0;

LAB21:    if (t11 < 8U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t6 = (t3 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB19;

LAB23:    t11 = (t11 + 1);
    goto LAB21;

LAB24:    t5 = (t0 + 3424);
    *((int *)t5) = 0;
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5782);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(44, ng0);

LAB30:    t2 = (t0 + 3440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t5 = (t0 + 3440);
    *((int *)t5) = 0;
    xsi_set_current_line(44, ng0);
    t10 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5790);
    t4 = 1;
    if (8U == 8U)
        goto LAB38;

LAB39:    t4 = 0;

LAB40:    if (t4 == 0)
        goto LAB36;

LAB37:    xsi_set_current_line(48, ng0);

LAB46:    t2 = (t0 + 3456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t8 = (t0 + 5798);
    xsi_report(t8, 22U, (unsigned char)2);
    goto LAB37;

LAB38:    t11 = 0;

LAB41:    if (t11 < 8U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t6 = (t3 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB39;

LAB43:    t11 = (t11 + 1);
    goto LAB41;

LAB44:    t5 = (t0 + 3456);
    *((int *)t5) = 0;
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5820);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(50, ng0);

LAB50:    t2 = (t0 + 3472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB44;
    else
        goto LAB46;

LAB47:    goto LAB45;

LAB48:    t5 = (t0 + 3472);
    *((int *)t5) = 0;
    xsi_set_current_line(50, ng0);
    t10 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB48;
    else
        goto LAB50;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5828);
    t4 = 1;
    if (8U == 8U)
        goto LAB58;

LAB59:    t4 = 0;

LAB60:    if (t4 == 0)
        goto LAB56;

LAB57:    xsi_set_current_line(54, ng0);

LAB66:    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    t8 = (t0 + 5836);
    xsi_report(t8, 13U, (unsigned char)2);
    goto LAB57;

LAB58:    t11 = 0;

LAB61:    if (t11 < 8U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t6 = (t3 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB59;

LAB63:    t11 = (t11 + 1);
    goto LAB61;

LAB64:    t5 = (t0 + 3488);
    *((int *)t5) = 0;
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5849);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(56, ng0);

LAB70:    t2 = (t0 + 3504);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB64;
    else
        goto LAB66;

LAB67:    goto LAB65;

LAB68:    t5 = (t0 + 3504);
    *((int *)t5) = 0;
    xsi_set_current_line(56, ng0);
    t10 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB68;
    else
        goto LAB70;

LAB71:    goto LAB69;

LAB72:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5857);
    t4 = 1;
    if (8U == 8U)
        goto LAB78;

LAB79:    t4 = 0;

LAB80:    if (t4 == 0)
        goto LAB76;

LAB77:    xsi_set_current_line(60, ng0);

LAB86:    t2 = (t0 + 3520);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    t8 = (t0 + 5865);
    xsi_report(t8, 13U, (unsigned char)2);
    goto LAB77;

LAB78:    t11 = 0;

LAB81:    if (t11 < 8U)
        goto LAB82;
    else
        goto LAB80;

LAB82:    t6 = (t3 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB79;

LAB83:    t11 = (t11 + 1);
    goto LAB81;

LAB84:    t5 = (t0 + 3520);
    *((int *)t5) = 0;
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5878);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);

LAB90:    t2 = (t0 + 3536);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB85:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB84;
    else
        goto LAB86;

LAB87:    goto LAB85;

LAB88:    t5 = (t0 + 3536);
    *((int *)t5) = 0;
    xsi_set_current_line(62, ng0);
    t10 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB89:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB88;
    else
        goto LAB90;

LAB91:    goto LAB89;

LAB92:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5886);
    t4 = 1;
    if (8U == 8U)
        goto LAB98;

LAB99:    t4 = 0;

LAB100:    if (t4 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(66, ng0);

LAB106:    t2 = (t0 + 3552);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    t8 = (t0 + 5894);
    xsi_report(t8, 13U, (unsigned char)2);
    goto LAB97;

LAB98:    t11 = 0;

LAB101:    if (t11 < 8U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t6 = (t3 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB99;

LAB103:    t11 = (t11 + 1);
    goto LAB101;

LAB104:    t5 = (t0 + 3552);
    *((int *)t5) = 0;
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5907);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(68, ng0);

LAB110:    t2 = (t0 + 3568);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB105:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB104;
    else
        goto LAB106;

LAB107:    goto LAB105;

LAB108:    t5 = (t0 + 3568);
    *((int *)t5) = 0;
    xsi_set_current_line(68, ng0);
    t10 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB109:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB108;
    else
        goto LAB110;

LAB111:    goto LAB109;

LAB112:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5915);
    t4 = 1;
    if (8U == 8U)
        goto LAB118;

LAB119:    t4 = 0;

LAB120:    if (t4 == 0)
        goto LAB116;

LAB117:    xsi_set_current_line(72, ng0);

LAB126:    t2 = (t0 + 3584);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB127;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    t8 = (t0 + 5923);
    xsi_report(t8, 13U, (unsigned char)2);
    goto LAB117;

LAB118:    t11 = 0;

LAB121:    if (t11 < 8U)
        goto LAB122;
    else
        goto LAB120;

LAB122:    t6 = (t3 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB119;

LAB123:    t11 = (t11 + 1);
    goto LAB121;

LAB124:    t5 = (t0 + 3584);
    *((int *)t5) = 0;
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5936);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(74, ng0);

LAB130:    t2 = (t0 + 3600);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB125:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB124;
    else
        goto LAB126;

LAB127:    goto LAB125;

LAB128:    t5 = (t0 + 3600);
    *((int *)t5) = 0;
    xsi_set_current_line(74, ng0);
    t10 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB134:    *((char **)t1) = &&LAB135;
    goto LAB1;

LAB129:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB128;
    else
        goto LAB130;

LAB131:    goto LAB129;

LAB132:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5944);
    t4 = 1;
    if (8U == 8U)
        goto LAB138;

LAB139:    t4 = 0;

LAB140:    if (t4 == 0)
        goto LAB136;

LAB137:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5972);
    xsi_report(t2, 40U, (unsigned char)0);
    xsi_set_current_line(78, ng0);

LAB146:    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB133:    goto LAB132;

LAB135:    goto LAB133;

LAB136:    t8 = (t0 + 5952);
    xsi_report(t8, 20U, (unsigned char)2);
    goto LAB137;

LAB138:    t11 = 0;

LAB141:    if (t11 < 8U)
        goto LAB142;
    else
        goto LAB140;

LAB142:    t6 = (t3 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB139;

LAB143:    t11 = (t11 + 1);
    goto LAB141;

LAB144:    goto LAB2;

LAB145:    goto LAB144;

LAB147:    goto LAB145;

}


extern void work_a_4133266227_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4133266227_3212880686_p_0,(void *)work_a_4133266227_3212880686_p_1};
	xsi_register_didat("work_a_4133266227_3212880686", "isim/register_8bit_tb_isim_beh.exe.sim/work/a_4133266227_3212880686.didat");
	xsi_register_executes(pe);
}
