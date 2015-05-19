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
static const char *ng0 = "C:/Users/sebayoussef.AUC/Desktop/Project2-CPU/Project2-CPU/binto7seg.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {79U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {18U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {76U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {36U, 0U};
static unsigned int ng12[] = {32U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {15U, 0U};
static unsigned int ng15[] = {8U, 0U};
static unsigned int ng16[] = {9U, 0U};
static unsigned int ng17[] = {10U, 0U};
static unsigned int ng18[] = {11U, 0U};
static unsigned int ng19[] = {96U, 0U};
static unsigned int ng20[] = {12U, 0U};
static unsigned int ng21[] = {49U, 0U};
static unsigned int ng22[] = {13U, 0U};
static unsigned int ng23[] = {65U, 0U};
static unsigned int ng24[] = {14U, 0U};
static unsigned int ng25[] = {48U, 0U};
static unsigned int ng26[] = {56U, 0U};



static void Always_46_0(char *t0)
{
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
    int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);

LAB9:    t11 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t11, 4);
    if (t13 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng20)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng22)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng24)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 4);
    if (t13 == 1)
        goto LAB40;

LAB41:
LAB43:
LAB42:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB44:    goto LAB8;

LAB10:    xsi_set_current_line(48, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 7);
    goto LAB44;

LAB12:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB14:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB16:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB18:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB20:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB22:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB24:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB26:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB28:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB30:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB32:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB34:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB36:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB38:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

LAB40:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB44;

}


extern void work_m_00000000002596193988_2984067346_init()
{
	static char *pe[] = {(void *)Always_46_0};
	xsi_register_didat("work_m_00000000002596193988_2984067346", "isim/CPUsim_isim_beh.exe.sim/work/m_00000000002596193988_2984067346.didat");
	xsi_register_executes(pe);
}
