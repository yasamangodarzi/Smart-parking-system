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
static const char *ng0 = "C:/Users/Asus/Desktop/final/module1/park_space_number.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {3U, 1U};
static unsigned int ng4[] = {7U, 3U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {15U, 7U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {31U, 15U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {63U, 31U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {127U, 63U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {255U, 127U};
static unsigned int ng15[] = {7U, 0U};



static void Always_29_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);

LAB13:    t28 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_xcompare(t29, 8, t28, 8);
    if (t30 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_xcompare(t29, 8, t2, 8);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_xcompare(t29, 8, t2, 8);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_xcompare(t29, 8, t2, 8);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_xcompare(t29, 8, t2, 8);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_xcompare(t29, 8, t2, 8);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_xcompare(t29, 8, t2, 8);
    if (t30 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_xcompare(t29, 8, t2, 8);
    if (t30 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB12;

LAB14:    xsi_set_current_line(33, ng0);
    t31 = ((char*)((ng2)));
    t32 = (t0 + 1608);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 3);
    goto LAB30;

LAB16:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB30;

LAB18:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB30;

LAB20:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB30;

LAB22:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB30;

LAB24:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB30;

LAB26:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB30;

LAB28:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB30;

}


extern void work_m_00000000003337902882_3159811912_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000003337902882_3159811912", "isim/test_isim_beh.exe.sim/work/m_00000000003337902882_3159811912.didat");
	xsi_register_executes(pe);
}
