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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002874746024_1030325945_init();
    work_m_00000000003337902882_3159811912_init();
    work_m_00000000003461870286_2492333471_init();
    work_m_00000000001741096041_0834524565_init();
    work_m_00000000000282753763_3736351255_init();
    work_m_00000000004109069340_2306642589_init();
    work_m_00000000002155163494_0343884865_init();
    work_m_00000000003684185406_4069886639_init();
    work_m_00000000002446036842_0386049871_init();
    work_m_00000000001847773058_3015077864_init();
    work_m_00000000003253353955_2866469414_init();
    work_m_00000000000458134200_2602303288_init();
    work_m_00000000001138049009_2694078838_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001138049009_2694078838");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}