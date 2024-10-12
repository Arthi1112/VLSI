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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/Operators/Concatenation/code.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {6U, 0U};
static const char *ng4 = "x = %b, y = %b, z = %b";



static void Initial_5_0(char *t0)
{
    char t3[8];
    char t12[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    xsi_set_current_line(6, ng0);

LAB2:    xsi_set_current_line(7, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(7, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(7, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(8, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 1448);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t3, 8, 7, 3U, t10, 1, t7, 3, t4, 3);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    xsi_set_current_line(9, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 1448);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t3, 8, 6, 3U, t8, 3, t5, 2, t4, 1);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    xsi_set_current_line(10, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 1448);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t12, 0, 8);
    t8 = (t12 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 1);
    *((unsigned int *)t8) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 3U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 3U);
    t10 = (t0 + 1768);
    t11 = (t10 + 56U);
    t20 = *((char **)t11);
    memset(t19, 0, 8);
    t21 = (t19 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 3U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 3U);
    xsi_vlogtype_concat(t3, 8, 7, 3U, t19, 2, t12, 2, t4, 3);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t3, 0, 0, 8);
    xsi_set_current_line(11, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 1928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 2088);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t4, 8, (char)118, t7, 8, (char)118, t10, 8);

LAB1:    return;
}


extern void work_m_17753807198623590568_0014742926_init()
{
	static char *pe[] = {(void *)Initial_5_0};
	xsi_register_didat("work_m_17753807198623590568_0014742926", "isim/concat_op_isim_beh.exe.sim/work/m_17753807198623590568_0014742926.didat");
	xsi_register_executes(pe);
}
