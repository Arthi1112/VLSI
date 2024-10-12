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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/4x1Mux/tb/4x1Mux_tb.v";
static const char *ng1 = "mux4x1.vcd";
static int ng2[] = {1, 0};
static const char *ng3 = "Time | tsel | ta | tb | tc | td | out";
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static const char *ng6 = "%0t |  %b   | %b  | %b  | %b  | %b  | %b";
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};



static void Initial_9_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(9, ng0);

LAB2:    xsi_set_current_line(10, ng0);
    xsi_vcd_dumpfile(ng1);
    xsi_set_current_line(11, ng0);
    t1 = ((char*)((ng2)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t1), t0, (char)109, t0, (char)101);

LAB1:    return;
}

static void Initial_14_1(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);

LAB4:    xsi_set_current_line(16, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3056);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(20, ng0);
    t3 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1448);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1608);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 1768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    xsi_vlogfile_write(1, 0, 0, ng6, 8, t0, (char)118, t4, 64, (char)118, t7, 2, (char)118, t10, 1, (char)118, t13, 1, (char)118, t16, 1, (char)118, t19, 1, (char)118, t21, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3056);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(24, ng0);
    t3 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1448);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1608);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 1768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    xsi_vlogfile_write(1, 0, 0, ng6, 8, t0, (char)118, t4, 64, (char)118, t7, 2, (char)118, t10, 1, (char)118, t13, 1, (char)118, t16, 1, (char)118, t19, 1, (char)118, t21, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3056);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(28, ng0);
    t3 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1448);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1608);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 1768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    xsi_vlogfile_write(1, 0, 0, ng6, 8, t0, (char)118, t4, 64, (char)118, t7, 2, (char)118, t10, 1, (char)118, t13, 1, (char)118, t16, 1, (char)118, t19, 1, (char)118, t21, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3056);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(32, ng0);
    t3 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1448);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 1608);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 1768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 1928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    xsi_vlogfile_write(1, 0, 0, ng6, 8, t0, (char)118, t4, 64, (char)118, t7, 2, (char)118, t10, 1, (char)118, t13, 1, (char)118, t16, 1, (char)118, t19, 1, (char)118, t21, 1);
    xsi_set_current_line(35, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_04744946795130837575_2875815274_init()
{
	static char *pe[] = {(void *)Initial_9_0,(void *)Initial_14_1};
	xsi_register_didat("work_m_04744946795130837575_2875815274", "isim/mux4x1_tb_isim_beh.exe.sim/work/m_04744946795130837575_2875815274.didat");
	xsi_register_executes(pe);
}
