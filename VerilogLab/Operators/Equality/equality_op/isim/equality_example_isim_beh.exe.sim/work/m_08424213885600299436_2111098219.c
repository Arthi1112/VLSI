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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/Operators/Equality/code.v";
static unsigned int ng1[] = {10U, 0U};
static unsigned int ng2[] = {1U, 1U};
static int ng3[] = {1, 0};
static const char *ng4 = "a = %b, b = %b";
static const char *ng5 = "Logical equality (a == b): %b";
static const char *ng6 = "Case equality (a === b): %b";



static void Initial_7_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    int t24;

LAB0:    xsi_set_current_line(7, ng0);

LAB2:    xsi_set_current_line(9, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(10, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(13, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t3 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t0 + 1608);
    xsi_vlogvar_assign_value(t23, t7, 0, 0, 1);
    xsi_set_current_line(16, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1288);
    t3 = (t0 + 1288);
    t4 = (t3 + 72U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t7, t5, 2, t6, 32, 1);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t8);
    t24 = (!(t10));
    if (t24 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t6))
        goto LAB11;

LAB9:    t8 = (t3 + 4);
    t9 = (t6 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t9))
        goto LAB11;

LAB10:    *((unsigned int *)t7) = 1;

LAB11:    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t7, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng4, 3, t0, (char)118, t3, 4, (char)118, t6, 4);
    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t3, 1);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t3, 1);

LAB1:    return;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t7), 1);
    goto LAB8;

}


extern void work_m_08424213885600299436_2111098219_init()
{
	static char *pe[] = {(void *)Initial_7_0};
	xsi_register_didat("work_m_08424213885600299436_2111098219", "isim/equality_example_isim_beh.exe.sim/work/m_08424213885600299436_2111098219.didat");
	xsi_register_executes(pe);
}
