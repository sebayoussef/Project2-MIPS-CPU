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
static const char *ng0 = "C:/exp10/exp10/regfile.v";
static int ng1[] = {1, 0};
static int ng2[] = {31, 0};
static unsigned int ng3[] = {166U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {200U, 0U};
static int ng7[] = {5, 0};



static void Cont_38_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5640);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5512);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_39_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2008U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5704);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5528);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_40_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3368);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3368);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 5544);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_42_3(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
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

LAB7:    xsi_set_current_line(48, ng0);

LAB15:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    t4 = (t0 + 3368);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3368);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:
LAB25:
LAB20:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3368);
    t4 = (t0 + 3368);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3368);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    t4 = (t0 + 3368);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 3368);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t11, t17, 2, 1, t18, 32, 1);
    t19 = (t13 + 4);
    t6 = *((unsigned int *)t19);
    t28 = (!(t6));
    t20 = (t15 + 4);
    t7 = *((unsigned int *)t20);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB30;

LAB31:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3528);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_leq(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(45, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 3368);
    t17 = (t0 + 3368);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3368);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3528);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB13:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB14;

LAB16:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB17;

LAB18:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 3368);
    t11 = (t0 + 3368);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 3368);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2168U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t21, 5, 2);
    t20 = (t13 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (!(t27));
    t22 = (t15 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB21;

LAB22:    goto LAB20;

LAB21:    t33 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t15);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB22;

LAB23:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 2808U);
    t5 = *((char **)t4);
    memcpy(t13, t5, 8);
    t4 = (t0 + 3368);
    t11 = (t0 + 3368);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 3368);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t15, t16, t14, t19, 2, 1, t20, 32, 1);
    t21 = (t15 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (!(t27));
    t22 = (t16 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB26;

LAB27:    goto LAB25;

LAB26:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t4, t13, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB27;

LAB28:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB29;

LAB30:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t15), t36, 0LL);
    goto LAB31;

}


extern void work_m_00000000000843000780_1621107508_init()
{
	static char *pe[] = {(void *)Cont_38_0,(void *)Cont_39_1,(void *)Cont_40_2,(void *)Always_42_3};
	xsi_register_didat("work_m_00000000000843000780_1621107508", "isim/CPUsim_isim_beh.exe.sim/work/m_00000000000843000780_1621107508.didat");
	xsi_register_executes(pe);
}
