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
static const char *ng0 = "I:/project_S2/module_6/decrypt.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {7U, 7U};



static void Always_33_0(char *t0)
{
    char t9[8];
    char t19[8];
    char t27[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    int t49;

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

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:
LAB10:
LAB9:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);

LAB12:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t17) = t26;
    t28 = *((unsigned int *)t9);
    t29 = *((unsigned int *)t19);
    t30 = (t28 ^ t29);
    *((unsigned int *)t27) = t30;
    t31 = (t9 + 4);
    t32 = (t19 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB13;

LAB14:
LAB15:    t41 = (t0 + 1768);
    t43 = (t0 + 1768);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t46, 32, 1);
    t47 = (t42 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (!(t48));
    if (t49 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t10 = (t8 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t10);
    t25 = (t24 >> 1);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    t28 = *((unsigned int *)t9);
    t29 = *((unsigned int *)t19);
    t30 = (t28 ^ t29);
    *((unsigned int *)t27) = t30;
    t17 = (t9 + 4);
    t18 = (t19 + 4);
    t20 = (t27 + 4);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t18);
    t36 = (t34 | t35);
    *((unsigned int *)t20) = t36;
    t37 = *((unsigned int *)t20);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB18;

LAB19:
LAB20:    t31 = (t0 + 1768);
    t32 = (t0 + 1768);
    t33 = (t32 + 72U);
    t41 = *((char **)t33);
    t43 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t42, t41, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t48 = *((unsigned int *)t44);
    t6 = (!(t48));
    if (t6 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t10 = (t8 + 4);
    t21 = *((unsigned int *)t8);
    t22 = (t21 >> 2);
    t23 = (t22 & 1);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t10);
    t25 = (t24 >> 2);
    t26 = (t25 & 1);
    *((unsigned int *)t7) = t26;
    t28 = *((unsigned int *)t9);
    t29 = *((unsigned int *)t19);
    t30 = (t28 ^ t29);
    *((unsigned int *)t27) = t30;
    t17 = (t9 + 4);
    t18 = (t19 + 4);
    t20 = (t27 + 4);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t18);
    t36 = (t34 | t35);
    *((unsigned int *)t20) = t36;
    t37 = *((unsigned int *)t20);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB23;

LAB24:
LAB25:    t31 = (t0 + 1768);
    t32 = (t0 + 1768);
    t33 = (t32 + 72U);
    t41 = *((char **)t33);
    t43 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t42, t41, 2, t43, 32, 1);
    t44 = (t42 + 4);
    t48 = *((unsigned int *)t44);
    t6 = (!(t48));
    if (t6 == 1)
        goto LAB26;

LAB27:    goto LAB11;

LAB13:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t41, t27, 0, *((unsigned int *)t42), 1, 0LL);
    goto LAB17;

LAB18:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t20);
    *((unsigned int *)t27) = (t39 | t40);
    goto LAB20;

LAB21:    xsi_vlogvar_wait_assign_value(t31, t27, 0, *((unsigned int *)t42), 1, 0LL);
    goto LAB22;

LAB23:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t20);
    *((unsigned int *)t27) = (t39 | t40);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t31, t27, 0, *((unsigned int *)t42), 1, 0LL);
    goto LAB27;

}


extern void work_m_00000000000282753763_3736351255_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000000282753763_3736351255", "isim/decrypt_isim_beh.exe.sim/work/m_00000000000282753763_3736351255.didat");
	xsi_register_executes(pe);
}
