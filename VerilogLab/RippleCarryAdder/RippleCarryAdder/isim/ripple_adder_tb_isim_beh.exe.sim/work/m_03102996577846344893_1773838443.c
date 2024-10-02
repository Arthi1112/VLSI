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
static const char *ng0 = "a=%b b=%b sum is %b %b";
static const char *ng1 = "/home/artmad/VLSI/VerilogLab/RippleCarryAdder/tb/rippleCarry_tb.v";
static int ng2[] = {0, 0};
static int ng3[] = {50, 0};
static int ng4[] = {2, 0};
static int ng5[] = {5, 0};
static int ng6[] = {1, 0};

void Monitor_18_2(char *);
void Monitor_18_2(char *);


static void Monitor_18_2_Func(char *t0)
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

LAB0:    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1048U);
    t9 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 3, ng0, 5, t0, (char)118, t3, 4, (char)118, t6, 4, (char)118, t8, 1, (char)118, t9, 4);

LAB1:    return;
}

static void Initial_7_0(char *t0)
{
    char t6[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng1);

LAB4:    xsi_set_current_line(9, ng1);
    xsi_set_current_line(9, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB1:    return;
LAB6:    xsi_set_current_line(10, ng1);

LAB8:    xsi_set_current_line(11, ng1);
    t13 = (t0 + 1928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t15, 32, t16, 32);
    t18 = (t0 + 1608);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 4);
    xsi_set_current_line(12, ng1);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(13, ng1);
    t2 = (t0 + 2648);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(9, ng1);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

}

static void Initial_16_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng1);

LAB4:    xsi_set_current_line(18, ng1);
    Monitor_18_2(t0);
    xsi_set_current_line(19, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 800000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(19, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_18_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3144);
    t2 = (t0 + 3656);
    xsi_vlogfile_monitor((void *)Monitor_18_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_03102996577846344893_1773838443_init()
{
	static char *pe[] = {(void *)Initial_7_0,(void *)Initial_16_1,(void *)Monitor_18_2};
	xsi_register_didat("work_m_03102996577846344893_1773838443", "isim/ripple_adder_tb_isim_beh.exe.sim/work/m_03102996577846344893_1773838443.didat");
	xsi_register_executes(pe);
}
