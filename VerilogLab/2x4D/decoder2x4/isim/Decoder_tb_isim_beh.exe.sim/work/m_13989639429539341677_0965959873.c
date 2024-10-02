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
static const char *ng0 = "Value of a=%b,b=%b,q0=%b,q1=%b,q2=%b,q3=%b";
static const char *ng1 = "/home/artmad/vlab/lab1/Verilog_labs/2x4D/tb/2x4Decoder_tb.v";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};

void Monitor_17_2(char *);
void Monitor_17_2(char *);


static void Monitor_17_2_Func(char *t0)
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

LAB0:    t1 = (t0 + 1928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    t7 = (t0 + 1368U);
    t10 = *((char **)t7);
    t7 = (t0 + 1528U);
    t11 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 3, ng0, 7, t0, (char)118, t3, 1, (char)118, t6, 1, (char)118, t8, 1, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 1);

LAB1:    return;
}

static void Initial_6_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng1);

LAB4:    xsi_set_current_line(9, ng1);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(9, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(9, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(10, ng1);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(10, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(10, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(11, ng1);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(11, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(11, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(12, ng1);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(12, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(12, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Initial_15_1(char *t0)
{

LAB0:    xsi_set_current_line(16, ng1);

LAB2:    xsi_set_current_line(17, ng1);
    Monitor_17_2(t0);

LAB1:    return;
}

void Monitor_17_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3304);
    t2 = (t0 + 3816);
    xsi_vlogfile_monitor((void *)Monitor_17_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_13989639429539341677_0965959873_init()
{
	static char *pe[] = {(void *)Initial_6_0,(void *)Initial_15_1,(void *)Monitor_17_2};
	xsi_register_didat("work_m_13989639429539341677_0965959873", "isim/Decoder_tb_isim_beh.exe.sim/work/m_13989639429539341677_0965959873.didat");
	xsi_register_executes(pe);
}
