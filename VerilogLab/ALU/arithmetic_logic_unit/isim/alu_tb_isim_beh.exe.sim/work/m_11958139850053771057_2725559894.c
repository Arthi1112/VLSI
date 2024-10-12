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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/ALU/rtlcode.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {15U, 0U};
static unsigned int ng18[] = {0U, 65535U};



static void Always_32_0(char *t0)
{
    char t10[8];
    char t20[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5744);
    *((int *)t2) = 1;
    t3 = (t0 + 5208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 3544U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 3224U);
    t8 = *((char **)t7);
    t7 = (t0 + 3384U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t8, 8, t9, 8);
    t7 = (t0 + 4264);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB39;

LAB9:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t4, 8, t3, 16);
    t7 = (t0 + 4264);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB39;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = (t0 + 3384U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 8, t7, 8);
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB39;

LAB13:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 8, t3, 16);
    t7 = (t0 + 4264);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB39;

LAB15:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = (t0 + 3384U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 16, t4, 8, t7, 8);
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB39;

LAB17:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = (t0 + 3384U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 16, t4, 8, t7, 8);
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB39;

LAB19:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 4264);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB39;

LAB21:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 16, t4, 8, t3, 32);
    t7 = (t0 + 4264);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    goto LAB39;

LAB23:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 255U);
    if (t15 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t3) == 0)
        goto LAB40;

LAB42:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;

LAB43:    t8 = (t0 + 4264);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 16);
    goto LAB39;

LAB25:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 255U);
    if (t15 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t3) != 0)
        goto LAB46;

LAB47:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t8);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB48;

LAB49:    memcpy(t27, t10, 8);

LAB50:    t59 = (t0 + 4264);
    xsi_vlogvar_assign_value(t59, t27, 0, 0, 16);
    goto LAB39;

LAB27:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 255U);
    if (t15 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t3) != 0)
        goto LAB60;

LAB61:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (!(t16));
    t18 = *((unsigned int *)t8);
    t21 = (t17 || t18);
    if (t21 > 0)
        goto LAB62;

LAB63:    memcpy(t27, t10, 8);

LAB64:    t59 = (t0 + 4264);
    xsi_vlogvar_assign_value(t59, t27, 0, 0, 16);
    goto LAB39;

LAB29:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = (t0 + 3384U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t20) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t20 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB72;

LAB73:
LAB74:    memset(t10, 0, 8);
    t31 = (t10 + 4);
    t32 = (t20 + 4);
    t44 = *((unsigned int *)t20);
    t45 = (~(t44));
    *((unsigned int *)t10) = t45;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB76;

LAB75:    t50 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t50 & 65535U);
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & 65535U);
    t33 = (t0 + 4264);
    xsi_vlogvar_assign_value(t33, t10, 0, 0, 16);
    goto LAB39;

LAB31:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = (t0 + 3384U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t20) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t20 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB77;

LAB78:
LAB79:    memset(t10, 0, 8);
    t31 = (t10 + 4);
    t32 = (t20 + 4);
    t38 = *((unsigned int *)t20);
    t39 = (~(t38));
    *((unsigned int *)t10) = t39;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB81;

LAB80:    t46 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t46 & 65535U);
    t47 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t47 & 65535U);
    t33 = (t0 + 4264);
    xsi_vlogvar_assign_value(t33, t10, 0, 0, 16);
    goto LAB39;

LAB33:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = (t0 + 3384U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB82;

LAB83:
LAB84:    t19 = (t0 + 4264);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 16);
    goto LAB39;

LAB35:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    t3 = (t0 + 3384U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (~(t17));
    *((unsigned int *)t10) = t18;
    t21 = *((unsigned int *)t9);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB85;

LAB86:
LAB87:    t25 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t25 & 65535U);
    t19 = (t10 + 4);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 & 65535U);
    t26 = (t0 + 4264);
    xsi_vlogvar_assign_value(t26, t10, 0, 0, 16);
    goto LAB39;

LAB37:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 3224U);
    t4 = *((char **)t3);
    memcpy(t10, t4, 8);
    t3 = (t0 + 4264);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    goto LAB39;

LAB40:    *((unsigned int *)t10) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t10) = 1;
    goto LAB47;

LAB46:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB47;

LAB48:    t9 = (t0 + 3384U);
    t19 = *((char **)t9);
    memset(t20, 0, 8);
    t9 = (t19 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 255U);
    if (t25 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t9) != 0)
        goto LAB53;

LAB54:    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t20);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t10 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB50;

LAB51:    *((unsigned int *)t20) = 1;
    goto LAB54;

LAB53:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB54;

LAB55:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t10 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t10);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t20);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB57;

LAB58:    *((unsigned int *)t10) = 1;
    goto LAB61;

LAB60:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB61;

LAB62:    t9 = (t0 + 3384U);
    t19 = *((char **)t9);
    memset(t20, 0, 8);
    t9 = (t19 + 4);
    t22 = *((unsigned int *)t9);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t25 = (t24 & t23);
    t28 = (t25 & 255U);
    if (t28 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t9) != 0)
        goto LAB67;

LAB68:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t20);
    t34 = (t29 | t30);
    *((unsigned int *)t27) = t34;
    t31 = (t10 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t32);
    t37 = (t35 | t36);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t33);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB64;

LAB65:    *((unsigned int *)t20) = 1;
    goto LAB68;

LAB67:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB68;

LAB69:    t40 = *((unsigned int *)t27);
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t40 | t43);
    t41 = (t10 + 4);
    t42 = (t20 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (~(t44));
    t46 = *((unsigned int *)t10);
    t51 = (t46 & t45);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t52 = (t49 & t48);
    t50 = (~(t51));
    t53 = (~(t52));
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t50);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    goto LAB71;

LAB72:    t21 = *((unsigned int *)t20);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t20) = (t21 | t22);
    t19 = (t4 + 4);
    t26 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t19);
    t28 = (~(t25));
    t29 = *((unsigned int *)t7);
    t30 = (~(t29));
    t34 = *((unsigned int *)t26);
    t35 = (~(t34));
    t51 = (t24 & t28);
    t52 = (t30 & t35);
    t36 = (~(t51));
    t37 = (~(t52));
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t37);
    t40 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t40 & t36);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t37);
    goto LAB74;

LAB76:    t46 = *((unsigned int *)t10);
    t47 = *((unsigned int *)t32);
    *((unsigned int *)t10) = (t46 | t47);
    t48 = *((unsigned int *)t31);
    t49 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t48 | t49);
    goto LAB75;

LAB77:    t21 = *((unsigned int *)t20);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t20) = (t21 | t22);
    t19 = (t4 + 4);
    t26 = (t7 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t51 = (t25 & t24);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t52 = (t30 & t29);
    t34 = (~(t51));
    t35 = (~(t52));
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t37 & t35);
    goto LAB79;

LAB81:    t40 = *((unsigned int *)t10);
    t43 = *((unsigned int *)t32);
    *((unsigned int *)t10) = (t40 | t43);
    t44 = *((unsigned int *)t31);
    t45 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t44 | t45);
    goto LAB80;

LAB82:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB84;

LAB85:    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t23 | t24);
    goto LAB87;

}

static void Cont_55_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3704U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t25 = (t0 + 5840);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 131071U;
    t31 = t30;
    t32 = (t3 + 4);
    t33 = *((unsigned int *)t3);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 16);
    t38 = (t0 + 5760);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 4264);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    goto LAB9;

LAB10:    t24 = ((char*)((ng18)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 17, t19, 17, t24, 17);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}


extern void work_m_11958139850053771057_2725559894_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Cont_55_1};
	xsi_register_didat("work_m_11958139850053771057_2725559894", "isim/alu_tb_isim_beh.exe.sim/work/m_11958139850053771057_2725559894.didat");
	xsi_register_executes(pe);
}
