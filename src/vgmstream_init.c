#include "vgmstream_init.h"

//typedef VGMSTREAM* (*init_vgmstream_t)(STREAMFILE*);

/* list of metadata parser functions that will recognize files, used on init */
init_vgmstream_t init_vgmstream_functions[] = {
    init_vgmstream_adx,
    init_vgmstream_brstm,
    init_vgmstream_brwav,
    init_vgmstream_bfwav,
    init_vgmstream_bcwav,
    init_vgmstream_brwar,
    init_vgmstream_nds_strm,
    init_vgmstream_afc,
    init_vgmstream_ast,
    init_vgmstream_halpst,
    init_vgmstream_rs03,
    init_vgmstream_ngc_dsp_std,
    init_vgmstream_ngc_dsp_std_le,
    init_vgmstream_ngc_mdsp_std,
    init_vgmstream_csmp,
    init_vgmstream_rfrm,
    init_vgmstream_cstr,
    init_vgmstream_gcsw,
    init_vgmstream_ads,
    init_vgmstream_npsf,
    init_vgmstream_xa,
    init_vgmstream_rxws,
    init_vgmstream_ngc_dsp_stm,
    init_vgmstream_exst,
    init_vgmstream_svag_kcet,
    init_vgmstream_ngc_mpdsp,
    init_vgmstream_ngc_dsp_std_int,
    init_vgmstream_vag,
    init_vgmstream_vag_aaap,
    init_vgmstream_vag_footer,
    init_vgmstream_vag_evolution_games,
    init_vgmstream_ild,
    init_vgmstream_ngc_str,
    init_vgmstream_ea_schl,
    init_vgmstream_caf,
    init_vgmstream_vpk,
    init_vgmstream_genh,
    init_vgmstream_ogg_vorbis,
    init_vgmstream_sfl_ogg,
    init_vgmstream_sadb,
    init_vgmstream_ps2_bmdx,
    init_vgmstream_wsi,
    init_vgmstream_aifc,
    init_vgmstream_str_snds,
    init_vgmstream_ws_aud,
    init_vgmstream_ahx,
    init_vgmstream_iivb,
    init_vgmstream_svs,
    init_vgmstream_riff,
    init_vgmstream_rifx,
    init_vgmstream_nwa,
    init_vgmstream_ea_1snh,
    init_vgmstream_ea_eacs,
    init_vgmstream_xss,
    init_vgmstream_sl3,
    init_vgmstream_hgc1,
    init_vgmstream_aus,
    init_vgmstream_rws,
    init_vgmstream_fsb,
    init_vgmstream_fsb5,
    init_vgmstream_rwax,
    init_vgmstream_xwb,
    init_vgmstream_musc,
    init_vgmstream_musx,
    init_vgmstream_filp,
    init_vgmstream_ikm,
    init_vgmstream_ster,
    init_vgmstream_bg00,
    init_vgmstream_sat_dvi,
    init_vgmstream_dc_kcey,
    init_vgmstream_rstm_rockstar,
    init_vgmstream_acm,
    init_vgmstream_mus_acm,
    init_vgmstream_vig_kces,
    init_vgmstream_hxd,
    init_vgmstream_vsv,
    init_vgmstream_ps2_rkv,
    init_vgmstream_lp_ap_lep,
    init_vgmstream_sdt,
    init_vgmstream_aix,
    init_vgmstream_wvs_xbox,
    init_vgmstream_wvs_ngc,
    init_vgmstream_str_sega,
    init_vgmstream_str_sega_custom,
    init_vgmstream_dec,
    init_vgmstream_xmu,
    init_vgmstream_sat_sap,
    init_vgmstream_dc_idvi,
    init_vgmstream_ps2_rnd,
    init_vgmstream_idsp_tt,
    init_vgmstream_kraw,
    init_vgmstream_omu,
    init_vgmstream_xa2_acclaim,
    init_vgmstream_idsp_nl,
    init_vgmstream_idsp_ie,
    init_vgmstream_ymf,
    init_vgmstream_sadl,
    init_vgmstream_fag,
    init_vgmstream_mic,
    init_vgmstream_ngc_pdt_split,
    init_vgmstream_ngc_pdt,
    init_vgmstream_mus_krome,
    init_vgmstream_spsd,
    init_vgmstream_rsd,
    init_vgmstream_bgw,
    init_vgmstream_spw,
    init_vgmstream_ps2_ass,
    init_vgmstream_ubi_jade,
    init_vgmstream_ubi_jade_container,
    init_vgmstream_seg,
    init_vgmstream_riff_ima,
    init_vgmstream_knon,
    init_vgmstream_gca,
    init_vgmstream_spt_spd,
    init_vgmstream_ish_isd,
    init_vgmstream_gsnd,
    init_vgmstream_ydsp,
    init_vgmstream_ssm,
    init_vgmstream_ps2_joe,
    init_vgmstream_vgs,
    init_vgmstream_dcs_wav,
    init_vgmstream_mul,
    init_vgmstream_thp,
    init_vgmstream_sts,
    init_vgmstream_p2bt_move_visa,
    init_vgmstream_gbts,
    init_vgmstream_ngc_dsp_iadp,
    init_vgmstream_aax,
    init_vgmstream_utf_dsp,
    init_vgmstream_str_sqex,
    init_vgmstream_sat_baka,
    init_vgmstream_swav,
    init_vgmstream_vsf,
    init_vgmstream_nds_rrds,
    init_vgmstream_smss,
    init_vgmstream_ads_midway,
    init_vgmstream_zsd,
    init_vgmstream_vgs_ps,
    init_vgmstream_redspark,
    init_vgmstream_wii_wsd,
    init_vgmstream_dsp_ndp,
    init_vgmstream_ps2_sps,
    init_vgmstream_nds_hwas,
    init_vgmstream_lps,
    init_vgmstream_ps2_snd,
    init_vgmstream_naomi_adpcm,
    init_vgmstream_sd9,
    init_vgmstream_2dx9,
    init_vgmstream_dsp_kceje,
    init_vgmstream_gcub,
    init_vgmstream_maxis_xa,
    init_vgmstream_ngc_sck_dsp,
    init_vgmstream_apple_caff,
    init_vgmstream_pc_mxst,
    init_vgmstream_sab,
    init_vgmstream_bns,
    init_vgmstream_wii_was,
    init_vgmstream_pona_3do,
    init_vgmstream_pona_psx,
    init_vgmstream_xbox_hlwav,
    init_vgmstream_myspd,
    init_vgmstream_his,
    init_vgmstream_ast_mmv,
    init_vgmstream_ast_mv,
    init_vgmstream_dmsg,
    init_vgmstream_ngc_dsp_aaap,
    init_vgmstream_wb,
    init_vgmstream_bnsf,
    init_vgmstream_mcg,
    init_vgmstream_smpl,
    init_vgmstream_msa,
    init_vgmstream_voi,
    init_vgmstream_ngc_rkv,
    init_vgmstream_dsp_ddsp,
    init_vgmstream_p3d,
    init_vgmstream_mpds,
    init_vgmstream_dsp_str_ig,
    init_vgmstream_ea_swvr,
    init_vgmstream_dsp_xiii,
    init_vgmstream_dsp_cabelas,
    init_vgmstream_lpcm_shade,
    init_vgmstream_ps2_vms,
    init_vgmstream_xau,
    init_vgmstream_bar,
    init_vgmstream_dsp_dspw,
    init_vgmstream_jstm,
    init_vgmstream_xvag,
    init_vgmstream_cps,
    init_vgmstream_sqex_scd,
    init_vgmstream_ngc_nst_dsp,
    init_vgmstream_baf,
    init_vgmstream_msf,
    init_vgmstream_sndp,
    init_vgmstream_sgxd,
    init_vgmstream_ras,
    init_vgmstream_spm,
    init_vgmstream_vs_str,
    init_vgmstream_lsf_n1nj4n,
    init_vgmstream_xwav_new,
    init_vgmstream_xwav_old,
    init_vgmstream_hyperscan_kvag,
    init_vgmstream_psnd,
    init_vgmstream_adp_wildfire,
    init_vgmstream_adp_qd,
    init_vgmstream_mtaf,
    init_vgmstream_alp,
    init_vgmstream_wpd,
    init_vgmstream_mn_str,
    init_vgmstream_mss,
    init_vgmstream_ps2_hsf,
    init_vgmstream_ivag,
    init_vgmstream_2pfs,
    init_vgmstream_xnb,
    init_vgmstream_ubi_ckd,
    init_vgmstream_ps2_vbk,
    init_vgmstream_xwb_konami,
    init_vgmstream_bcstm,
    init_vgmstream_idsp_namco,
    init_vgmstream_kt_g1l,
    init_vgmstream_kt_wiibgm,
    init_vgmstream_bfstm,
    init_vgmstream_mca,
#if defined(VGM_USE_MP4V2) && defined(VGM_USE_FDKAAC)
    init_vgmstream_mp4_aac,
#endif
    init_vgmstream_ktss,
    init_vgmstream_hca,
    init_vgmstream_svag_snk,
    init_vgmstream_vds_vdm,
    init_vgmstream_cxs,
    init_vgmstream_adx_monster,
    init_vgmstream_akb,
    init_vgmstream_akb2,
#ifdef VGM_USE_FFMPEG
    init_vgmstream_mp4_aac_ffmpeg,
#endif
    init_vgmstream_bik,
    init_vgmstream_astb,
    init_vgmstream_wwise,
    init_vgmstream_ubi_raki,
    init_vgmstream_pasx,
    init_vgmstream_xma,
    init_vgmstream_sndx,
    init_vgmstream_ogl,
    init_vgmstream_mpc3,
    init_vgmstream_ghs,
    init_vgmstream_aac_triace,
    init_vgmstream_va3,
    init_vgmstream_mta2,
    init_vgmstream_mta2_container,
    init_vgmstream_xa_xa30,
    init_vgmstream_xa_04sw,
    init_vgmstream_ea_bnk,
    init_vgmstream_ea_abk_schl,
    init_vgmstream_ea_amb_schl,
    init_vgmstream_ea_hdr_dat,
    init_vgmstream_ea_hdr_dat_v2,
    init_vgmstream_ea_map_mus,
    init_vgmstream_ea_mpf_mus_schl,
    init_vgmstream_ea_msb_mus_schl,
    init_vgmstream_ea_schl_fixed,
    init_vgmstream_sk_aud,
    init_vgmstream_stma,
    init_vgmstream_ea_snu,
    init_vgmstream_awc,
    init_vgmstream_opus_std,
    init_vgmstream_opus_n1,
    init_vgmstream_opus_capcom,
    init_vgmstream_opus_nop,
    init_vgmstream_opus_shinen,
    init_vgmstream_opus_nus3,
    init_vgmstream_opus_sps_n1,
    init_vgmstream_pc_ast,
    init_vgmstream_naac,
    init_vgmstream_ubi_sb,
    init_vgmstream_ubi_sm,
    init_vgmstream_ubi_bnm,
    init_vgmstream_ubi_bnm_ps2,
    init_vgmstream_ubi_dat,
    init_vgmstream_ubi_blk,
    init_vgmstream_ubi_apm,
    init_vgmstream_ezw,
    init_vgmstream_vxn,
    init_vgmstream_ea_snr_sns,
    init_vgmstream_ea_sps,
    init_vgmstream_ea_abk_eaac,
    init_vgmstream_ea_amb_eaac,
    init_vgmstream_ea_hdr_sth_dat,
    init_vgmstream_ea_mpf_mus_eaac,
    init_vgmstream_ea_msb_mus_eaac,
    init_vgmstream_ea_tmx,
    init_vgmstream_ea_sbr,
    init_vgmstream_ea_sbr_harmony,
    init_vgmstream_vid1,
    init_vgmstream_flx,
    init_vgmstream_mogg,
    init_vgmstream_kma9,
    init_vgmstream_xwc,
    init_vgmstream_atsl,
    init_vgmstream_sps_n1,
    init_vgmstream_apa3,
    init_vgmstream_sqex_sead,
    init_vgmstream_waf,
    init_vgmstream_wave,
    init_vgmstream_wave_segmented,
    init_vgmstream_smv,
    init_vgmstream_nxap,
    init_vgmstream_ea_wve_au00,
    init_vgmstream_ea_wve_ad10,
    init_vgmstream_sthd,
    init_vgmstream_pcm_sre,
    init_vgmstream_dsp_mcadpcm,
    init_vgmstream_ubi_lyn,
    init_vgmstream_ubi_lyn_container,
    init_vgmstream_msb_msh,
    init_vgmstream_txtp,
    init_vgmstream_smc_smh,
    init_vgmstream_ppst,
    init_vgmstream_sps_n1_segmented,
    init_vgmstream_ubi_bao_pk,
    init_vgmstream_ubi_bao_atomic,
    init_vgmstream_dsp_switch_audio,
    init_vgmstream_sadf,
    init_vgmstream_h4m,
    init_vgmstream_ads_container,
    init_vgmstream_asf,
    init_vgmstream_xmd,
    init_vgmstream_cks,
    init_vgmstream_ckb,
    init_vgmstream_wv6,
    init_vgmstream_str_wav,
    init_vgmstream_wavebatch,
    init_vgmstream_hd3_bd3,
    init_vgmstream_bnk_sony,
    init_vgmstream_nus3bank,
    init_vgmstream_sscf,
    init_vgmstream_dsp_sps_n1,
    init_vgmstream_dsp_itl_ch,
    init_vgmstream_a2m,
    init_vgmstream_ahv,
    init_vgmstream_msv,
    init_vgmstream_sdf,
    init_vgmstream_svgp,
    init_vgmstream_vai,
    init_vgmstream_aif_asobo,
    init_vgmstream_ao,
    init_vgmstream_apc,
    init_vgmstream_wav2,
    init_vgmstream_sfxb,
    init_vgmstream_derf,
    init_vgmstream_utk,
    init_vgmstream_nxa1,
    init_vgmstream_ue4opus,
    init_vgmstream_xwma,
    init_vgmstream_xopus,
    init_vgmstream_vs_square,
    init_vgmstream_msf_banpresto_wmsf,
    init_vgmstream_msf_banpresto_2msf,
    init_vgmstream_nwav,
    init_vgmstream_xpcm,
    init_vgmstream_msf_tamasoft,
    init_vgmstream_xps_dat,
    init_vgmstream_xps,
    init_vgmstream_zsnd,
    init_vgmstream_opus_opusx,
    init_vgmstream_dsp_adpy,
    init_vgmstream_dsp_adpx,
    init_vgmstream_ogg_opus,
    init_vgmstream_nus3audio,
    init_vgmstream_imc,
    init_vgmstream_imc_container,
    init_vgmstream_smp,
    init_vgmstream_gin,
    init_vgmstream_dsf,
    init_vgmstream_208,
    init_vgmstream_dsp_lucasarts_ds2,
    init_vgmstream_ffdl,
    init_vgmstream_mus_vc,
    init_vgmstream_strm_abylight,
    init_vgmstream_sfh,
    init_vgmstream_ea_schl_video,
    init_vgmstream_msf_konami,
    init_vgmstream_xwma_konami,
    init_vgmstream_9tav,
    init_vgmstream_fsb5_fev_bank,
    init_vgmstream_bwav,
    init_vgmstream_opus_prototype,
    init_vgmstream_awb,
    init_vgmstream_acb,
    init_vgmstream_rad,
    init_vgmstream_smk,
    init_vgmstream_mzrt_v0,
    init_vgmstream_xavs,
    init_vgmstream_psf_single,
    init_vgmstream_psf_segmented,
    init_vgmstream_dsp_itl,
    init_vgmstream_sch,
    init_vgmstream_nub,
    init_vgmstream_nub_wav,
    init_vgmstream_nub_vag,
    init_vgmstream_nub_at3,
    init_vgmstream_nub_xma,
    init_vgmstream_nub_idsp,
    init_vgmstream_nub_is14,
    init_vgmstream_xwv_valve,
    init_vgmstream_ubi_hx,
    init_vgmstream_bmp_konami,
    init_vgmstream_opus_opusnx,
    init_vgmstream_opus_sqex,
    init_vgmstream_isb,
    init_vgmstream_xssb,
    init_vgmstream_xma_ue3,
    init_vgmstream_csb,
    init_vgmstream_fwse,
    init_vgmstream_fda,
    init_vgmstream_kwb,
    init_vgmstream_lrmd,
    init_vgmstream_bkhd,
    init_vgmstream_bkhd_fx,
    init_vgmstream_diva,
    init_vgmstream_imuse,
    init_vgmstream_ktsr,
    init_vgmstream_asrs,
    init_vgmstream_mups,
    init_vgmstream_kat,
    init_vgmstream_pcm_success,
    init_vgmstream_ktsc,
    init_vgmstream_adp_konami,
    init_vgmstream_zwv,
    init_vgmstream_dsb,
    init_vgmstream_bsf,
    init_vgmstream_sdrh_new,
    init_vgmstream_sdrh_old,
    init_vgmstream_wady,
    init_vgmstream_dsp_sqex,
    init_vgmstream_dsp_wiivoice,
    init_vgmstream_xws,
    init_vgmstream_cpk,
    init_vgmstream_opus_nsopus,
    init_vgmstream_sbk,
    init_vgmstream_dsp_wiiadpcm,
    init_vgmstream_dsp_cwac,
    init_vgmstream_ifs,
    init_vgmstream_acx,
    init_vgmstream_compresswave,
    init_vgmstream_ktac,
    init_vgmstream_mzrt_v1,
    init_vgmstream_bsnf,
    init_vgmstream_tac,
    init_vgmstream_idsp_tose,
    init_vgmstream_dsp_kwa,
    init_vgmstream_ogv_3rdeye,
    init_vgmstream_sspr,
    init_vgmstream_piff_tpcm,
    init_vgmstream_wxd_wxh,
    init_vgmstream_bnk_relic,
    init_vgmstream_xsh_xsd_xss,
    init_vgmstream_psb,
    init_vgmstream_lopu_fb,
    init_vgmstream_lpcm_fb,
    init_vgmstream_wbk,
    init_vgmstream_wbk_nslb,
    init_vgmstream_dsp_apex,
    init_vgmstream_ubi_ckd_cwav,
    init_vgmstream_sspf,
    init_vgmstream_opus_rsnd,
    init_vgmstream_s3v,
    init_vgmstream_esf,
    init_vgmstream_adm3,
    init_vgmstream_tt_ad,
    init_vgmstream_bw_mp3_riff,
    init_vgmstream_bw_riff_mp3,
    init_vgmstream_sndz,
    init_vgmstream_vab,
    init_vgmstream_bigrp,
    init_vgmstream_sscf_encrypted,
    init_vgmstream_s_p_sth,
    init_vgmstream_utf_ahx,
    init_vgmstream_ego_dic,
    init_vgmstream_awd,
    init_vgmstream_rws_809,
    init_vgmstream_pwb,
    init_vgmstream_squeakstream,
    init_vgmstream_squeaksample,
    init_vgmstream_snds,
    init_vgmstream_adm2,
    init_vgmstream_nxof,
    init_vgmstream_gwb_gwd,
    init_vgmstream_s_pack,
    init_vgmstream_cbx,
    init_vgmstream_vas_rockstar,
    init_vgmstream_ea_sbk,
    init_vgmstream_dsp_asura,
    init_vgmstream_dsp_asura_ds2,
    init_vgmstream_dsp_asura_ttss,
    init_vgmstream_dsp_asura_sfx,
    init_vgmstream_adp_ongakukan,
    init_vgmstream_sdd,
    init_vgmstream_ka1a,
    init_vgmstream_hd_bd,
    init_vgmstream_pphd,
    init_vgmstream_xabp,
    init_vgmstream_i3ds,
    init_vgmstream_sdbs,
    init_vgmstream_skex,
    init_vgmstream_axhd,
    init_vgmstream_shaa,
    init_vgmstream_undefind,
    init_vgmstream_oor,
    init_vgmstream_mio,

    /* lower priority metas (no clean header identity, somewhat ambiguous, or need extension/companion file to identify) */
    init_vgmstream_agsc,
    init_vgmstream_scd_pcm,
    init_vgmstream_vas_kceo,
    init_vgmstream_vas_kceo_container,
    init_vgmstream_mib_mih,
    init_vgmstream_mjb_mjh,
    init_vgmstream_mic_koei,
    init_vgmstream_seb,
    init_vgmstream_tgc,
    init_vgmstream_rage_aud,
    init_vgmstream_asd_naxat,
    init_vgmstream_pcm_kceje,
    init_vgmstream_vs_mh,
    init_vgmstream_adpcm_capcom,
    init_vgmstream_ima,
    init_vgmstream_vgv,
    init_vgmstream_iab,
    init_vgmstream_2dx,
    init_vgmstream_ssp,
    init_vgmstream_sfx0_monster,
    init_vgmstream_sfx0_monster_old,
    init_vgmstream_song_monster,
    /* need companion files */
    init_vgmstream_pos,
    init_vgmstream_sli_loops,

    /* lowest priority metas (should go after all metas, and TXTH should go before raw formats) */
    init_vgmstream_txth,            /* proper parsers should supersede TXTH, once added */
    init_vgmstream_dtk,             /* semi-raw GC streamed files */
    init_vgmstream_mpeg,            /* semi-raw MP3 */
    init_vgmstream_btsnd,           /* semi-headerless */
    init_vgmstream_fsb_encrypted,
    init_vgmstream_nus3bank_encrypted,
    init_vgmstream_encrypted,       /* encrypted stuff */
    init_vgmstream_raw_rsf,         /* raw GC streamed files */
    init_vgmstream_raw_int,         /* .int raw PCM */
    init_vgmstream_ps_headerless,   /* tries to detect a bunch of PS-ADPCM formats */
    init_vgmstream_raw_snds,        /* .snds raw SNDS IMA */
    init_vgmstream_raw_wavm,        /* .wavm raw xbox */
    init_vgmstream_raw_pcm,         /* .raw raw PCM */
    init_vgmstream_raw_s14_sss,     /* .s14/sss raw siren14 */
    init_vgmstream_exakt_sc,        /* .sc raw PCM */
    init_vgmstream_zwdsp,           /* fake format */
    init_vgmstream_ps2_adm,         /* weird non-constant PSX blocks */
    init_vgmstream_rwsd,            /* crap, to be removed */
#ifdef VGM_USE_FFMPEG
    init_vgmstream_ffmpeg,          /* may play anything incorrectly, since FFmpeg doesn't check extensions */
#endif
};

#define LOCAL_ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))
static const int init_vgmstream_count = LOCAL_ARRAY_LENGTH(init_vgmstream_functions);


VGMSTREAM* detect_vgmstream_format(STREAMFILE* sf) {
    if (!sf)
        return NULL;

    /* try a series of formats, see which works */
    for (int i = 0; i < init_vgmstream_count; i++) {
        init_vgmstream_t init_vgmstream_function = init_vgmstream_functions[i];
    
        /* call init function and see if valid VGMSTREAM was returned */
        VGMSTREAM* vgmstream = init_vgmstream_function(sf);
        if (!vgmstream)
            continue;

        vgmstream->format_id = i + 1;

        /* validate + setup vgmstream */
        if (!prepare_vgmstream(vgmstream, sf)) {
            /* keep trying if wasn't valid, as simpler formats may return a vgmstream by mistake */
            close_vgmstream(vgmstream);
            continue;
        }

        return vgmstream;
    }

    /* not supported */
    return NULL;
}

init_vgmstream_t get_vgmstream_format_init(int format_id) {
    // ID is expected to be from 1...N, to distinguish from 0 = not set
    if (format_id <= 0 || format_id > init_vgmstream_count)
        return NULL;

    return init_vgmstream_functions[format_id - 1];
}
