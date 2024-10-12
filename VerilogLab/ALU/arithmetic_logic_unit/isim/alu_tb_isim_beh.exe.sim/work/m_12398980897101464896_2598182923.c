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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/ALU/tbcode.v";
static int ng1[] = {0, 0};
static const char *ng2 = "Input oe=%b, a=%b, b=%b, command=%s, Output out=%b";
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {4277316, 0, 0, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {4804163, 0, 0, 0};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {5461314, 0, 0, 0};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {4474179, 0, 0, 0};
static unsigned int ng11[] = {4U, 0U};
static int ng12[] = {5068108, 0, 0, 0};
static unsigned int ng13[] = {5U, 0U};
static int ng14[] = {4475222, 0, 0, 0};
static unsigned int ng15[] = {6U, 0U};
static int ng16[] = {5457996, 0, 0, 0};
static unsigned int ng17[] = {7U, 0U};
static int ng18[] = {5458002, 0, 0, 0};
static unsigned int ng19[] = {10U, 0U};
static int ng20[] = {4804182, 0, 0, 0};
static unsigned int ng21[] = {8U, 0U};
static int ng22[] = {4279876, 0, 0, 0};
static unsigned int ng23[] = {9U, 0U};
static int ng24[] = {20306, 0, 0, 0};
static unsigned int ng25[] = {11U, 0U};
static int ng26[] = {1312902724, 0, 0, 0};
static unsigned int ng27[] = {12U, 0U};
static int ng28[] = {5132114, 0, 0, 0};
static unsigned int ng29[] = {13U, 0U};
static int ng30[] = {5787474, 0, 0, 0};
static unsigned int ng31[] = {14U, 0U};
static int ng32[] = {1481527122, 0, 0, 0};
static unsigned int ng33[] = {15U, 0U};
static int ng34[] = {4347206, 0, 0, 0};
static int ng35[] = {16, 0};
static int ng36[] = {1, 0};
static unsigned int ng37[] = {20U, 0U};
static unsigned int ng38[] = {25U, 0U};
static unsigned int ng39[] = {17U, 0U};

void Monitor_123_3(char *);
void Monitor_123_3(char *);


static int sp_initialize(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3024);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 6264);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    t7 = (t1 + 6104);
    xsi_vlogvar_assign_value(t7, t5, 1, 0, 4);
    t8 = (t1 + 5944);
    xsi_vlogvar_assign_value(t8, t5, 5, 0, 8);
    t9 = (t1 + 5784);
    xsi_vlogvar_assign_value(t9, t5, 13, 0, 8);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_en_oe(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3456);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t5 = (t1 + 7064);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 6264);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_inputs(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3888);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t5 = (t1 + 7224);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 5784);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t4 = (t1 + 7384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5944);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_cmd(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4320);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t5 = (t1 + 7544);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 6104);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_delay(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4752);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_process_wait(t6, 10000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    goto LAB4;

}

static void Monitor_123_3_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 6264);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 5784);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5944);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 6904);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 5384U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 3, ng2, 6, t0, (char)118, t3, 1, (char)118, t6, 8, (char)118, t9, 8, (char)118, t12, 33, (char)118, t14, 16);

LAB1:    return;
}

static void Always_71_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 8456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 9520);
    *((int *)t2) = 1;
    t3 = (t0 + 8488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 6104);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng29)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng31)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng33)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(74, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 6904);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 33);
    goto LAB39;

LAB9:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB11:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB13:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB15:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB17:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB19:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB21:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB23:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB25:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB27:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB29:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB31:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB33:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB35:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

LAB37:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 6904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB39;

}

static void Initial_94_1(char *t0)
{
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 8704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);

LAB4:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 8512);
    t3 = (t0 + 3024);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 8608);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 3024);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 8608);
    t15 = *((char **)t14);
    t14 = (t0 + 3024);
    t16 = (t0 + 8512);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8512);
    t4 = (t0 + 3456);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 7064);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);

LAB13:    t7 = (t0 + 8608);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB15:    if (t13 != 0)
        goto LAB16;

LAB11:    t8 = (t0 + 3456);
    xsi_vlog_subprogram_popinvocation(t8);

LAB12:    t16 = (t0 + 8608);
    t17 = *((char **)t16);
    t16 = (t0 + 3456);
    t18 = (t0 + 8512);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(98, ng0);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    t2 = (t0 + 6424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t20, 0, 8);
    xsi_vlog_signed_less(t20, 32, t4, 32, t5, 32);
    t6 = (t20 + 4);
    t21 = *((unsigned int *)t6);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8512);
    t4 = (t0 + 3456);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 7064);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);

LAB43:    t7 = (t0 + 8608);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB45:    if (t13 != 0)
        goto LAB46;

LAB41:    t8 = (t0 + 3456);
    xsi_vlog_subprogram_popinvocation(t8);

LAB42:    t16 = (t0 + 8608);
    t17 = *((char **)t16);
    t16 = (t0 + 3456);
    t18 = (t0 + 8512);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng37)));
    t3 = ((char*)((ng19)));
    t4 = (t0 + 8512);
    t5 = (t0 + 3888);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 7224);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 7384);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB49:    t9 = (t0 + 8608);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB51:    if (t13 != 0)
        goto LAB52;

LAB47:    t10 = (t0 + 3888);
    xsi_vlog_subprogram_popinvocation(t10);

LAB48:    t18 = (t0 + 8608);
    t19 = *((char **)t18);
    t18 = (t0 + 3888);
    t26 = (t0 + 8512);
    t27 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t26, t27);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8512);
    t4 = (t0 + 4320);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 7544);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB55:    t7 = (t0 + 8608);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB57:    if (t13 != 0)
        goto LAB58;

LAB53:    t8 = (t0 + 4320);
    xsi_vlog_subprogram_popinvocation(t8);

LAB54:    t16 = (t0 + 8608);
    t17 = *((char **)t16);
    t16 = (t0 + 4320);
    t18 = (t0 + 8512);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 8512);
    t3 = (t0 + 4752);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB61:    t5 = (t0 + 8608);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB63:    if (t13 != 0)
        goto LAB64;

LAB59:    t6 = (t0 + 4752);
    xsi_vlog_subprogram_popinvocation(t6);

LAB60:    t14 = (t0 + 8608);
    t15 = *((char **)t14);
    t14 = (t0 + 4752);
    t16 = (t0 + 8512);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng36)));
    t3 = (t0 + 8512);
    t4 = (t0 + 3456);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 7064);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 1);

LAB67:    t7 = (t0 + 8608);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB69:    if (t13 != 0)
        goto LAB70;

LAB65:    t8 = (t0 + 3456);
    xsi_vlog_subprogram_popinvocation(t8);

LAB66:    t16 = (t0 + 8608);
    t17 = *((char **)t16);
    t16 = (t0 + 3456);
    t18 = (t0 + 8512);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng38)));
    t3 = ((char*)((ng39)));
    t4 = (t0 + 8512);
    t5 = (t0 + 3888);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 7224);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 8);
    t8 = (t0 + 7384);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 8);

LAB73:    t9 = (t0 + 8608);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB75:    if (t13 != 0)
        goto LAB76;

LAB71:    t10 = (t0 + 3888);
    xsi_vlog_subprogram_popinvocation(t10);

LAB72:    t18 = (t0 + 8608);
    t19 = *((char **)t18);
    t18 = (t0 + 3888);
    t26 = (t0 + 8512);
    t27 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t26, t27);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8512);
    t4 = (t0 + 4320);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 7544);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB79:    t7 = (t0 + 8608);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB81:    if (t13 != 0)
        goto LAB82;

LAB77:    t8 = (t0 + 4320);
    xsi_vlog_subprogram_popinvocation(t8);

LAB78:    t16 = (t0 + 8608);
    t17 = *((char **)t16);
    t16 = (t0 + 4320);
    t18 = (t0 + 8512);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 8512);
    t3 = (t0 + 4752);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB85:    t5 = (t0 + 8608);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB87:    if (t13 != 0)
        goto LAB88;

LAB83:    t6 = (t0 + 4752);
    xsi_vlog_subprogram_popinvocation(t6);

LAB84:    t14 = (t0 + 8608);
    t15 = *((char **)t14);
    t14 = (t0 + 4752);
    t16 = (t0 + 8512);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(118, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 8704U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t7 = (t0 + 8704U);
    *((char **)t7) = &&LAB13;
    goto LAB1;

LAB18:    xsi_set_current_line(99, ng0);

LAB20:    xsi_set_current_line(100, ng0);
    xsi_set_current_line(100, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 6584);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);

LAB21:    t2 = (t0 + 6584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t20, 0, 8);
    xsi_vlog_signed_less(t20, 32, t4, 32, t5, 32);
    t6 = (t20 + 4);
    t21 = *((unsigned int *)t6);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t5, 32);
    t6 = (t0 + 6424);
    xsi_vlogvar_assign_value(t6, t20, 0, 0, 32);
    goto LAB17;

LAB22:    xsi_set_current_line(101, ng0);

LAB24:    xsi_set_current_line(102, ng0);
    t7 = (t0 + 6424);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 6584);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 8512);
    t15 = (t0 + 3888);
    t16 = xsi_create_subprogram_invocation(t14, 0, t0, t15, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t15, t16);
    t17 = (t0 + 7224);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 8);
    t18 = (t0 + 7384);
    xsi_vlogvar_assign_value(t18, t12, 0, 0, 8);

LAB27:    t19 = (t0 + 8608);
    t26 = *((char **)t19);
    t27 = (t26 + 80U);
    t28 = *((char **)t27);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t13 = ((int  (*)(char *, char *))t32)(t0, t26);

LAB29:    if (t13 != 0)
        goto LAB30;

LAB25:    t26 = (t0 + 3888);
    xsi_vlog_subprogram_popinvocation(t26);

LAB26:    t33 = (t0 + 8608);
    t34 = *((char **)t33);
    t33 = (t0 + 3888);
    t35 = (t0 + 8512);
    t36 = 0;
    xsi_delete_subprogram_invocation(t33, t34, t0, t35, t36);
    xsi_set_current_line(103, ng0);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB31:    t2 = (t0 + 6744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng35)));
    memset(t20, 0, 8);
    xsi_vlog_signed_less(t20, 32, t4, 32, t5, 32);
    t6 = (t20 + 4);
    t21 = *((unsigned int *)t6);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t5, 32);
    t6 = (t0 + 6584);
    xsi_vlogvar_assign_value(t6, t20, 0, 0, 32);
    goto LAB21;

LAB28:;
LAB30:    t19 = (t0 + 8704U);
    *((char **)t19) = &&LAB27;
    goto LAB1;

LAB32:    xsi_set_current_line(104, ng0);

LAB34:    xsi_set_current_line(105, ng0);
    t7 = (t0 + 6744);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 6104);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 8512);
    t3 = (t0 + 4752);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB37:    t5 = (t0 + 8608);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB39:    if (t13 != 0)
        goto LAB40;

LAB35:    t6 = (t0 + 4752);
    xsi_vlog_subprogram_popinvocation(t6);

LAB36:    t14 = (t0 + 8608);
    t15 = *((char **)t14);
    t14 = (t0 + 4752);
    t16 = (t0 + 8512);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t4, 32, t5, 32);
    t6 = (t0 + 6744);
    xsi_vlogvar_assign_value(t6, t20, 0, 0, 32);
    goto LAB31;

LAB38:;
LAB40:    t5 = (t0 + 8704U);
    *((char **)t5) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t7 = (t0 + 8704U);
    *((char **)t7) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t9 = (t0 + 8704U);
    *((char **)t9) = &&LAB49;
    goto LAB1;

LAB56:;
LAB58:    t7 = (t0 + 8704U);
    *((char **)t7) = &&LAB55;
    goto LAB1;

LAB62:;
LAB64:    t5 = (t0 + 8704U);
    *((char **)t5) = &&LAB61;
    goto LAB1;

LAB68:;
LAB70:    t7 = (t0 + 8704U);
    *((char **)t7) = &&LAB67;
    goto LAB1;

LAB74:;
LAB76:    t9 = (t0 + 8704U);
    *((char **)t9) = &&LAB73;
    goto LAB1;

LAB80:;
LAB82:    t7 = (t0 + 8704U);
    *((char **)t7) = &&LAB79;
    goto LAB1;

LAB86:;
LAB88:    t5 = (t0 + 8704U);
    *((char **)t5) = &&LAB85;
    goto LAB1;

}

static void Initial_122_2(char *t0)
{

LAB0:    xsi_set_current_line(123, ng0);
    Monitor_123_3(t0);

LAB1:    return;
}

void Monitor_123_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 9008);
    t2 = (t0 + 9536);
    xsi_vlogfile_monitor((void *)Monitor_123_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_12398980897101464896_2598182923_init()
{
	static char *pe[] = {(void *)Always_71_0,(void *)Initial_94_1,(void *)Initial_122_2,(void *)Monitor_123_3};
	static char *se[] = {(void *)sp_initialize,(void *)sp_en_oe,(void *)sp_inputs,(void *)sp_cmd,(void *)sp_delay};
	xsi_register_didat("work_m_12398980897101464896_2598182923", "isim/alu_tb_isim_beh.exe.sim/work/m_12398980897101464896_2598182923.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
