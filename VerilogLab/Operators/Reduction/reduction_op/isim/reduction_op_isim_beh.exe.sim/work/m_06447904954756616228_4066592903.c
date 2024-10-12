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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/Operators/Reduction/code.v";
static unsigned int ng1[] = {6U, 0U};
static unsigned int ng2[] = {8U, 0U};
static const char *ng3 = "y = %b, z = %b";



static void Initial_4_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;

LAB0:    xsi_set_current_line(5, ng0);

LAB2:    xsi_set_current_line(6, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(6, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(7, ng0);
    t1 = (t0 + 1448);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 | t7);
    if (t8 != 15U)
        goto LAB5;

LAB3:    if (*((unsigned int *)t5) == 0)
        goto LAB4;

LAB6:    t9 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t9) = 1;

LAB4:    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    xsi_set_current_line(8, ng0);
    t1 = (t0 + 1288);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t4);
    t7 = (t7 & 1);
    if (*((unsigned int *)t5) != 0)
        goto LAB7;

LAB8:    t8 = 1;

LAB10:    t11 = (t8 <= 3);
    if (t11 == 1)
        goto LAB11;

LAB12:    *((unsigned int *)t3) = t7;

LAB9:    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 1);
    xsi_set_current_line(9, ng0);
    t1 = (t0 + 1608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t0 + 1768);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t4, 1, (char)118, t10, 1);

LAB1:    return;
LAB5:    *((unsigned int *)t3) = 1;
    goto LAB4;

LAB7:    t9 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    t6 = (t6 >> 1);
    t12 = (t6 & 1);
    t7 = (t7 ^ t12);

LAB13:    t8 = (t8 + 1);
    goto LAB10;

}


extern void work_m_06447904954756616228_4066592903_init()
{
	static char *pe[] = {(void *)Initial_4_0};
	xsi_register_didat("work_m_06447904954756616228_4066592903", "isim/reduction_op_isim_beh.exe.sim/work/m_06447904954756616228_4066592903.didat");
	xsi_register_executes(pe);
}
