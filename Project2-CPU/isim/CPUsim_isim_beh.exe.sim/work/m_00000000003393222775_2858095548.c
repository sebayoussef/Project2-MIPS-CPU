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
static const char *ng0 = "C:/Users/sebayoussef.AUC/Desktop/New folder/clkdiv.v";
static int ng1[] = {0, 0};
static int ng2[] = {250000, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {100000, 0};



static void Always_28_0(char *t0)
{
    char t13[8];
    char t35[8];
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
    char *t14;
    char *t15;
    unsigned int t16;
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
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);

LAB10:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(43, ng0);

LAB30:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB34;

LAB31:    if (t20 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t13) = 1;

LAB34:    t15 = (t13 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(48, ng0);

LAB45:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);

LAB37:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(29, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(34, ng0);

LAB14:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB18;

LAB15:    if (t25 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(39, ng0);

LAB29:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);

LAB21:    goto LAB13;

LAB17:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(35, ng0);

LAB22:    xsi_set_current_line(36, ng0);
    t36 = (t0 + 1768);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t35, 0, 8);
    t39 = (t38 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t39) == 0)
        goto LAB23;

LAB25:    t45 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t45) = 1;

LAB26:    t46 = (t35 + 4);
    t47 = (t38 + 4);
    t48 = *((unsigned int *)t38);
    t49 = (~(t48));
    *((unsigned int *)t35) = t49;
    *((unsigned int *)t46) = 0;
    if (*((unsigned int *)t47) != 0)
        goto LAB28;

LAB27:    t54 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t54 & 1U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 1U);
    t56 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t56, t35, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB21;

LAB23:    *((unsigned int *)t35) = 1;
    goto LAB26;

LAB28:    t50 = *((unsigned int *)t35);
    t51 = *((unsigned int *)t47);
    *((unsigned int *)t35) = (t50 | t51);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t47);
    *((unsigned int *)t46) = (t52 | t53);
    goto LAB27;

LAB33:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(44, ng0);

LAB38:    xsi_set_current_line(45, ng0);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t36 = *((char **)t29);
    memset(t35, 0, 8);
    t37 = (t36 + 4);
    t30 = *((unsigned int *)t37);
    t31 = (~(t30));
    t32 = *((unsigned int *)t36);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB42;

LAB40:    if (*((unsigned int *)t37) == 0)
        goto LAB39;

LAB41:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;

LAB42:    t39 = (t35 + 4);
    t45 = (t36 + 4);
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    *((unsigned int *)t35) = t41;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB44;

LAB43:    t49 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t49 & 1U);
    t50 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t50 & 1U);
    t46 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t46, t35, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB37;

LAB39:    *((unsigned int *)t35) = 1;
    goto LAB42;

LAB44:    t42 = *((unsigned int *)t35);
    t43 = *((unsigned int *)t45);
    *((unsigned int *)t35) = (t42 | t43);
    t44 = *((unsigned int *)t39);
    t48 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t44 | t48);
    goto LAB43;

}


extern void work_m_00000000003393222775_2858095548_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000003393222775_2858095548", "isim/CPUsim_isim_beh.exe.sim/work/m_00000000003393222775_2858095548.didat");
	xsi_register_executes(pe);
}
