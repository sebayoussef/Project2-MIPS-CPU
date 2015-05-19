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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/exp10/exp10/counter.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void Always_34_0(char *t0)
{
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);

LAB9:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB26;

LAB23:    if (t21 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t14) = 1;

LAB26:    t16 = (t14 + 4);
    t24 = *((unsigned int *)t16);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 8, t4, 8, t5, 8);
    t11 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 8, 0LL);

LAB29:
LAB22:
LAB18:
LAB15:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t11, 8, t13, 16);
    t12 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t14, 32, t12, 32);
    t16 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 8, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t11 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 0);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 0);
    *((unsigned int *)t4) = t20;
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 & 255U);
    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 255U);
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 8, 0LL);
    goto LAB15;

LAB16:    xsi_set_current_line(44, ng0);

LAB19:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 8, t5, 32);
    t11 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 8, 0LL);
    goto LAB18;

LAB20:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB22;

LAB25:    t13 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(53, ng0);
    t29 = (t0 + 2728);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 8, 0LL);
    goto LAB29;

}


extern void work_m_00000000002989248166_2582214024_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_00000000002989248166_2582214024", "isim/CPUsim_isim_beh.exe.sim/work/m_00000000002989248166_2582214024.didat");
	xsi_register_executes(pe);
}
