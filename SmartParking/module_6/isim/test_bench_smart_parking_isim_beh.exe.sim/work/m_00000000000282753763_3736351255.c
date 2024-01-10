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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Asus/Downloads/New folder (6)/module_6/module_6/decrypt.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {7U, 7U};



static void Always_33_0(char *t0)
{
    char t13[8];
    char t23[8];
    char t31[8];
    char t46[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    int t53;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(38, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t21) = t30;
    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t23);
    t34 = (t32 ^ t33);
    *((unsigned int *)t31) = t34;
    t35 = (t13 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB10;

LAB11:
LAB12:    t45 = (t0 + 1768);
    t47 = (t0 + 1768);
    t48 = (t47 + 72U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t46, t49, 2, t50, 32, 1);
    t51 = (t46 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    if (t53 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 1208U);
    t11 = *((char **)t5);
    memset(t23, 0, 8);
    t5 = (t23 + 4);
    t12 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t23) = t18;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 1);
    t25 = (t20 & 1);
    *((unsigned int *)t5) = t25;
    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t23);
    t28 = (t26 ^ t27);
    *((unsigned int *)t31) = t28;
    t14 = (t13 + 4);
    t21 = (t23 + 4);
    t22 = (t31 + 4);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t21);
    t32 = (t29 | t30);
    *((unsigned int *)t22) = t32;
    t33 = *((unsigned int *)t22);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB15;

LAB16:
LAB17:    t24 = (t0 + 1768);
    t35 = (t0 + 1768);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t45 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t46, t37, 2, t45, 32, 1);
    t47 = (t46 + 4);
    t40 = *((unsigned int *)t47);
    t53 = (!(t40));
    if (t53 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 1208U);
    t11 = *((char **)t5);
    memset(t23, 0, 8);
    t5 = (t23 + 4);
    t12 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t23) = t18;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 2);
    t25 = (t20 & 1);
    *((unsigned int *)t5) = t25;
    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t23);
    t28 = (t26 ^ t27);
    *((unsigned int *)t31) = t28;
    t14 = (t13 + 4);
    t21 = (t23 + 4);
    t22 = (t31 + 4);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t21);
    t32 = (t29 | t30);
    *((unsigned int *)t22) = t32;
    t33 = *((unsigned int *)t22);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB20;

LAB21:
LAB22:    t24 = (t0 + 1768);
    t35 = (t0 + 1768);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t45 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t46, t37, 2, t45, 32, 1);
    t47 = (t46 + 4);
    t40 = *((unsigned int *)t47);
    t53 = (!(t40));
    if (t53 == 1)
        goto LAB23;

LAB24:    goto LAB8;

LAB10:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    goto LAB12;

LAB13:    xsi_vlogvar_assign_value(t45, t31, 0, *((unsigned int *)t46), 1);
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t31) = (t38 | t39);
    goto LAB17;

LAB18:    xsi_vlogvar_assign_value(t24, t31, 0, *((unsigned int *)t46), 1);
    goto LAB19;

LAB20:    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t31) = (t38 | t39);
    goto LAB22;

LAB23:    xsi_vlogvar_assign_value(t24, t31, 0, *((unsigned int *)t46), 1);
    goto LAB24;

}


extern void work_m_00000000000282753763_3736351255_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000000282753763_3736351255", "isim/test_bench_smart_parking_isim_beh.exe.sim/work/m_00000000000282753763_3736351255.didat");
	xsi_register_executes(pe);
}
