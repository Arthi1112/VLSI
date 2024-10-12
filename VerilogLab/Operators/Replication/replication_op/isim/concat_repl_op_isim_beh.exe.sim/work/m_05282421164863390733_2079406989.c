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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/Operators/Replication/code.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {5U, 0U};
static int ng4[] = {2, 0};
static const char *ng5 = "x = %b";



static void Initial_5_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

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
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1608);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlog_mul_concat(t4, 6, 3, t1, 1U, t6, 3);
    t7 = (t0 + 1448);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 1288);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_mul_concat(t10, 2, 1, t11, 1U, t14, 1);
    xsi_vlogtype_concat(t3, 11, 11, 3U, t10, 2, t9, 3, t4, 6);
    t15 = (t0 + 1768);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 11);
    xsi_set_current_line(9, ng0);
    t1 = (t0 + 1768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t5, 11);

LAB1:    return;
}


extern void work_m_05282421164863390733_2079406989_init()
{
	static char *pe[] = {(void *)Initial_5_0};
	xsi_register_didat("work_m_05282421164863390733_2079406989", "isim/concat_repl_op_isim_beh.exe.sim/work/m_05282421164863390733_2079406989.didat");
	xsi_register_executes(pe);
}
