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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/Operators/Conditional/code.v";
static unsigned int ng1[] = {10U, 0U};
static unsigned int ng2[] = {7U, 0U};
static const char *ng3 = "a = %b, b = %b, max_value = %b";



static void Initial_6_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(6, ng0);

LAB2:    xsi_set_current_line(8, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(9, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(12, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t0 + 1448);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB4;

LAB3:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB4;

LAB7:    if (*((unsigned int *)t5) > *((unsigned int *)t8))
        goto LAB5;

LAB6:    memset(t4, 0, 8);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB11:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB12;

LAB13:    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t20);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t20) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t33, 8);

LAB20:    t34 = (t0 + 1608);
    xsi_vlogvar_assign_value(t34, t3, 0, 0, 4);
    xsi_set_current_line(15, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t0 + 1448);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng3, 4, t0, (char)118, t5, 4, (char)118, t8, 4, (char)118, t12, 4);

LAB1:    return;
LAB4:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB6;

LAB5:    *((unsigned int *)t9) = 1;
    goto LAB6;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 1288);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    goto LAB13;

LAB14:    t31 = (t0 + 1448);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 4, t26, 4, t33, 4);
    goto LAB20;

LAB18:    memcpy(t3, t26, 8);
    goto LAB20;

}


extern void work_m_11000343875987106705_0987780906_init()
{
	static char *pe[] = {(void *)Initial_6_0};
	xsi_register_didat("work_m_11000343875987106705_0987780906", "isim/conditional_operator_example_isim_beh.exe.sim/work/m_11000343875987106705_0987780906.didat");
	xsi_register_executes(pe);
}
