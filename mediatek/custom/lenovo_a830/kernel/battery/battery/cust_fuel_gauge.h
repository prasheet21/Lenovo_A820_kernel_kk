#include <mach/mt_typedefs.h>

#define TEMPERATURE_T0                  110
#define TEMPERATURE_T1                  0
#define TEMPERATURE_T2                  25
#define TEMPERATURE_T3                  50
#define TEMPERATURE_T                   255 // This should be fixed, never change the value

#define FG_METER_RESISTANCE 	0

#define MAX_BOOTING_TIME_FGCURRENT	1*10 // 10s

#if defined(CONFIG_POWER_EXT)
#define OCV_BOARD_COMPESATE	72 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#else
#define OCV_BOARD_COMPESATE	0 //mV 
#define R_FG_BOARD_BASE		1000
#define R_FG_BOARD_SLOPE	1000 //slope
#endif

#define Q_MAX_POS_50	2373
#define Q_MAX_POS_25	2331
#define Q_MAX_POS_0	2386
#define Q_MAX_NEG_10	2308
#define Q_MAX_POS_50_H_CURRENT	2352
#define Q_MAX_POS_25_H_CURRENT	2309
#define Q_MAX_POS_0_H_CURRENT	2256
#define Q_MAX_NEG_10_H_CURRENT	2056


#define R_FG_VALUE 				20 // mOhm, base is 20
#define CURRENT_DETECT_R_FG	100  //10mA

#define OSR_SELECT_7			0

#define CAR_TUNE_VALUE			87 //0.95

/////////////////////////////////////////////////////////////////////
// <DOD, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{	0	,	4194	},
	{	2	,	4175	},
	{	3	,	4159	},
	{	5	,	4144	},
	{	6	,	4128	},
	{	7	,	4114	},
	{	9	,	4099	},
	{	10	,	4086	},
	{	12	,	4073	},
	{	13	,	4060	},
	{	15	,	4045	},
	{	17	,	4027	},
	{	18	,	4011	},
	{	19	,	3996	},
	{	21	,	3983	},
	{	22	,	3972	},
	{	24	,	3961	},
	{	25	,	3950	},
	{	27	,	3939	},
	{	29	,	3928	},
	{	30	,	3918	},
	{	31	,	3907	},
	{	33	,	3897	},
	{	34	,	3887	},
	{	36	,	3878	},
	{	37	,	3869	},
	{	39	,	3861	},
	{	40	,	3853	},
	{	42	,	3845	},
	{	44	,	3838	},
	{	45	,	3832	},
	{	46	,	3825	},
	{	48	,	3819	},
	{	49	,	3813	},
	{	51	,	3808	},
	{	52	,	3803	},
	{	54	,	3798	},
	{	55	,	3793	},
	{	57	,	3789	},
	{	58	,	3785	},
	{	60	,	3781	},
	{	61	,	3778	},
	{	63	,	3775	},
	{	64	,	3773	},
	{	66	,	3770	},
	{	67	,	3768	},
	{	69	,	3765	},
	{	70	,	3762	},
	{	72	,	3759	},
	{	73	,	3756	},
	{	75	,	3752	},
	{	76	,	3749	},
	{	78	,	3745	},
	{	79	,	3740	},
	{	81	,	3734	},
	{	82	,	3728	},
	{	84	,	3722	},
	{	85	,	3717	},
	{	87	,	3711	},
	{	88	,	3706	},
	{	90	,	3699	},
	{	91	,	3691	},
	{	93	,	3680	},
	{	94	,	3665	},
	{	96	,	3643	},
	{	97	,	3633	},
	{	97	,	3627	},
	{	98	,	3621	},
	{	98	,	3617	},
	{	98	,	3613	},
	{	99	,	3609	},
	{	99	,	3605	},
	{	99	,	3601	},
	{	99	,	3598	},
	{	99	,	3595	},
	{	99	,	3592	},
	{	100	,	3588	},
	{	100	,	3585	},
	{	100	,	3582	},
	{	100	,	3579	},
	{	100	,	3579	}
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{	0	,	4198	},
	{	1	,	4180	},
	{	3	,	4164	},
	{	4	,	4148	},
	{	6	,	4134	},
	{	7	,	4119	},
	{	9	,	4106	},
	{	10	,	4091	},
	{	12	,	4079	},
	{	13	,	4066	},
	{	15	,	4053	},
	{	16	,	4039	},
	{	17	,	4024	},
	{	19	,	4011	},
	{	20	,	3999	},
	{	22	,	3988	},
	{	23	,	3977	},
	{	25	,	3967	},
	{	26	,	3956	},
	{	28	,	3946	},
	{	29	,	3934	},
	{	30	,	3923	},
	{	32	,	3912	},
	{	33	,	3901	},
	{	35	,	3889	},
	{	36	,	3879	},
	{	38	,	3869	},
	{	39	,	3860	},
	{	41	,	3851	},
	{	42	,	3844	},
	{	44	,	3836	},
	{	45	,	3829	},
	{	46	,	3823	},
	{	48	,	3817	},
	{	49	,	3812	},
	{	51	,	3807	},
	{	52	,	3803	},
	{	54	,	3798	},
	{	55	,	3794	},
	{	57	,	3791	},
	{58  , 3787},         
	{	59	,	3784	},
	{	61	,	3782	},
	{	62	,	3778	},
	{	64	,	3776	},
	{	65	,	3775	},
	{	67	,	3773	},
	{	68	,	3771	},
	{	70	,	3768	},
	{	71	,	3766	},
	{	73	,	3763	},
	{	74	,	3760	},
	{	75	,	3756	},
	{	77	,	3752	},
	{	78	,	3747	},
	{	80	,	3743	},
	{	81	,	3737	},
	{	83	,	3731	},
	{	84	,	3724	},
	{86  , 3717},         
	{	87	,	3707	},
	{	88	,	3698	},
	{	90	,	3691	},
	{	91	,	3684	},
	{	93	,	3675	},
	{	94	,	3662	},
	{	96	,	3631	},
	{	97	,	3574	},
	{	98	,	3518	},
	{	99	,	3489	},
	{	99	,	3467	},
	{	99	,	3450	},
	{	99	,	3437	},
	{	100	,	3425	},
	{	100	,	3415	},
	{	100	,	3406	},
	{	100	,	3398	},
	{	100	,	3391	},
	{	100	,	3385	},
	{	100	,	3385	},
	{	100	,	3385	}
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{	0	,	4178	},
	{	2	,	4160	},
	{	3	,	4144	},
	{	4	,	4129	},
	{6   , 4114},         
	{	7	,	4100	},
	{	9	,	4086	},
	{	10	,	4072	},
	{	12	,	4059	},
	{	13	,	4046	},
	{	15	,	4034	},
	{16  , 4022},         
	{18  , 4009},         
	{	19	,	3998	},
	{	21	,	3987	},
	{	22	,	3977	},
	{	24	,	3966	},
	{	25	,	3956	},
	{	27	,	3946	},
	{	28	,	3937	},
	{	30	,	3928	},
	{	31	,	3919	},
	{	33	,	3910	},
	{	34	,	3902	},
	{	36	,	3893	},
	{	37	,	3882	},
	{	39	,	3868	},
	{	40	,	3854	},
	{	42	,	3843	},
	{	43	,	3834	},
	{	45	,	3827	},
	{	46	,	3820	},
	{	47	,	3814	},
	{	49	,	3809	},
	{	50	,	3804	},
	{	52	,	3800	},
	{	53	,	3795	},
	{	55	,	3791	},
	{	56	,	3788	},
	{	58	,	3785	},
	{	59	,	3781	},
	{	61	,	3778	},
	{	62	,	3776	},
	{	64	,	3774	},
	{	65	,	3772	},
	{	67	,	3770	},
	{	68	,	3768	},
	{	70	,	3764	},
	{	71	,	3758	},
	{	73	,	3753	},
	{	74	,	3747	},
	{	76	,	3741	},
	{	77	,	3737	},
	{	79	,	3733	},
	{	80	,	3728	},
	{	82	,	3722	},
	{	83	,	3716	},
	{	85	,	3708	},
	{	86	,	3701	},
	{	88	,	3692	},
	{	89	,	3680	},
	{	91	,	3674	},
	{	92	,	3669	},
	{	94	,	3662	},
	{	95	,	3650	},
	{	96	,	3612	},
	{	98	,	3546	},
	{	99	,	3454	},
	{	100	,	3304	},
	{	100	,	3144	},
	{	100	,	3108	},
	{	100	,	3090	},
	{	100	,	3084	},
	{	100	,	3080	},
	{	100	,	3078	},
	{	100	,	3076	},
	{	100	,	3073	},
	{	100	,	3073	},
	{	100	,	3071	},
	{	100	,	3069	},
	{	100	,	3069	}
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{	0	,	4196	},
	{	1	,	4178	},
	{	3	,	4163	},
	{	4	,	4147	},
	{	6	,	4132	},
	{	7	,	4118	},
	{	9	,	4104	},
	{	10	,	4090	},
	{	12	,	4076	},
	{	13	,	4063	},
	{	15	,	4050	},
	{	16	,	4037	},
	{	17	,	4025	},
	{	19	,	4013	},
	{	20	,	4001	},
	{	22	,	3990	},
	{	23	,	3979	},
	{	25	,	3968	},
	{	26	,	3957	},
	{	28	,	3947	},
	{	29	,	3937	},
	{	31	,	3927	},
	{	32	,	3918	},
	{	34	,	3909	},
	{	35	,	3900	},
	{	36	,	3891	},
	{	38	,	3881	},
	{	39	,	3869	},
	{	41	,	3854	},
	{	42	,	3842	},
	{	44	,	3833	},
	{	45	,	3826	},
	{	47	,	3819	},
	{	48	,	3813	},
	{	50	,	3807	},
	{	51	,	3801	},
	{	53	,	3798	},
	{	54	,	3794	},
	{	55	,	3790	},
	{	57	,	3786	},
	{	58	,	3782	},
	{	60	,	3779	},
	{	61	,	3776	},
	{	63	,	3773	},
	{	64	,	3770	},
	{	66	,	3768	},
	{	67	,	3766	},
	{	69	,	3763	},
	{	70	,	3757	},
	{	71	,	3747	},
	{	73	,	3739	},
	{	74	,	3734	},
	{	76	,	3729	},
	{	77	,	3723	},
	{	79	,	3719	},
	{	80	,	3715	},
	{	82	,	3710	},
	{	83	,	3703	},
	{	85	,	3696	},
	{	86	,	3688	},
	{	87	,	3680	},
	{	89	,	3669	},
	{	90	,	3664	},
	{	92	,	3659	},
	{	93	,	3653	},
	{	95	,	3642	},
	{	96	,	3609	},
	{	98	,	3549	},
	{	99	,	3468	},
	{	100	,	3348	},
	{	100	,	3145	},
	{	100	,	3119	},
	{	100	,	3105	},
	{	100	,	3095	},
	{	100	,	3088	},
	{	100	,	3084	},
	{	100	,	3078	},
	{	100	,	3075	},
	{	100	,	3071	},
	{	100	,	3070	},
	{	100	,	3070	}
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};      

/////////////////////////////////////////////////////////////////////
// <Rbat, Battery_Voltage> Table
/////////////////////////////////////////////////////////////////////
typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{	358	,	4194	},
	{	573	,	4175	},
	{	573	,	4159	},
	{	580	,	4144	},
	{	583	,	4128	},
	{	583	,	4114	},
	{	583	,	4099	},
	{	585	,	4086	},
	{	585	,	4073	},
	{	585	,	4060	},
	{	588	,	4045	},
	{	585	,	4027	},
	{	583	,	4011	},
	{	580	,	3996	},
	{	580	,	3983	},
	{	575	,	3972	},
	{	573	,	3961	},
	{	570	,	3950	},
	{	568	,	3939	},
	{	563	,	3928	},
	{	565	,	3918	},
	{	563	,	3907	},
	{	560	,	3897	},
	{	558	,	3887	},
	{	560	,	3878	},
	{	558	,	3869	},
	{	555	,	3861	},
	{	555	,	3853	},
	{	555	,	3845	},
	{	558	,	3838	},
	{	560	,	3832	},
	{	560	,	3825	},
	{	563	,	3819	},
	{	568	,	3813	},
	{	568	,	3808	},
	{	570	,	3803	},
	{	575	,	3798	},
	{	578	,	3793	},
	{	583	,	3789	},
	{	585	,	3785	},
	{	588	,	3781	},
	{	590	,	3778	},
	{	593	,	3775	},
	{	593	,	3773	},
	{	593	,	3770	},
	{	595	,	3768	},
	{	595	,	3765	},
	{	598	,	3762	},
	{	600	,	3759	},
	{	598	,	3756	},
	{	603	,	3752	},
	{	610	,	3749	},
	{	618	,	3745	},
	{	623	,	3740	},
	{	628	,	3734	},
	{	633	,	3728	},
	{	645	,	3722	},
	{	663	,	3717	},
	{	690	,	3711	},
	{	733	,	3706	},
	{	795	,	3699	},
	{	893	,	3691	},
	{	1035	,	3680	},
	{	1258	,	3665	},
	{	1580	,	3643	},
	{	1585	,	3633	},
	{	1573	,	3627	},
	{	1555	,	3621	},
	{	1550	,	3617	},
	{	1540	,	3613	},
	{	1528	,	3609	},
	{	1523	,	3605	},
	{	1513	,	3601	},
	{	1505	,	3598	},
	{	1498	,	3595	},
	{	1483	,	3592	},
	{	1488	,	3588	},
	{	1470	,	3585	},
	{	1463	,	3582	},
	{	1453	,	3579	},
	{	1460	,	3579	}
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{	260	,	4198	},
	{	303	,	4180	},
	{	305	,	4164	},
	{	308	,	4148	},
	{	310	,	4134	},
	{	313	,	4119	},
	{	318	,	4106	},
	{	318	,	4091	},
	{	323	,	4079	},
	{	323	,	4066	},
	{	328	,	4053	},
	{	330	,	4039	},
	{	333	,	4024	},
	{	335	,	4011	},
	{	338	,	3999	},
	{	338	,	3988	},
	{	338	,	3977	},
	{	340	,	3967	},
	{	338	,	3956	},
	{	338	,	3946	},
	{	333	,	3934	},
	{	333	,	3923	},
	{	328	,	3912	},
	{	325	,	3901	},
	{	320	,	3889	},
	{	318	,	3879	},
	{	313	,	3869	},
	{	313	,	3860	},
	{	310	,	3851	},
	{	313	,	3844	},
	{	308	,	3836	},
	{	308	,	3829	},
	{	308	,	3823	},
	{	308	,	3817	},
	{	310	,	3812	},
	{	313	,	3807	},
	{	313	,	3803	},
	{	313	,	3798	},
	{	315	,	3794	},
	{	315	,	3791	},
	{	318	,	3787	},
	{	318	,	3784	},
	{	323	,	3782	},
	{	320	,	3778	},
	{	323	,	3776	},
	{	325	,	3775	},
	{	325	,	3773	},
	{	325	,	3771	},
	{	323	,	3768	},
	{	328	,	3766	},
	{	328	,	3763	},
	{	328	,	3760	},
	{	330	,	3756	},
	{	328	,	3752	},
	{	328	,	3747	},
	{	333	,	3743	},
	{	333	,	3737	},
	{	335	,	3731	},
	{	335	,	3724	},
	{	340	,	3717	},
	{	343	,	3707	},
	{	350	,	3698	},
	{	368	,	3691	},
	{	403	,	3684	},
	{	470	,	3675	},
	{	603	,	3662	},
	{	805	,	3631	},
	{	1100	,	3574	},
	{	1298	,	3518	},
	{	1223	,	3489	},
	{	1173	,	3467	},
	{	1133	,	3450	},
	{	1103	,	3437	},
	{	1073	,	3425	},
	{	1048	,	3415	},
	{	1020	,	3406	},
	{	1003	,	3398	},
	{	983	,	3391	},
	{	970	,	3385	},
	{	968	,	3385	},
	{	968	,	3385	}
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{	158	,	4178	},
	{	148	,	4160	},
	{	150	,	4144	},
	{	153	,	4129	},
	{	150	,	4114	},
	{	153	,	4100	},
	{	150	,	4086	},
	{	150	,	4072	},
	{	150	,	4059	},
	{	153	,	4046	},
	{	155	,	4034	},
	{	158	,	4022	},
	{	155	,	4009	},
	{	158	,	3998	},
	{	160	,	3987	},
	{	160	,	3977	},
	{	163	,	3966	},
	{	163	,	3956	},
	{	165	,	3946	},
	{	170	,	3937	},
	{	170	,	3928	},
	{	175	,	3919	},
	{	175	,	3910	},
	{	180	,	3902	},
	{	183	,	3893	},
	{	180	,	3882	},
	{	173	,	3868	},
	{	163	,	3854	},
	{	158	,	3843	},
	{	155	,	3834	},
	{	155	,	3827	},
	{	150	,	3820	},
	{	150	,	3814	},
	{	153	,	3809	},
	{	155	,	3804	},
	{	155	,	3800	},
	{	153	,	3795	},
	{	155	,	3791	},
	{	158	,	3788	},
	{	160	,	3785	},
	{	158	,	3781	},
	{	160	,	3778	},
	{	160	,	3776	},
	{	165	,	3774	},
	{	165	,	3772	},
	{	165	,	3770	},
	{	165	,	3768	},
	{	163	,	3764	},
	{	158	,	3758	},
	{	158	,	3753	},
	{	155	,	3747	},
	{	153	,	3741	},
	{	155	,	3737	},
	{	158	,	3733	},
	{	158	,	3728	},
	{	158	,	3722	},
	{	160	,	3716	},
	{	158	,	3708	},
	{	160	,	3701	},
	{	160	,	3692	},
	{	158	,	3680	},
	{	160	,	3674	},
	{	165	,	3669	},
	{	170	,	3662	},
	{	175	,	3650	},
	{	178	,	3612	},
	{	188	,	3546	},
	{	210	,	3454	},
	{	260	,	3304	},
	{	363	,	3144	},
	{	273	,	3108	},
	{	238	,	3090	},
	{	218	,	3084	},
	{	205	,	3080	},
	{	198	,	3078	},
	{	198	,	3076	},
	{	198	,	3073	},
	{	188	,	3073	},
	{	185	,	3071	},
	{	183	,	3069	},
	{	185	,	3069	}
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{	138	,	4196	},
	{	140	,	4178	},
	{	143	,	4163	},
	{	140	,	4147	},
	{	143	,	4132	},
	{	148	,	4118	},
	{	150	,	4104	},
	{	150	,	4090	},
	{	143	,	4076	},
	{	145	,	4063	},
	{	145	,	4050	},
	{	145	,	4037	},
	{	148	,	4025	},
	{	148	,	4013	},
	{	148	,	4001	},
	{	150	,	3990	},
	{	150	,	3979	},
	{	150	,	3968	},
	{	150	,	3957	},
	{	155	,	3947	},
	{	155	,	3937	},
	{	155	,	3927	},
	{	160	,	3918	},
	{	163	,	3909	},
	{	163	,	3900	},
	{	168	,	3891	},
	{	168	,	3881	},
	{	163	,	3869	},
	{	153	,	3854	},
	{	150	,	3842	},
	{	148	,	3833	},
	{	150	,	3826	},
	{	145	,	3819	},
	{	150	,	3813	},
	{	148	,	3807	},
	{	145	,	3801	},
	{	153	,	3798	},
	{	150	,	3794	},
	{	148	,	3790	},
	{	148	,	3786	},
	{	148	,	3782	},
	{	150	,	3779	},
	{	150	,	3776	},
	{	150	,	3773	},
	{	153	,	3770	},
	{	155	,	3768	},
	{	158	,	3766	},
	{	158	,	3763	},
	{	150	,	3757	},
	{	145	,	3747	},
	{	143	,	3739	},
	{	145	,	3734	},
	{	148	,	3729	},
	{	145	,	3723	},
	{	148	,	3719	},
	{	148	,	3715	},
	{	148	,	3710	},
	{	148	,	3703	},
	{	150	,	3696	},
	{	148	,	3688	},
	{	150	,	3680	},
	{	148	,	3669	},
	{	150	,	3664	},
	{	150	,	3659	},
	{	153	,	3653	},
	{	160	,	3642	},
	{	160	,	3609	},
	{	165	,	3549	},
	{	178	,	3468	},
	{	213	,	3348	},
	{	365	,	3145	},
	{	303	,	3119	},
	{	265	,	3105	},
	{	245	,	3095	},
	{	230	,	3088	},
	{	210	,	3084	},
	{	203	,	3078	},
	{	188	,	3075	},
	{	183	,	3071	},
	{	178	,	3070	},
	{	183	,	3070	}
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};      


int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

//#define CONFIG_POWER_VERIFY
