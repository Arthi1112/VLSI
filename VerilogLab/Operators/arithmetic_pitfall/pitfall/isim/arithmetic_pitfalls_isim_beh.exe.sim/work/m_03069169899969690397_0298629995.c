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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/Operators/arithmetic_pitfall/code.v";
static const char *ng1 = "Overflow Test: %b (%d)";
static const char *ng2 = "Signed Arithmetic: %b (%d)";
static int ng3[] = {0, 0};
static const char *ng4 = "Division Result: %b (%d)";
static const char *ng5 = "Error: Division by zero!";
static const char *ng6 = "Bitwise AND: %b (%d)";
static const char *ng7 = "Logical AND: %b (%d)";



static void Initial_10_0(char *t0)
{
    char t7[8];
    char t33[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
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
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    xsi_set_current_line(10, ng0);

LAB2:    xsi_set_current_line(12, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 4, t3, 4, t6, 4);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(13, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng1, 3, t0, (char)118, t3, 4, (char)118, t6, 4);
    xsi_set_current_line(16, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 4, t3, 4, t6, 4);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(17, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng2, 3, t0, (char)118, t3, 4, (char)118, t6, 4);
    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t5 = (t3 + 4);
    t6 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB4;

LAB3:    if (t18 != 0)
        goto LAB5;

LAB6:    t21 = (t7 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t7);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(23, ng0);

LAB11:    xsi_set_current_line(24, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);

LAB9:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t6);
    t11 = (t9 & t10);
    *((unsigned int *)t7) = t11;
    t8 = (t3 + 4);
    t21 = (t6 + 4);
    t27 = (t7 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 | t13);
    *((unsigned int *)t27) = t14;
    t15 = *((unsigned int *)t27);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB12;

LAB13:
LAB14:    t30 = (t0 + 1608);
    xsi_vlogvar_assign_value(t30, t7, 0, 0, 4);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t3, 4, (char)118, t6, 4);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 15U);
    if (t13 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) != 0)
        goto LAB17;

LAB18:    t6 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB19;

LAB20:    memcpy(t44, t7, 8);

LAB21:    t59 = (t0 + 1608);
    xsi_vlogvar_assign_value(t59, t44, 0, 0, 4);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng7, 3, t0, (char)118, t3, 4, (char)118, t6, 4);

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    goto LAB6;

LAB5:    t8 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(20, ng0);

LAB10:    xsi_set_current_line(21, ng0);
    t27 = (t0 + 1288);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t0 + 1928);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_divide(t33, 4, t29, 4, t32, 4);
    t34 = (t0 + 1608);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 4);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng4, 3, t0, (char)118, t3, 4, (char)118, t6, 4);
    goto LAB9;

LAB12:    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t27);
    *((unsigned int *)t7) = (t17 | t18);
    t28 = (t3 + 4);
    t29 = (t6 + 4);
    t19 = *((unsigned int *)t3);
    t20 = (~(t19));
    t22 = *((unsigned int *)t28);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t35 = (~(t26));
    t36 = (t20 & t23);
    t37 = (t25 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t40 & t38);
    t41 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t41 & t39);
    t42 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t42 & t38);
    t43 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t43 & t39);
    goto LAB14;

LAB15:    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB17:    t5 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t8 = (t0 + 1448);
    t21 = (t8 + 56U);
    t27 = *((char **)t21);
    memset(t33, 0, 8);
    t28 = (t27 + 4);
    t17 = *((unsigned int *)t28);
    t18 = (~(t17));
    t19 = *((unsigned int *)t27);
    t20 = (t19 & t18);
    t22 = (t20 & 15U);
    if (t22 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t28) != 0)
        goto LAB24;

LAB25:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t33);
    t25 = (t23 & t24);
    *((unsigned int *)t44) = t25;
    t30 = (t7 + 4);
    t31 = (t33 + 4);
    t32 = (t44 + 4);
    t26 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t31);
    t38 = (t26 | t35);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t32);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB22:    *((unsigned int *)t33) = 1;
    goto LAB25;

LAB24:    t29 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB25;

LAB26:    t41 = *((unsigned int *)t44);
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t44) = (t41 | t42);
    t34 = (t7 + 4);
    t45 = (t33 + 4);
    t43 = *((unsigned int *)t7);
    t46 = (~(t43));
    t47 = *((unsigned int *)t34);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t50 = (~(t49));
    t51 = *((unsigned int *)t45);
    t52 = (~(t51));
    t36 = (t46 & t48);
    t37 = (t50 & t52);
    t53 = (~(t36));
    t54 = (~(t37));
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t56 & t54);
    t57 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t57 & t53);
    t58 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t58 & t54);
    goto LAB28;

}


extern void work_m_03069169899969690397_0298629995_init()
{
	static char *pe[] = {(void *)Initial_10_0};
	xsi_register_didat("work_m_03069169899969690397_0298629995", "isim/arithmetic_pitfalls_isim_beh.exe.sim/work/m_03069169899969690397_0298629995.didat");
	xsi_register_executes(pe);
}
