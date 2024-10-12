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
static const char *ng0 = "/home/artmad/VLSI/VerilogLab/Combinational_circuits/mux_4x1/tbcode.v";
static int ng1[] = {0, 0};
static const char *ng2 = "Values of data=%b,sel=%b,Output=%b";
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {1U, 0U};

void Monitor_41_2(char *);
void Monitor_41_2(char *);


static int sp_initialize(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 2472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 2);
    t7 = (t1 + 2312);
    xsi_vlogvar_assign_value(t7, t5, 2, 0, 4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_stimulus(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
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

LAB6:    xsi_set_current_line(24, ng0);
    t4 = (t1 + 2632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2312);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(25, ng0);
    t4 = (t1 + 2792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    goto LAB4;

}

static void Monitor_41_2_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2312);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1912U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 3, ng2, 4, t0, (char)118, t3, 4, (char)118, t6, 2, (char)118, t8, 1);

LAB1:    return;
}

static void Initial_30_0(char *t0)
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
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);

LAB4:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3512);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 3608);
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

LAB5:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 3608);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 3512);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3512);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2632);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2792);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 2);

LAB13:    t9 = (t0 + 3608);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB15:    if (t13 != 0)
        goto LAB16;

LAB11:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB12:    t18 = (t0 + 3608);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 3512);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3512);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2632);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2792);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 2);

LAB19:    t9 = (t0 + 3608);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB21:    if (t13 != 0)
        goto LAB22;

LAB17:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB18:    t18 = (t0 + 3608);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 3512);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3512);
    t5 = (t0 + 1280);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2632);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2792);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 2);

LAB25:    t9 = (t0 + 3608);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t14 = (t12 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t13 = ((int  (*)(char *, char *))t17)(t0, t10);

LAB27:    if (t13 != 0)
        goto LAB28;

LAB23:    t10 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t10);

LAB24:    t18 = (t0 + 3608);
    t19 = *((char **)t18);
    t18 = (t0 + 1280);
    t20 = (t0 + 3512);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 3704U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t9 = (t0 + 3704U);
    *((char **)t9) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t9 = (t0 + 3704U);
    *((char **)t9) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t9 = (t0 + 3704U);
    *((char **)t9) = &&LAB25;
    goto LAB1;

}

static void Initial_39_1(char *t0)
{

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    Monitor_41_2(t0);

LAB1:    return;
}

static void Initial_45_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);

LAB4:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4008);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(47, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_41_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4256);
    t2 = (t0 + 4768);
    xsi_vlogfile_monitor((void *)Monitor_41_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_06351263777048108008_3632825982_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Initial_39_1,(void *)Initial_45_3,(void *)Monitor_41_2};
	static char *se[] = {(void *)sp_initialize,(void *)sp_stimulus};
	xsi_register_didat("work_m_06351263777048108008_3632825982", "isim/mux4_1_tb_isim_beh.exe.sim/work/m_06351263777048108008_3632825982.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
