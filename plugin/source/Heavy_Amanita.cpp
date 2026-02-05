/**
 * Copyright (c) 2026 Enzien Audio, Ltd.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the phrase "powered by heavy",
 *    the heavy logo, and a hyperlink to https://enzienaudio.com, all in a visible
 *    form.
 * 
 *   2.1 If the Application is distributed in a store system (for example,
 *       the Apple "App Store" or "Google Play"), the phrase "powered by heavy"
 *       shall be included in the app description or the copyright text as well as
 *       the in the app itself. The heavy logo will shall be visible in the app
 *       itself as well.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#include "Heavy_Amanita.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_Amanita *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_Amanita_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Amanita));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Amanita(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_Amanita_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_Amanita));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_Amanita(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_Amanita_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_Amanita();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_Amanita::Heavy_Amanita(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sDel1_init(&sDel1_44Oosibt);
  numBytes += sSamphold_init(&sSamphold_pQpkqIPv);
  numBytes += sLine_init(&sLine_sCn7wwGo);
  numBytes += sLine_init(&sLine_ICTOhtuH);
  numBytes += sLine_init(&sLine_LNI9sKcW);
  numBytes += sLine_init(&sLine_vc7IJI3c);
  numBytes += sLine_init(&sLine_LmnjvETe);
  numBytes += sBiquad_init(&sBiquad_s_9TTsvvpT);
  numBytes += sLine_init(&sLine_7aG7vX0h);
  numBytes += sLine_init(&sLine_CuWdOtce);
  numBytes += sLine_init(&sLine_JBFRYfgn);
  numBytes += sLine_init(&sLine_3PWf0Z0V);
  numBytes += sLine_init(&sLine_ni7lTboZ);
  numBytes += sBiquad_init(&sBiquad_s_aJ1shnrl);
  numBytes += sLine_init(&sLine_lI35CX71);
  numBytes += sLine_init(&sLine_Aa0DHPvl);
  numBytes += sLine_init(&sLine_cFrnWnTx);
  numBytes += sLine_init(&sLine_Wpu6HN3J);
  numBytes += sLine_init(&sLine_LQXG4bYE);
  numBytes += sBiquad_init(&sBiquad_s_czz3Kh8j);
  numBytes += sLine_init(&sLine_f5dBduqC);
  numBytes += sLine_init(&sLine_k5EoDtvA);
  numBytes += sLine_init(&sLine_57u6vY09);
  numBytes += sLine_init(&sLine_DsEmVcah);
  numBytes += sLine_init(&sLine_z1D5ws9u);
  numBytes += sBiquad_init(&sBiquad_s_is1DpPbj);
  numBytes += sLine_init(&sLine_VDzyY5eR);
  numBytes += sLine_init(&sLine_XWbngO9y);
  numBytes += sLine_init(&sLine_YFesRRxe);
  numBytes += sLine_init(&sLine_5H2bhEe5);
  numBytes += sLine_init(&sLine_Ske3tXS3);
  numBytes += sBiquad_init(&sBiquad_s_U0Ieoqah);
  numBytes += sLine_init(&sLine_htxrKQHE);
  numBytes += sLine_init(&sLine_V6GoVAWY);
  numBytes += sLine_init(&sLine_VdIwY6rI);
  numBytes += sLine_init(&sLine_ZcSWcSb3);
  numBytes += sLine_init(&sLine_c9VVLK7g);
  numBytes += sBiquad_init(&sBiquad_s_yQ2eGTHt);
  numBytes += sTabwrite_init(&sTabwrite_Taof386C, &hTable_R0T2qwUb);
  numBytes += sDel1_init(&sDel1_1CJ42huo);
  numBytes += sSamphold_init(&sSamphold_TsY66JXK);
  numBytes += sLine_init(&sLine_k1qvh5nX);
  numBytes += sLine_init(&sLine_7HOhK9jD);
  numBytes += sLine_init(&sLine_75RTNMZK);
  numBytes += sLine_init(&sLine_4njeYdu2);
  numBytes += sLine_init(&sLine_pxdcXsMi);
  numBytes += sBiquad_init(&sBiquad_s_gYRJLuLq);
  numBytes += sLine_init(&sLine_LDRPbkgm);
  numBytes += sLine_init(&sLine_dAg6bNoa);
  numBytes += sLine_init(&sLine_nbfdffe7);
  numBytes += sLine_init(&sLine_lxY20HFe);
  numBytes += sLine_init(&sLine_a77F3dXb);
  numBytes += sBiquad_init(&sBiquad_s_DXoqW9XK);
  numBytes += sLine_init(&sLine_kOn9Jd5e);
  numBytes += sLine_init(&sLine_weSMl0da);
  numBytes += sLine_init(&sLine_buQTGpbL);
  numBytes += sLine_init(&sLine_qrBwj9PX);
  numBytes += sLine_init(&sLine_YMO7oReX);
  numBytes += sBiquad_init(&sBiquad_s_oTQDrDqQ);
  numBytes += sLine_init(&sLine_1s4SIsuo);
  numBytes += sLine_init(&sLine_6xol9E3D);
  numBytes += sLine_init(&sLine_j9Wfp4Jq);
  numBytes += sLine_init(&sLine_JARUuXAX);
  numBytes += sLine_init(&sLine_N0eUP7Kv);
  numBytes += sBiquad_init(&sBiquad_s_BzAmNHNx);
  numBytes += sLine_init(&sLine_9tdj5VC5);
  numBytes += sLine_init(&sLine_Bqws0nol);
  numBytes += sLine_init(&sLine_7vWHiHpj);
  numBytes += sLine_init(&sLine_yV7aGCRQ);
  numBytes += sLine_init(&sLine_MjJMW72Q);
  numBytes += sBiquad_init(&sBiquad_s_cxk0dR9T);
  numBytes += sLine_init(&sLine_TFDosmS4);
  numBytes += sLine_init(&sLine_zlx74e0K);
  numBytes += sLine_init(&sLine_8ExBKhmi);
  numBytes += sLine_init(&sLine_FWudTKIJ);
  numBytes += sLine_init(&sLine_3OZ2vNjZ);
  numBytes += sBiquad_init(&sBiquad_s_xxarhA6q);
  numBytes += sTabwrite_init(&sTabwrite_AcsJGhQk, &hTable_fLXyE6X2);
  numBytes += sLine_init(&sLine_P4oNGvyc);
  numBytes += sPhasor_k_init(&sPhasor_AZzJYvz0, 0.1f, sampleRate);
  numBytes += sSample_init(&sSample_cLQJYAOq);
  numBytes += sLine_init(&sLine_jKwJVTtk);
  numBytes += sTabhead_init(&sTabhead_cBecGB6h, &hTable_fLXyE6X2);
  numBytes += sTabread_init(&sTabread_4JKy3ob3, &hTable_fLXyE6X2, false);
  numBytes += sTabread_init(&sTabread_V3SEgazt, &hTable_fLXyE6X2, false);
  numBytes += sPhasor_k_init(&sPhasor_uQQmbcTj, 0.1f, sampleRate);
  numBytes += sSample_init(&sSample_Hkc8hehr);
  numBytes += sLine_init(&sLine_glrXX9QS);
  numBytes += sLine_init(&sLine_3yqV2aEB);
  numBytes += sTabhead_init(&sTabhead_KnicyihY, &hTable_R0T2qwUb);
  numBytes += sTabread_init(&sTabread_1Z93TM8l, &hTable_R0T2qwUb, false);
  numBytes += sTabread_init(&sTabread_RVWSH3TK, &hTable_R0T2qwUb, false);
  numBytes += sEnv_init(&sEnv_3XvdDwz3, 1024, 512);
  numBytes += sLine_init(&sLine_8SkmuxFW);
  numBytes += sPhasor_init(&sPhasor_taphGNUW, sampleRate);
  numBytes += sPhasor_init(&sPhasor_mFhZN00O, sampleRate);
  numBytes += sRPole_init(&sRPole_hKGk2cT6);
  numBytes += sRPole_init(&sRPole_KlVlSdWP);
  numBytes += sDel1_init(&sDel1_k9YyaNjt);
  numBytes += sLine_init(&sLine_KQ4G5hKg);
  numBytes += sLine_init(&sLine_LnxXdeKH);
  numBytes += sVarf_init(&sVarf_QfZbwEeL, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_74lGyKXZ, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_B8HLvd4m, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_RSgrsEHO, 0.0f);
  numBytes += cVar_init_f(&cVar_wBbDrGfD, 0.0f);
  numBytes += cVar_init_f(&cVar_xg7Y59PZ, 0.0f);
  numBytes += cBinop_init(&cBinop_RewZ5Rzv, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8rAwapeJ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wjjYezjM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_f7o1h8QF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_dlecXDXd, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_7Xftbsqy, 0.0f); // __mul
  numBytes += cIf_init(&cIf_7XmJa4f4, false);
  numBytes += cBinop_init(&cBinop_QAk2ZeWF, 0.0f); // __pow
  numBytes += cBinop_init(&cBinop_i8j8BHsk, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_ph1aMz35, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_1EuycptH, 0.0f);
  numBytes += cVar_init_f(&cVar_JXqf28TT, 0.0f);
  numBytes += cVar_init_f(&cVar_Oz9xefrx, 0.0f);
  numBytes += cBinop_init(&cBinop_JnIrOoPj, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_dl4FLlY4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_dsuF4nP2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_005G9Stx, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_HvhsW2uz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_iFQJfHU2, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_tGWTRVXs, 2500.0f);
  numBytes += cBinop_init(&cBinop_x7SHRUvo, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_8WiuNwbG, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_C3NYtRTj, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_HMgSjnvj, "floatatom");
  numBytes += sVarf_init(&sVarf_onqgPEQj, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_R0rKPhyM, "floatatom");
  numBytes += sVarf_init(&sVarf_yVdcT1bN, 0.0f, 0.0f, false);
  numBytes += cRandom_init(&cRandom_uTYMFk1V, -1076644540);
  numBytes += cSlice_init(&cSlice_bvUobm5V, 1, 1);
  numBytes += sVari_init(&sVari_u0nawTPi, 0, 0, false);
  numBytes += sVarf_init(&sVarf_FlmQY1N1, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_8SSe7HhU, 200.0f);
  numBytes += cBinop_init(&cBinop_KGz1yiEo, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_vhj9yZ8r, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_pjPJ3AKc, 0.0f);
  numBytes += cIf_init(&cIf_1n9eYia1, false);
  numBytes += cVar_init_f(&cVar_xAlGdWW8, 0.0f);
  numBytes += cIf_init(&cIf_JjhH9bh8, false);
  numBytes += cIf_init(&cIf_j0RZxogU, false);
  numBytes += cVar_init_f(&cVar_pNyvNNbn, 0.0f);
  numBytes += cIf_init(&cIf_PIrrJQkf, false);
  numBytes += cVar_init_f(&cVar_NQqDaLFu, 0.0f);
  numBytes += cIf_init(&cIf_qujMuSTb, false);
  numBytes += cIf_init(&cIf_gsiISpIj, false);
  numBytes += cTabread_init(&cTabread_kXDfnDsI, &hTable_zT628TFP); // dottedr
  numBytes += cSlice_init(&cSlice_GVG8lh1W, 1, -1);
  numBytes += cVar_init_s(&cVar_mI6QCUne, "dottedr");
  numBytes += cBinop_init(&cBinop_uTiMcN2p, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_f8VsRTt3, &hTable_3RA32hD1); // straightr
  numBytes += cSlice_init(&cSlice_CnXKgwmi, 1, -1);
  numBytes += cVar_init_s(&cVar_GRmRJueN, "straightr");
  numBytes += cBinop_init(&cBinop_BkVx7p7x, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_IJ9kpu4e, &hTable_0aaO9lok); // straightl
  numBytes += cSlice_init(&cSlice_ELvDsfUK, 1, -1);
  numBytes += cVar_init_s(&cVar_p5RDupzq, "straightl");
  numBytes += cBinop_init(&cBinop_FiWlXO0V, 0.0f); // __min
  numBytes += cTabread_init(&cTabread_qGmHFIXG, &hTable_lKxptWue); // dottedl
  numBytes += cSlice_init(&cSlice_sDTbF4qs, 1, -1);
  numBytes += cVar_init_s(&cVar_vHBG7ekW, "dottedl");
  numBytes += cBinop_init(&cBinop_xGoTuUu8, 0.0f); // __min
  numBytes += sVarf_init(&sVarf_uBiX31xp, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xUuQyr4a, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_eioMluFz, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_1XzJXWBZ, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_B6CXSgov, 0.0f);
  numBytes += cDelay_init(this, &cDelay_IgZkGuTH, 0.0f);
  numBytes += hTable_init(&hTable_R0T2qwUb, 256);
  numBytes += cDelay_init(this, &cDelay_bgdRk3J4, 0.0f);
  numBytes += cDelay_init(this, &cDelay_gR9GP2hj, 0.0f);
  numBytes += hTable_init(&hTable_fLXyE6X2, 256);
  numBytes += cTabwrite_init(&cTabwrite_HK8qDOvY, &hTable_0aaO9lok); // straightl
  numBytes += cSlice_init(&cSlice_MKnCmcRj, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_pjSiPWTR, &hTable_lKxptWue); // dottedl
  numBytes += cSlice_init(&cSlice_9FLFOVZo, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_szFPi80r, &hTable_zT628TFP); // dottedr
  numBytes += cSlice_init(&cSlice_t2nLaZ80, 1, -1);
  numBytes += cTabwrite_init(&cTabwrite_Y2wpYmJK, &hTable_3RA32hD1); // straightr
  numBytes += cSlice_init(&cSlice_YJe745sP, 1, -1);
  numBytes += cIf_init(&cIf_pcjsmmTV, false);
  numBytes += cIf_init(&cIf_8U45NROF, false);
  numBytes += cBinop_init(&cBinop_WW0lRsYZ, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_yXd9LxQA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_AzevzGUi, 0.0f);
  numBytes += cVar_init_f(&cVar_W6DOs2xA, 0.0f);
  numBytes += cVar_init_f(&cVar_Zj8HV2Us, 0.0f);
  numBytes += cBinop_init(&cBinop_bn8PEpaY, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_n9SkOXut, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_55KN7EQR, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_yyuV1KKY, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_kkUxVUYt, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_uPtjrBOV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bfEspd2S, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_tkDTjz9U, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_y3aBSIyA, 0.0f);
  numBytes += cVar_init_f(&cVar_DJOFLLsK, 0.0f);
  numBytes += cVar_init_f(&cVar_EJFs5vj7, 0.0f);
  numBytes += cBinop_init(&cBinop_fWjHbOGB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8aXHlsWi, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_yaEiXqVA, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4I9uHgKn, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_VkLJJWwc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZSQwttP0, 0.0f); // __mul
  numBytes += cSlice_init(&cSlice_qySqcYP9, 1, -1);
  numBytes += cSlice_init(&cSlice_imuVTKQ7, 1, -1);
  numBytes += cVar_init_f(&cVar_nXszRWNy, 0.0f);
  numBytes += cIf_init(&cIf_2sNu5XOL, false);
  numBytes += cBinop_init(&cBinop_bXwveuFM, 0.0f); // __neq
  numBytes += cVar_init_f(&cVar_wn2wpJG6, 0.0f);
  numBytes += cIf_init(&cIf_eledbBeP, false);
  numBytes += cIf_init(&cIf_4MfLNJrP, false);
  numBytes += cIf_init(&cIf_mxodpnmT, false);
  numBytes += cSlice_init(&cSlice_m0tUSvW5, 1, -1);
  numBytes += cSlice_init(&cSlice_Plpv6dg4, 1, -1);
  numBytes += cVar_init_f(&cVar_CVNjmVFE, 0.0f);
  numBytes += cIf_init(&cIf_s7BEGQyM, false);
  numBytes += cBinop_init(&cBinop_GMMrQZ7P, 0.0f); // __neq
  numBytes += cVar_init_f(&cVar_VhT60U7l, 0.0f);
  numBytes += cVar_init_f(&cVar_hBDxkhOL, 0.0f);
  numBytes += cVar_init_f(&cVar_rpDQ6F7r, 0.0f);
  numBytes += cVar_init_f(&cVar_5re73h3O, 0.0f);
  numBytes += cVar_init_s(&cVar_M9i3YA5k, "del-recbuffl");
  numBytes += sVarf_init(&sVarf_dcJdKudb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_HMNYG0kF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5qQUCcqn, 0.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_1lGTtgI6, "del-recbuffr");
  numBytes += sVarf_init(&sVarf_9kFFLcM7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kdlhXrC4, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0nKGuyvc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_emc6lz7h, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_2ki4AZqC, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_Jm6Lu2I4, false);
  numBytes += cIf_init(&cIf_qgEuZVku, false);
  numBytes += cIf_init(&cIf_OsHl4qwB, false);
  numBytes += cIf_init(&cIf_6a3ERt8F, false);
  numBytes += cVar_init_f(&cVar_hGZaytvw, 0.0f);
  numBytes += cVar_init_f(&cVar_mnpkdwx2, 0.0f);
  numBytes += cVar_init_f(&cVar_lRZSmw0e, 0.0f);
  numBytes += cVar_init_f(&cVar_WXgRfl7E, 0.0f);
  numBytes += cVar_init_f(&cVar_UTdPmCbg, 0.0f);
  numBytes += cDelay_init(this, &cDelay_WgCNCcnt, 0.0f);
  numBytes += cVar_init_f(&cVar_aRokHCKU, 1.0f);
  numBytes += cBinop_init(&cBinop_dH4jhVbg, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_0HQunnwa, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_7pSiMGbH, 0.0f);
  numBytes += cVar_init_f(&cVar_iUi1VxCm, 1.0f);
  numBytes += cBinop_init(&cBinop_SdQ98Ix4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Tybm89QP, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_T1tPAa5S, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_nhO2nPQe, 0.0f);
  numBytes += cVar_init_f(&cVar_OXIig0Zw, 0.0f);
  numBytes += cVar_init_f(&cVar_HrfhHtZ8, 0.0f);
  numBytes += cBinop_init(&cBinop_AcBvOwgf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Ef1EFDVy, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_nvPBBBtN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_hExa6EVx, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8Et0KoAf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_WggWFge9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_zqW73ER8, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_JQSOXCma, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_CzPhxRnj, 0.0f);
  numBytes += cVar_init_f(&cVar_ITUJeBKF, 0.0f);
  numBytes += cVar_init_f(&cVar_PsyMVyTm, 0.0f);
  numBytes += cBinop_init(&cBinop_GBUbdToO, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1PJ2peCF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_oADeaXXv, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_2zuyllcD, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gJYRQ4ux, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_o8u2plgh, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_yoirhXMg, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_hCnzaFVI, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_ORoXWqIf, 0.0f);
  numBytes += cVar_init_f(&cVar_zGESBpHi, 0.0f);
  numBytes += cVar_init_f(&cVar_d2TAjDuf, 0.0f);
  numBytes += cBinop_init(&cBinop_2ayhOTGD, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_74y8Fqbo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_dDojWS2k, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4rfgO4pA, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8TqBi1B0, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZcNzlbKY, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_HM1HaXeZ, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_ESfTlTCA, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_78wE3QwG, 0.0f);
  numBytes += cVar_init_f(&cVar_elq2jAMy, 0.0f);
  numBytes += cVar_init_f(&cVar_ehXfnwgP, 0.0f);
  numBytes += cBinop_init(&cBinop_q8dnsLpc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_RdGcp2b0, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PZTsrM77, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_gznRhjpS, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_g8BIep9S, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jvCEuWVg, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_h5jF4hus, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_Fw7bKh6l, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_zyRyIHOC, 0.0f);
  numBytes += cVar_init_f(&cVar_8XjPO2wm, 0.0f);
  numBytes += cVar_init_f(&cVar_oJsHEXBd, 0.0f);
  numBytes += cBinop_init(&cBinop_rCTCAyQt, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_eloj9eSS, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_HNMfxmx9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9mHUyddz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_lrAfLWdn, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_QDHudPbl, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_vjnVeoYT, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_oTVCqy6E, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_rTLTWntW, 0.0f);
  numBytes += cVar_init_f(&cVar_FaEk7Hvo, 0.0f);
  numBytes += cVar_init_f(&cVar_drMr3ygU, 0.0f);
  numBytes += cBinop_init(&cBinop_wd7zxKem, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XYLX0n3u, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_mkftSiJK, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6uQ7ZRw5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ip2NnjKN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_xxKFwFOC, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_hiXXktER, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_BKVP3Qq1, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_ErSgDlfu, 0.0f);
  numBytes += cVar_init_f(&cVar_XsvpF8lA, 0.0f);
  numBytes += cVar_init_f(&cVar_jvGrFkHg, 0.0f);
  numBytes += cBinop_init(&cBinop_XxmsG2Ok, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6a52w6Pm, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_cxRVDCba, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_C7DEYaNv, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_pm1fhmCg, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_C1gPWrnf, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_pFPhPqKV, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_S7KoV9Ta, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_3udqUrUR, 0.0f);
  numBytes += cVar_init_f(&cVar_XpXSGigW, 0.0f);
  numBytes += cVar_init_f(&cVar_GXIerzKx, 0.0f);
  numBytes += cBinop_init(&cBinop_pVP9yrNF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bnSb1tkr, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_prsSk5Z9, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_3uw6e2lX, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_RSpsSAM2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_fWYUPbTI, 0.0f); // __mul
  numBytes += sVarf_init(&sVarf_bUxu90fr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CuKx6Hte, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_C6k2tkIc, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8dQ5hfqD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_n3jyRvK0, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JhGgKkF5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_phjhaAs5, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JpXaIh25, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ATHWBYLi, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MTYIeRyy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GPGprw0j, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ytJue62C, 1.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_rgbYl6ek, 0.0f); // __div
  numBytes += cBinop_init(&cBinop_Vk3D8jrE, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_EjSa4jXE, 1.0f, 0.0f, false);
  numBytes += hTable_init(&hTable_0aaO9lok, 9);
  numBytes += hTable_init(&hTable_3RA32hD1, 9);
  numBytes += hTable_init(&hTable_lKxptWue, 9);
  numBytes += hTable_init(&hTable_zT628TFP, 9);
  numBytes += sVarf_init(&sVarf_IN81twZO, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_DpnTZQVJ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_T0zEzU4H, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_D4fXIbEM, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_82ZpOux6, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_PsCF0hw6, 0.0f);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_Amanita::~Heavy_Amanita() {
  sEnv_free(&sEnv_3XvdDwz3);
  hTable_free(&hTable_R0T2qwUb);
  hTable_free(&hTable_fLXyE6X2);
  hTable_free(&hTable_0aaO9lok);
  hTable_free(&hTable_3RA32hD1);
  hTable_free(&hTable_lKxptWue);
  hTable_free(&hTable_zT628TFP);
}

HvTable *Heavy_Amanita::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x2B426EB5: return &hTable_0aaO9lok; // straightl
    case 0x6CBF759D: return &hTable_3RA32hD1; // straightr
    case 0xB594268B: return &hTable_lKxptWue; // dottedl
    case 0x9D290E61: return &hTable_zT628TFP; // dottedr
    case 0x4281DDEE: return &hTable_R0T2qwUb; // del-recbuffr
    case 0xAE35621F: return &hTable_fLXyE6X2; // del-recbuffl
    default: return nullptr;
  }
}

void Heavy_Amanita::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x6CA32231: { // Bitrate
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_w9TF6WXB_sendMessage);
      break;
    }
    case 0x50848907: { // Del_Left
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RJ4Q6DXo_sendMessage);
      break;
    }
    case 0x6EB8DB6: { // Del_Right
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_mm5Y14SE_sendMessage);
      break;
    }
    case 0x57157946: { // Feedback
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qo0yXjR5_sendMessage);
      break;
    }
    case 0xBCF6D724: { // Feel_Left
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Y5Db9J1n_sendMessage);
      break;
    }
    case 0xB9290266: { // Feel_Right
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_e0Qx3AKL_sendMessage);
      break;
    }
    case 0x31E34622: { // Hipass_Freq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_grajGkR8_sendMessage);
      break;
    }
    case 0x415BC573: { // Hipass_Res
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Qhh2poum_sendMessage);
      break;
    }
    case 0xD5F085A8: { // Lfo_Amount
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_iSTDNOvZ_sendMessage);
      break;
    }
    case 0x268762D2: { // Lfo_Phaze
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IyShKw1q_sendMessage);
      break;
    }
    case 0xCE9CDD82: { // Lfo_Rate
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QMsCKLam_sendMessage);
      break;
    }
    case 0x4123BB7: { // Lowpass_Freq
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_xMb0j1XO_sendMessage);
      break;
    }
    case 0x6A5226EA: { // Lowpass_Res
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KS2bl9cG_sendMessage);
      break;
    }
    case 0x4519E135: { // Mono_Stero_In
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_BDxirPLs_sendMessage);
      break;
    }
    case 0x7B3C1830: { // Noise_Aggro
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aiE1Bh68_sendMessage);
      break;
    }
    case 0x80BB8803: { // Noise_Lvl
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OomGiDn8_sendMessage);
      break;
    }
    case 0x3779CB25: { // Pan
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_thjGRNgY_sendMessage);
      break;
    }
    case 0xCA91F83B: { // Sidechain
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lxZ4QlUc_sendMessage);
      break;
    }
    case 0x821BE185: { // Stereo_PingPong
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZMydx86Z_sendMessage);
      break;
    }
    case 0xB8FDF5C9: { // Sync_Delays
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aD2jSlq1_sendMessage);
      break;
    }
    case 0xAD9B5744: { // Tempo_Sync
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6Q4MM352_sendMessage);
      break;
    }
    case 0xF245D837: { // Wet_Mix
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WOCTtCYd_sendMessage);
      break;
    }
    case 0xBBB046A0: { // 1034-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_31yfbJl0_sendMessage);
      break;
    }
    case 0xDAF079E2: { // 1034-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_CsTjViRt_sendMessage);
      break;
    }
    case 0x47E361A9: { // 1034-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jfpMPBBI_sendMessage);
      break;
    }
    case 0x9DD277E3: { // 1077-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Do1maH8E_sendMessage);
      break;
    }
    case 0x93009500: { // 1077-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KjvNFaM5_sendMessage);
      break;
    }
    case 0x39491575: { // 1077-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_35FFhBxp_sendMessage);
      break;
    }
    case 0x39BDAB5E: { // 1185-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_P4ylzSz7_sendMessage);
      break;
    }
    case 0xA3297E3B: { // 1185-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_msdOqi9B_sendMessage);
      break;
    }
    case 0x87532731: { // 1185-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lFwEJ9Bi_sendMessage);
      break;
    }
    case 0x6EBC57AB: { // 1226-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_BatpQfm2_sendMessage);
      break;
    }
    case 0xBB3635D3: { // 1226-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_K7RqGxIH_sendMessage);
      break;
    }
    case 0xD44C9AE1: { // 1226-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PI73sjLT_sendMessage);
      break;
    }
    case 0xAD0BD484: { // 1349-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lgtUU3KA_sendMessage);
      break;
    }
    case 0x529E566D: { // 1349-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HjEn5eo8_sendMessage);
      break;
    }
    case 0xC555C0B3: { // 1349-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Go5JYiWi_sendMessage);
      break;
    }
    case 0x533ECE08: { // 1390-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zNCC7bGH_sendMessage);
      break;
    }
    case 0x266ADB0B: { // 1390-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8MQkeTC4_sendMessage);
      break;
    }
    case 0xC44BEE20: { // 1390-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OSuLBsdM_sendMessage);
      break;
    }
    case 0x249939A4: { // 1431-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QwvaQ0JJ_sendMessage);
      break;
    }
    case 0x6638D5D0: { // 1431-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6ka01kWp_sendMessage);
      break;
    }
    case 0xD3402766: { // 1431-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Mfpme0Q5_sendMessage);
      break;
    }
    case 0x323DF7A: { // 1472-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Z8lujGCX_sendMessage);
      break;
    }
    case 0xB11C2431: { // 1472-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_e2C0nv9c_sendMessage);
      break;
    }
    case 0x1E193B58: { // 1472-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_4NxPVPAE_sendMessage);
      break;
    }
    case 0xCD376788: { // 1513-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_vf6EaOk8_sendMessage);
      break;
    }
    case 0x880E7AB5: { // 1513-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PBAyjKEM_sendMessage);
      break;
    }
    case 0x337C996C: { // 1513-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_kGqOslmt_sendMessage);
      break;
    }
    case 0xA87C3C7C: { // 1554-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_y7Kc0j30_sendMessage);
      break;
    }
    case 0xC313AE3C: { // 1554-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Qq89R9rT_sendMessage);
      break;
    }
    case 0x24D65857: { // 1554-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_rFiN8s2C_sendMessage);
      break;
    }
    case 0x34B2D9D6: { // 1595-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UV1eQdBU_sendMessage);
      break;
    }
    case 0x9DA49AE8: { // 1595-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZmO8JWjZ_sendMessage);
      break;
    }
    case 0x960B84C0: { // 1595-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1iIutyiy_sendMessage);
      break;
    }
    case 0x2FE38D08: { // 1636-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_UcoQpveB_sendMessage);
      break;
    }
    case 0x3F806DBD: { // 1636-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_L7zR777k_sendMessage);
      break;
    }
    case 0xFD27DFBA: { // 1636-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IQ7vJ75r_sendMessage);
      break;
    }
    case 0xDF8C2721: { // __hv_dpf_bpm
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_2Oj8louf_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_aOQPXmzI_sendMessage);
      break;
    }
    case 0x7BB9803A: { // bpm
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_A9uyobSE_sendMessage);
      break;
    }
    case 0x57C59425: { // delPowLeft
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_s3iG8Fg5_sendMessage);
      break;
    }
    case 0xFAF4A60E: { // delPowRight
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_svCQQ16O_sendMessage);
      break;
    }
    case 0xCF6FF373: { // lMs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LmxngKn6_sendMessage);
      break;
    }
    case 0x4532D6F1: { // lSyncFront
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_n4fML03R_sendMessage);
      break;
    }
    case 0xF124DC0D: { // lock
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TylIqAaO_sendMessage);
      break;
    }
    case 0xD1BEA754: { // rMs
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DaOOK1hm_sendMessage);
      break;
    }
    case 0xCA5149D9: { // rSyncFront
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_QGBh2ino_sendMessage);
      break;
    }
    case 0x40A88D1A: { // straightDottedLeft
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SCekO3X5_sendMessage);
      break;
    }
    case 0xF9F7FF: { // straightDottedRight
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pfxskCAr_sendMessage);
      break;
    }
    case 0x5B8211BA: { // syncL
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_AGb8vbvl_sendMessage);
      break;
    }
    case 0x620C929B: { // syncR
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_zL177BF4_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_Amanita::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "Bitrate";
        info->hash = 0x6CA32231;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2.0f;
        info->defaultVal = 2.0f;
        break;
      }
      case 1: {
        info->name = "Del_Left";
        info->hash = 0x50848907;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 2: {
        info->name = "Del_Right";
        info->hash = 0x6EB8DB6;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 3: {
        info->name = "Feedback";
        info->hash = 0x57157946;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.3f;
        break;
      }
      case 4: {
        info->name = "Feel_Left";
        info->hash = 0xBCF6D724;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 5: {
        info->name = "Feel_Right";
        info->hash = 0xB9290266;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 6: {
        info->name = "Hipass_Freq";
        info->hash = 0x31E34622;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 41.0f;
        info->maxVal = 1200.0f;
        info->defaultVal = 60.0f;
        break;
      }
      case 7: {
        info->name = "Hipass_Res";
        info->hash = 0x415BC573;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.3f;
        break;
      }
      case 8: {
        info->name = "Lfo_Amount";
        info->hash = 0xD5F085A8;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 20.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 9: {
        info->name = "Lfo_Phaze";
        info->hash = 0x268762D2;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = -1.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 10: {
        info->name = "Lfo_Rate";
        info->hash = 0xCE9CDD82;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.001f;
        info->maxVal = 25.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 11: {
        info->name = "Lowpass_Freq";
        info->hash = 0x4123BB7;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 50.0f;
        info->maxVal = 20000.0f;
        info->defaultVal = 5000.0f;
        break;
      }
      case 12: {
        info->name = "Lowpass_Res";
        info->hash = 0x6A5226EA;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.4f;
        break;
      }
      case 13: {
        info->name = "Mono_Stero_In";
        info->hash = 0x4519E135;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 14: {
        info->name = "Noise_Aggro";
        info->hash = 0x7B3C1830;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.3f;
        info->defaultVal = 0.2f;
        break;
      }
      case 15: {
        info->name = "Noise_Lvl";
        info->hash = 0x80BB8803;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.3f;
        break;
      }
      case 16: {
        info->name = "Pan";
        info->hash = 0x3779CB25;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 17: {
        info->name = "Sidechain";
        info->hash = 0xCA91F83B;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 18: {
        info->name = "Stereo_PingPong";
        info->hash = 0x821BE185;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 19: {
        info->name = "Sync_Delays";
        info->hash = 0xB8FDF5C9;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 20: {
        info->name = "Tempo_Sync";
        info->hash = 0xAD9B5744;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 21: {
        info->name = "Wet_Mix";
        info->hash = 0xF245D837;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.3f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 22;
}



/*
 * Send Function Implementations
 */


void Heavy_Amanita::cMsg_i4vK9eIZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_1s4SIsuo, 0, m, NULL);
}

void Heavy_Amanita::cMsg_x1eAUHCX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_6xol9E3D, 0, m, NULL);
}

void Heavy_Amanita::cMsg_L6RQUcbd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_j9Wfp4Jq, 0, m, NULL);
}

void Heavy_Amanita::cMsg_VxB6IxxC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JARUuXAX, 0, m, NULL);
}

void Heavy_Amanita::cMsg_jK25MfRZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_N0eUP7Kv, 0, m, NULL);
}

void Heavy_Amanita::cMsg_achn0gjH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_jvFFEOt2_sendMessage);
}

void Heavy_Amanita::cSystem_jvFFEOt2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_74lGyKXZ, HV_BINOP_DIVIDE, 1, m, &cBinop_74lGyKXZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VHvzQt97_sendMessage);
}

void Heavy_Amanita::cUnop_I3xVxkYb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_GKyZuUpj_sendMessage);
}

void Heavy_Amanita::cMsg_Zt87FYYS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_I3xVxkYb_sendMessage);
}

void Heavy_Amanita::cBinop_GKyZuUpj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_74lGyKXZ, HV_BINOP_DIVIDE, 0, m, &cBinop_74lGyKXZ_sendMessage);
}

void Heavy_Amanita::cCast_VHvzQt97_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Zt87FYYS_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_74lGyKXZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_B8HLvd4m, HV_BINOP_MULTIPLY, 1, m, &cBinop_B8HLvd4m_sendMessage);
}

void Heavy_Amanita::cBinop_B8HLvd4m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8yJouUGU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M2z0jjUJ_sendMessage);
}

void Heavy_Amanita::cUnop_Wbwvxt7f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_uOW8crEQ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_7cwaimnQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_hCd6XT0C_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_y20LDpfw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_F8phMPxm_sendMessage);
}

void Heavy_Amanita::cBinop_F8phMPxm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_B8HLvd4m, HV_BINOP_MULTIPLY, 0, m, &cBinop_B8HLvd4m_sendMessage);
}

void Heavy_Amanita::cBinop_cTumiR5H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_0QM4RvQL_sendMessage);
}

void Heavy_Amanita::cBinop_0QM4RvQL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2H4JTyaE_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_07jQXBGT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RSgrsEHO, 1, m, &cVar_RSgrsEHO_sendMessage);
}

void Heavy_Amanita::cVar_RSgrsEHO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_o6UaR0Ff_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_S0Q5L1Uh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8rAwapeJ, HV_BINOP_MULTIPLY, 1, m, &cBinop_8rAwapeJ_sendMessage);
}

void Heavy_Amanita::cBinop_1eZYen7B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_S0Q5L1Uh_sendMessage);
}

void Heavy_Amanita::cBinop_fBuuBUW1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_GRY61uNg_sendMessage);
}

void Heavy_Amanita::cBinop_GRY61uNg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wjjYezjM, HV_BINOP_MULTIPLY, 1, m, &cBinop_wjjYezjM_sendMessage);
}

void Heavy_Amanita::cBinop_56ezpKVP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f7o1h8QF, HV_BINOP_MULTIPLY, 1, m, &cBinop_f7o1h8QF_sendMessage);
}

void Heavy_Amanita::cBinop_8FjkudNK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_56ezpKVP_sendMessage);
}

void Heavy_Amanita::cBinop_xc33Exli_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dlecXDXd, HV_BINOP_MULTIPLY, 1, m, &cBinop_dlecXDXd_sendMessage);
}

void Heavy_Amanita::cMsg_yxmcss4Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_z63L7cBm_sendMessage);
}

void Heavy_Amanita::cBinop_z63L7cBm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7Xftbsqy, HV_BINOP_MULTIPLY, 1, m, &cBinop_7Xftbsqy_sendMessage);
}

void Heavy_Amanita::cVar_wBbDrGfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AWDBSdLZ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_y20LDpfw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1jWGziEJ_sendMessage);
}

void Heavy_Amanita::cVar_xg7Y59PZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_cTumiR5H_sendMessage);
}

void Heavy_Amanita::cCast_M2z0jjUJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_7cwaimnQ_sendMessage);
}

void Heavy_Amanita::cCast_8yJouUGU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_Wbwvxt7f_sendMessage);
}

void Heavy_Amanita::cSend_uOW8crEQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jfpMPBBI_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_hCd6XT0C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_CsTjViRt_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_t3JJEj0O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_31yfbJl0_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_2H4JTyaE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_PqVeKAPN_sendMessage);
}

void Heavy_Amanita::cBinop_PqVeKAPN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RewZ5Rzv, HV_BINOP_MULTIPLY, 1, m, &cBinop_RewZ5Rzv_sendMessage);
}

void Heavy_Amanita::cBinop_RewZ5Rzv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_mRSXdZm3_sendMessage);
}

void Heavy_Amanita::cBinop_mRSXdZm3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_t3JJEj0O_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_o6UaR0Ff_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_zVAV0qJK_sendMessage);
}

void Heavy_Amanita::cBinop_zVAV0qJK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2NfeLA26_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HJJk5cpT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Axbuoeqo_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_i0PAAzaF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2tPHUXqR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_97ZfuMFN_sendMessage);
}

void Heavy_Amanita::cBinop_8rAwapeJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_i4vK9eIZ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_wjjYezjM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_x1eAUHCX_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_f7o1h8QF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_L6RQUcbd_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_dlecXDXd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VxB6IxxC_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_7Xftbsqy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jK25MfRZ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_Xm1Te8dV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xg7Y59PZ, 1, m, &cVar_xg7Y59PZ_sendMessage);
}

void Heavy_Amanita::cCast_azSojtRD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wBbDrGfD, 0, m, &cVar_wBbDrGfD_sendMessage);
}

void Heavy_Amanita::cCast_97ZfuMFN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8rAwapeJ, HV_BINOP_MULTIPLY, 0, m, &cBinop_8rAwapeJ_sendMessage);
}

void Heavy_Amanita::cCast_2NfeLA26_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_Axbuoeqo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dlecXDXd, HV_BINOP_MULTIPLY, 0, m, &cBinop_dlecXDXd_sendMessage);
}

void Heavy_Amanita::cCast_2tPHUXqR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wjjYezjM, HV_BINOP_MULTIPLY, 0, m, &cBinop_wjjYezjM_sendMessage);
}

void Heavy_Amanita::cCast_HJJk5cpT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_7Xftbsqy, HV_BINOP_MULTIPLY, 0, m, &cBinop_7Xftbsqy_sendMessage);
}

void Heavy_Amanita::cCast_i0PAAzaF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_f7o1h8QF, HV_BINOP_MULTIPLY, 0, m, &cBinop_f7o1h8QF_sendMessage);
}

void Heavy_Amanita::cCast_AWDBSdLZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xg7Y59PZ, 0, m, &cVar_xg7Y59PZ_sendMessage);
}

void Heavy_Amanita::cCast_1jWGziEJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RSgrsEHO, 0, m, &cVar_RSgrsEHO_sendMessage);
}

void Heavy_Amanita::cIf_7XmJa4f4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cMsg_oDbxfRBK_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 485.0f, 0, m, &cBinop_te2dFgec_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cMsg_mMbkW7BQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_QAk2ZeWF, HV_BINOP_POW, 0, m, &cBinop_QAk2ZeWF_sendMessage);
}

void Heavy_Amanita::cBinop_QAk2ZeWF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_82ZpOux6, m);
}

void Heavy_Amanita::cBinop_kiNM2jUj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 20.0f, 0, m, &cBinop_irSAbhuk_sendMessage);
}

void Heavy_Amanita::cCast_iweGuOm9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_7XmJa4f4, 0, m, &cIf_7XmJa4f4_sendMessage);
}

void Heavy_Amanita::cCast_FgFDyuql_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_2lVMrrwl_sendMessage);
}

void Heavy_Amanita::cBinop_2lVMrrwl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_7XmJa4f4, 1, m, &cIf_7XmJa4f4_sendMessage);
}

void Heavy_Amanita::cBinop_te2dFgec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 100.0f, 0, m, &cBinop_kiNM2jUj_sendMessage);
}

void Heavy_Amanita::cMsg_oDbxfRBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_82ZpOux6, m);
}

void Heavy_Amanita::cBinop_irSAbhuk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QAk2ZeWF, HV_BINOP_POW, 1, m, &cBinop_QAk2ZeWF_sendMessage);
  cMsg_mMbkW7BQ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_TT3NxLW2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_VDzyY5eR, 0, m, NULL);
}

void Heavy_Amanita::cMsg_BMa1iBOf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_XWbngO9y, 0, m, NULL);
}

void Heavy_Amanita::cMsg_5EKvnyEl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_YFesRRxe, 0, m, NULL);
}

void Heavy_Amanita::cMsg_mV1VLkqz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_5H2bhEe5, 0, m, NULL);
}

void Heavy_Amanita::cMsg_IznsNEBz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Ske3tXS3, 0, m, NULL);
}

void Heavy_Amanita::cMsg_Mx8gnXRW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_4Mp91BT8_sendMessage);
}

void Heavy_Amanita::cSystem_4Mp91BT8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i8j8BHsk, HV_BINOP_DIVIDE, 1, m, &cBinop_i8j8BHsk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Jyi2KYSB_sendMessage);
}

void Heavy_Amanita::cUnop_p6ZVejfR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_SlGKzziX_sendMessage);
}

void Heavy_Amanita::cMsg_4hZ7UyWx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_p6ZVejfR_sendMessage);
}

void Heavy_Amanita::cBinop_SlGKzziX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_i8j8BHsk, HV_BINOP_DIVIDE, 0, m, &cBinop_i8j8BHsk_sendMessage);
}

void Heavy_Amanita::cCast_Jyi2KYSB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4hZ7UyWx_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_i8j8BHsk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ph1aMz35, HV_BINOP_MULTIPLY, 1, m, &cBinop_ph1aMz35_sendMessage);
}

void Heavy_Amanita::cBinop_ph1aMz35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_g8goYPpn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_T8mjTv5z_sendMessage);
}

void Heavy_Amanita::cUnop_JElFRBqM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_YSOd685B_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_MMzc6xLx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_vOPS6KdG_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_PsHfzYf9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_uQMzftr0_sendMessage);
}

void Heavy_Amanita::cBinop_uQMzftr0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ph1aMz35, HV_BINOP_MULTIPLY, 0, m, &cBinop_ph1aMz35_sendMessage);
}

void Heavy_Amanita::cBinop_G8Hi6F5W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_NTbahBCw_sendMessage);
}

void Heavy_Amanita::cBinop_NTbahBCw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QSTLuZiZ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_mTPMFkld_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1EuycptH, 1, m, &cVar_1EuycptH_sendMessage);
}

void Heavy_Amanita::cVar_1EuycptH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ayHMX05Y_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_sInrXseC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dl4FLlY4, HV_BINOP_MULTIPLY, 1, m, &cBinop_dl4FLlY4_sendMessage);
}

void Heavy_Amanita::cBinop_Oc3DC8jE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_sInrXseC_sendMessage);
}

void Heavy_Amanita::cBinop_4BwJPVA5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_BmjLKDyL_sendMessage);
}

void Heavy_Amanita::cBinop_BmjLKDyL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dsuF4nP2, HV_BINOP_MULTIPLY, 1, m, &cBinop_dsuF4nP2_sendMessage);
}

void Heavy_Amanita::cBinop_44TT6uBU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_005G9Stx, HV_BINOP_MULTIPLY, 1, m, &cBinop_005G9Stx_sendMessage);
}

void Heavy_Amanita::cBinop_ALZIVxDK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_44TT6uBU_sendMessage);
}

void Heavy_Amanita::cBinop_cg8MMEkC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HvhsW2uz, HV_BINOP_MULTIPLY, 1, m, &cBinop_HvhsW2uz_sendMessage);
}

void Heavy_Amanita::cMsg_izfWHeiw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_X8WgDHwc_sendMessage);
}

void Heavy_Amanita::cBinop_X8WgDHwc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iFQJfHU2, HV_BINOP_MULTIPLY, 1, m, &cBinop_iFQJfHU2_sendMessage);
}

void Heavy_Amanita::cVar_JXqf28TT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VYg5Onz2_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_PsHfzYf9_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UtIFKCcp_sendMessage);
}

void Heavy_Amanita::cVar_Oz9xefrx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_G8Hi6F5W_sendMessage);
}

void Heavy_Amanita::cCast_g8goYPpn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_JElFRBqM_sendMessage);
}

void Heavy_Amanita::cCast_T8mjTv5z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_MMzc6xLx_sendMessage);
}

void Heavy_Amanita::cSend_YSOd685B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_35FFhBxp_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_vOPS6KdG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_KjvNFaM5_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_ZTStLvac_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Do1maH8E_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_QSTLuZiZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_zi8ukKPg_sendMessage);
}

void Heavy_Amanita::cBinop_zi8ukKPg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JnIrOoPj, HV_BINOP_MULTIPLY, 1, m, &cBinop_JnIrOoPj_sendMessage);
}

void Heavy_Amanita::cBinop_JnIrOoPj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_jg2T1k26_sendMessage);
}

void Heavy_Amanita::cBinop_jg2T1k26_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ZTStLvac_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_ayHMX05Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_3pZJ5Jrv_sendMessage);
}

void Heavy_Amanita::cBinop_3pZJ5Jrv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5jO273MZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CJ3cVucX_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_axjgzgcS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p5rh9cH6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rLwPyjp0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sRanKFGK_sendMessage);
}

void Heavy_Amanita::cBinop_dl4FLlY4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TT3NxLW2_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_dsuF4nP2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BMa1iBOf_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_005G9Stx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5EKvnyEl_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_HvhsW2uz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mV1VLkqz_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_iFQJfHU2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_IznsNEBz_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_Ygd6rPqg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JXqf28TT, 0, m, &cVar_JXqf28TT_sendMessage);
}

void Heavy_Amanita::cCast_xt5MILTq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Oz9xefrx, 1, m, &cVar_Oz9xefrx_sendMessage);
}

void Heavy_Amanita::cCast_axjgzgcS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HvhsW2uz, HV_BINOP_MULTIPLY, 0, m, &cBinop_HvhsW2uz_sendMessage);
}

void Heavy_Amanita::cCast_CJ3cVucX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iFQJfHU2, HV_BINOP_MULTIPLY, 0, m, &cBinop_iFQJfHU2_sendMessage);
}

void Heavy_Amanita::cCast_5jO273MZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_rLwPyjp0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dsuF4nP2, HV_BINOP_MULTIPLY, 0, m, &cBinop_dsuF4nP2_sendMessage);
}

void Heavy_Amanita::cCast_p5rh9cH6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_005G9Stx, HV_BINOP_MULTIPLY, 0, m, &cBinop_005G9Stx_sendMessage);
}

void Heavy_Amanita::cCast_sRanKFGK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dl4FLlY4, HV_BINOP_MULTIPLY, 0, m, &cBinop_dl4FLlY4_sendMessage);
}

void Heavy_Amanita::cCast_UtIFKCcp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1EuycptH, 0, m, &cVar_1EuycptH_sendMessage);
}

void Heavy_Amanita::cCast_VYg5Onz2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Oz9xefrx, 0, m, &cVar_Oz9xefrx_sendMessage);
}

void Heavy_Amanita::cVar_tGWTRVXs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_x7SHRUvo, HV_BINOP_MULTIPLY, 0, m, &cBinop_x7SHRUvo_sendMessage);
}

void Heavy_Amanita::cMsg_NMHotu6U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vijxzHuJ_sendMessage);
}

void Heavy_Amanita::cSystem_vijxzHuJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ukqy0pNK_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_x7SHRUvo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_VoU0T4Qx_sendMessage);
}

void Heavy_Amanita::cBinop_JUZjPZ9o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_x7SHRUvo, HV_BINOP_MULTIPLY, 1, m, &cBinop_x7SHRUvo_sendMessage);
}

void Heavy_Amanita::cMsg_Ukqy0pNK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.28319f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_JUZjPZ9o_sendMessage);
}

void Heavy_Amanita::cBinop_VoU0T4Qx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_tVD1D2EK_sendMessage);
}

void Heavy_Amanita::cBinop_tVD1D2EK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_OljFaKhM_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_C3NYtRTj, m);
}

void Heavy_Amanita::cBinop_OljFaKhM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8WiuNwbG, m);
}

void Heavy_Amanita::cVar_HMgSjnvj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_onqgPEQj, m);
}

void Heavy_Amanita::cVar_R0rKPhyM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yVdcT1bN, m);
}

void Heavy_Amanita::cSwitchcase_YC1bFw3s_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bvUobm5V, 0, m, &cSlice_bvUobm5V_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_uTYMFk1V, 0, m, &cRandom_uTYMFk1V_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cBinop_jWmW7bYE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_Z28kt3cM_sendMessage);
}

void Heavy_Amanita::cUnop_Z28kt3cM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tTtnSsBx_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cRandom_uTYMFk1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8388610.0f, 0, m, &cBinop_jWmW7bYE_sendMessage);
}

void Heavy_Amanita::cSlice_bvUobm5V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_uTYMFk1V, 1, m, &cRandom_uTYMFk1V_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cMsg_tTtnSsBx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 1.0f);
  sVari_onMessage(_c, &Context(_c)->sVari_u0nawTPi, m);
}

void Heavy_Amanita::cBinop_qYOvNbNo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_Gso5cmzX_sendMessage);
}

void Heavy_Amanita::cBinop_Gso5cmzX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_JkhmmHA3_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_CuqpwLkd_sendMessage);
}

void Heavy_Amanita::cVar_8SSe7HhU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_a1WiD54G_sendMessage);
}

void Heavy_Amanita::cMsg_IIxsofzT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_oxN0hH33_sendMessage);
}

void Heavy_Amanita::cSystem_oxN0hH33_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KGz1yiEo, HV_BINOP_DIVIDE, 1, m, &cBinop_KGz1yiEo_sendMessage);
}

void Heavy_Amanita::cBinop_JkhmmHA3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_qB8QedaI_sendMessage);
}

void Heavy_Amanita::cBinop_qB8QedaI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vhj9yZ8r, m);
}

void Heavy_Amanita::cMsg_HeVX2I4k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_fmc9zzAn_sendMessage);
}

void Heavy_Amanita::cBinop_fmc9zzAn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_qYOvNbNo_sendMessage);
}

void Heavy_Amanita::cBinop_CuqpwLkd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_FlmQY1N1, m);
}

void Heavy_Amanita::cBinop_a1WiD54G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_TOhXYgR4_sendMessage);
}

void Heavy_Amanita::cBinop_TOhXYgR4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_KGz1yiEo, HV_BINOP_DIVIDE, 0, m, &cBinop_KGz1yiEo_sendMessage);
}

void Heavy_Amanita::cBinop_KGz1yiEo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HeVX2I4k_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_pjPJ3AKc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_L5578JP8_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_1n9eYia1, 0, m, &cIf_1n9eYia1_sendMessage);
}

void Heavy_Amanita::cUnop_SSrldT0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_iGV1grWh_onMessage(_c, NULL, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_WXgRfl7E, 0, m, &cVar_WXgRfl7E_sendMessage);
  cSwitchcase_TeigDH4j_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cUnop_fUlmOeyX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_iGV1grWh_onMessage(_c, NULL, 0, m, NULL);
  cVar_onMessage(_c, &Context(_c)->cVar_WXgRfl7E, 0, m, &cVar_WXgRfl7E_sendMessage);
  cSwitchcase_TeigDH4j_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cIf_1n9eYia1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_fUlmOeyX_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_SSrldT0N_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cBinop_L5578JP8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_1n9eYia1, 1, m, &cIf_1n9eYia1_sendMessage);
}

void Heavy_Amanita::cVar_xAlGdWW8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kkhRTxT8_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cIf_JjhH9bh8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eXnXoBrb_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6KUyaOqk_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cSwitchcase_W9k8Cr6z_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YifZ7h96_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eVROafwF_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Amanita::cCast_YifZ7h96_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YXsAy00L_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_eVROafwF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Pn6koOBA_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cIf_j0RZxogU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eXnXoBrb_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6KUyaOqk_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cVar_pNyvNNbn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_trUjIiiA_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_PIrrJQkf, 0, m, &cIf_PIrrJQkf_sendMessage);
}

void Heavy_Amanita::cUnop_02nr7ifx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UTdPmCbg, 0, m, &cVar_UTdPmCbg_sendMessage);
}

void Heavy_Amanita::cUnop_2hLC7Wsi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UTdPmCbg, 0, m, &cVar_UTdPmCbg_sendMessage);
}

void Heavy_Amanita::cIf_PIrrJQkf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_2hLC7Wsi_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_02nr7ifx_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cBinop_trUjIiiA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_PIrrJQkf, 1, m, &cIf_PIrrJQkf_sendMessage);
}

void Heavy_Amanita::cVar_NQqDaLFu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hGZaytvw, 1, m, &cVar_hGZaytvw_sendMessage);
  cSend_LsbyP52R_sendMessage(_c, 0, m);
  cIf_onMessage(_c, &Context(_c)->cIf_OsHl4qwB, 0, m, &cIf_OsHl4qwB_sendMessage);
}

void Heavy_Amanita::cIf_qujMuSTb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w0lB3dSW_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_672by7bN_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cSwitchcase_uehUip2g_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Zih0tlt8_sendMessage);
      break;
    }
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CA8P8nTu_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Amanita::cCast_Zih0tlt8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tDdDD4UQ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_CA8P8nTu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_96dl8e4b_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cIf_gsiISpIj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w0lB3dSW_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_672by7bN_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cTabread_kXDfnDsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_JjhH9bh8, 0, m, &cIf_JjhH9bh8_sendMessage);
}

void Heavy_Amanita::cSwitchcase_TeigDH4j_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_GVG8lh1W, 0, m, &cSlice_GVG8lh1W_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IOqYS4Jd_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MG52rJ6E_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_GVG8lh1W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_kXDfnDsI, 1, m, &cTabread_kXDfnDsI_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_kXDfnDsI, 1, m, &cTabread_kXDfnDsI_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cVar_mI6QCUne_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_sPK4zy8Q_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSystem_wdMAfuvI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_d36qcNxR_sendMessage);
}

void Heavy_Amanita::cBinop_5QU0Pfuv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uTiMcN2p, HV_BINOP_MIN, 0, m, &cBinop_uTiMcN2p_sendMessage);
}

void Heavy_Amanita::cCast_IOqYS4Jd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mI6QCUne, 0, m, &cVar_mI6QCUne_sendMessage);
}

void Heavy_Amanita::cCast_MG52rJ6E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_5QU0Pfuv_sendMessage);
}

void Heavy_Amanita::cBinop_uTiMcN2p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_kXDfnDsI, 0, m, &cTabread_kXDfnDsI_sendMessage);
}

void Heavy_Amanita::cMsg_sPK4zy8Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_wdMAfuvI_sendMessage);
}

void Heavy_Amanita::cBinop_d36qcNxR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uTiMcN2p, HV_BINOP_MIN, 1, m, &cBinop_uTiMcN2p_sendMessage);
}

void Heavy_Amanita::cTabread_f8VsRTt3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_j0RZxogU, 0, m, &cIf_j0RZxogU_sendMessage);
}

void Heavy_Amanita::cSwitchcase_iGV1grWh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_CnXKgwmi, 0, m, &cSlice_CnXKgwmi_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4wF8VLR8_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_V1pirsp5_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_CnXKgwmi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_f8VsRTt3, 1, m, &cTabread_f8VsRTt3_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_f8VsRTt3, 1, m, &cTabread_f8VsRTt3_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cVar_GRmRJueN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Md2GWfnu_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSystem_SIML8RC5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_WY9lkFoU_sendMessage);
}

void Heavy_Amanita::cBinop_W24i1uuY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BkVx7p7x, HV_BINOP_MIN, 0, m, &cBinop_BkVx7p7x_sendMessage);
}

void Heavy_Amanita::cCast_V1pirsp5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_W24i1uuY_sendMessage);
}

void Heavy_Amanita::cCast_4wF8VLR8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GRmRJueN, 0, m, &cVar_GRmRJueN_sendMessage);
}

void Heavy_Amanita::cBinop_BkVx7p7x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_f8VsRTt3, 0, m, &cTabread_f8VsRTt3_sendMessage);
}

void Heavy_Amanita::cMsg_Md2GWfnu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SIML8RC5_sendMessage);
}

void Heavy_Amanita::cBinop_WY9lkFoU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BkVx7p7x, HV_BINOP_MIN, 1, m, &cBinop_BkVx7p7x_sendMessage);
}

void Heavy_Amanita::cTabread_IJ9kpu4e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_gsiISpIj, 0, m, &cIf_gsiISpIj_sendMessage);
}

void Heavy_Amanita::cSwitchcase_X4YPs4JC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ELvDsfUK, 0, m, &cSlice_ELvDsfUK_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YUknyHWR_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wwrG8uOZ_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_ELvDsfUK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_IJ9kpu4e, 1, m, &cTabread_IJ9kpu4e_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_IJ9kpu4e, 1, m, &cTabread_IJ9kpu4e_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cVar_p5RDupzq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_EUaTaEHc_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSystem_Tby7n5Ws_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_gg6rdeDu_sendMessage);
}

void Heavy_Amanita::cBinop_FGURdjvN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FiWlXO0V, HV_BINOP_MIN, 0, m, &cBinop_FiWlXO0V_sendMessage);
}

void Heavy_Amanita::cCast_wwrG8uOZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_FGURdjvN_sendMessage);
}

void Heavy_Amanita::cCast_YUknyHWR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_p5RDupzq, 0, m, &cVar_p5RDupzq_sendMessage);
}

void Heavy_Amanita::cBinop_FiWlXO0V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_IJ9kpu4e, 0, m, &cTabread_IJ9kpu4e_sendMessage);
}

void Heavy_Amanita::cMsg_EUaTaEHc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Tby7n5Ws_sendMessage);
}

void Heavy_Amanita::cBinop_gg6rdeDu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FiWlXO0V, HV_BINOP_MIN, 1, m, &cBinop_FiWlXO0V_sendMessage);
}

void Heavy_Amanita::cTabread_qGmHFIXG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qujMuSTb, 0, m, &cIf_qujMuSTb_sendMessage);
}

void Heavy_Amanita::cSwitchcase_hEpDVZIl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_sDTbF4qs, 0, m, &cSlice_sDTbF4qs_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xujpJUni_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jXTVWnSt_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_sDTbF4qs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_qGmHFIXG, 1, m, &cTabread_qGmHFIXG_sendMessage);
      break;
    }
    case 1: {
      cTabread_onMessage(_c, &Context(_c)->cTabread_qGmHFIXG, 1, m, &cTabread_qGmHFIXG_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cVar_vHBG7ekW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_foXxOxVb_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSystem_mhc91DGR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_DNJNTzwF_sendMessage);
}

void Heavy_Amanita::cBinop_xADS8hjC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xGoTuUu8, HV_BINOP_MIN, 0, m, &cBinop_xGoTuUu8_sendMessage);
}

void Heavy_Amanita::cCast_jXTVWnSt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_xADS8hjC_sendMessage);
}

void Heavy_Amanita::cCast_xujpJUni_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vHBG7ekW, 0, m, &cVar_vHBG7ekW_sendMessage);
}

void Heavy_Amanita::cBinop_xGoTuUu8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cTabread_onMessage(_c, &Context(_c)->cTabread_qGmHFIXG, 0, m, &cTabread_qGmHFIXG_sendMessage);
}

void Heavy_Amanita::cMsg_foXxOxVb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "length");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mhc91DGR_sendMessage);
}

void Heavy_Amanita::cBinop_DNJNTzwF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xGoTuUu8, HV_BINOP_MIN, 1, m, &cBinop_xGoTuUu8_sendMessage);
}

void Heavy_Amanita::cBinop_Z1PdbpSA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 12.0f, 0, m, &cBinop_6U6C4uN8_sendMessage);
}

void Heavy_Amanita::cBinop_6U6C4uN8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_9zJspgeh_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_hGQOmSvX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 12.0f, 0, m, &cBinop_FAdBegPZ_sendMessage);
}

void Heavy_Amanita::cBinop_FAdBegPZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_5p8LqChe_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_BXn54JXH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LlcPwH6L_sendMessage);
}

void Heavy_Amanita::cSystem_LlcPwH6L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_1EIV0MtD_sendMessage);
}

void Heavy_Amanita::cDelay_B6CXSgov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_B6CXSgov, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_IgZkGuTH, 0, m, &cDelay_IgZkGuTH_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_B6CXSgov, 0, m, &cDelay_B6CXSgov_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Taof386C, 1, m, NULL);
}

void Heavy_Amanita::cDelay_IgZkGuTH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_IgZkGuTH, m);
  cMsg_ZUU4CZoH_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSwitchcase_1xH4Dnhg_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_VRhntD8x_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Amanita::cBinop_o99NzMsy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Wt7YPtlA_sendMessage(_c, 0, m);
}

void Heavy_Amanita::hTable_R0T2qwUb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_a1X4waAP_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_B6CXSgov, 2, m, &cDelay_B6CXSgov_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PUmDtA4g_sendMessage);
}

void Heavy_Amanita::cMsg_Wt7YPtlA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_R0T2qwUb, 0, m, &hTable_R0T2qwUb_sendMessage);
}

void Heavy_Amanita::cBinop_1EIV0MtD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 10000.0f, 0, m, &cBinop_o99NzMsy_sendMessage);
}

void Heavy_Amanita::cMsg_ZUU4CZoH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_R0T2qwUb, 0, m, &hTable_R0T2qwUb_sendMessage);
}

void Heavy_Amanita::cCast_PUmDtA4g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_B6CXSgov, 0, m, &cDelay_B6CXSgov_sendMessage);
}

void Heavy_Amanita::cMsg_a1X4waAP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_IgZkGuTH, 2, m, &cDelay_IgZkGuTH_sendMessage);
}

void Heavy_Amanita::cMsg_VRhntD8x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_Taof386C, 1, m, NULL);
}

void Heavy_Amanita::cMsg_m0G69kd4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vrzt4S0d_sendMessage);
}

void Heavy_Amanita::cSystem_vrzt4S0d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_svL7ZicX_sendMessage);
}

void Heavy_Amanita::cDelay_bgdRk3J4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_bgdRk3J4, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_gR9GP2hj, 0, m, &cDelay_gR9GP2hj_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_bgdRk3J4, 0, m, &cDelay_bgdRk3J4_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_AcsJGhQk, 1, m, NULL);
}

void Heavy_Amanita::cDelay_gR9GP2hj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_gR9GP2hj, m);
  cMsg_8kR1wPOJ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSwitchcase_Ane2lWaR_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x47BE8354: { // "clear"
      cMsg_QDzZQd8D_sendMessage(_c, 0, m);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Amanita::cBinop_yoTrqHhx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WBaW9ILc_sendMessage(_c, 0, m);
}

void Heavy_Amanita::hTable_fLXyE6X2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oONduge8_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_bgdRk3J4, 2, m, &cDelay_bgdRk3J4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FktJ5IU8_sendMessage);
}

void Heavy_Amanita::cMsg_WBaW9ILc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_fLXyE6X2, 0, m, &hTable_fLXyE6X2_sendMessage);
}

void Heavy_Amanita::cBinop_svL7ZicX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 10000.0f, 0, m, &cBinop_yoTrqHhx_sendMessage);
}

void Heavy_Amanita::cMsg_8kR1wPOJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_fLXyE6X2, 0, m, &hTable_fLXyE6X2_sendMessage);
}

void Heavy_Amanita::cCast_FktJ5IU8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_bgdRk3J4, 0, m, &cDelay_bgdRk3J4_sendMessage);
}

void Heavy_Amanita::cMsg_oONduge8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_gR9GP2hj, 2, m, &cDelay_gR9GP2hj_sendMessage);
}

void Heavy_Amanita::cMsg_QDzZQd8D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_AcsJGhQk, 1, m, NULL);
}

void Heavy_Amanita::cCast_UpilloUV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cKNFyGxq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_gAxbMalv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_emcpTqi5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1kx8gzpL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6RfmS22H_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_O8fFO6ZP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ctIlRSUm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B5i95j23_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NBuNmOjw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aG1FA7fu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PdOBt8n4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pBz3WxMw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JTGjA7oS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rBpm0LWs_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CoDJkd31_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_CcqKs2en_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PyPb7wrn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GavdTrJG_sendMessage);
}

void Heavy_Amanita::cTabwrite_HK8qDOvY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cSwitchcase_p9WH7d2b_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_MKnCmcRj, 0, m, &cSlice_MKnCmcRj_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 0, m, &cTabwrite_HK8qDOvY_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_MKnCmcRj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 2, m, &cTabwrite_HK8qDOvY_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 2, m, &cTabwrite_HK8qDOvY_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cTabwrite_pjSiPWTR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cSwitchcase_JH42YvgL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_9FLFOVZo, 0, m, &cSlice_9FLFOVZo_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 0, m, &cTabwrite_pjSiPWTR_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_9FLFOVZo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 2, m, &cTabwrite_pjSiPWTR_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 2, m, &cTabwrite_pjSiPWTR_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cTabwrite_szFPi80r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cSwitchcase_GDmq9S4d_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_t2nLaZ80, 0, m, &cSlice_t2nLaZ80_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 0, m, &cTabwrite_szFPi80r_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_t2nLaZ80_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 2, m, &cTabwrite_szFPi80r_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 2, m, &cTabwrite_szFPi80r_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cTabwrite_Y2wpYmJK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cSwitchcase_HuvpyltN_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_YJe745sP, 0, m, &cSlice_YJe745sP_sendMessage);
      break;
    }
    default: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 0, m, &cTabwrite_Y2wpYmJK_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_YJe745sP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 2, m, &cTabwrite_Y2wpYmJK_sendMessage);
      break;
    }
    case 1: {
      cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 2, m, &cTabwrite_Y2wpYmJK_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cSwitchcase_mRsSDDLP_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SuxQPMb5_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Zd7Pc24E_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_esva8rYU_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Amanita::cCast_SuxQPMb5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_aUHPEl1B_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_Zd7Pc24E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RlQBBopO_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_esva8rYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UCa4ug8B_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cIf_pcjsmmTV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      sLine_onMessage(_c, &Context(_c)->sLine_3yqV2aEB, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cIf_8U45NROF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      sLine_onMessage(_c, &Context(_c)->sLine_3yqV2aEB, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cMsg_kaAXYVtH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_9tdj5VC5, 0, m, NULL);
}

void Heavy_Amanita::cMsg_01dC48R9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Bqws0nol, 0, m, NULL);
}

void Heavy_Amanita::cMsg_7NTd5Koc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_7vWHiHpj, 0, m, NULL);
}

void Heavy_Amanita::cMsg_hX8txmEb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_yV7aGCRQ, 0, m, NULL);
}

void Heavy_Amanita::cMsg_r8XXmXjh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_MjJMW72Q, 0, m, NULL);
}

void Heavy_Amanita::cMsg_jQGDHvGL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fvg9Hsp6_sendMessage);
}

void Heavy_Amanita::cSystem_fvg9Hsp6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WW0lRsYZ, HV_BINOP_DIVIDE, 1, m, &cBinop_WW0lRsYZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_WtUWvfuO_sendMessage);
}

void Heavy_Amanita::cUnop_wBs8dQ72_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_tUfWJWXK_sendMessage);
}

void Heavy_Amanita::cMsg_u6oZ1yj7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_wBs8dQ72_sendMessage);
}

void Heavy_Amanita::cBinop_tUfWJWXK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WW0lRsYZ, HV_BINOP_DIVIDE, 0, m, &cBinop_WW0lRsYZ_sendMessage);
}

void Heavy_Amanita::cCast_WtUWvfuO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_u6oZ1yj7_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_WW0lRsYZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yXd9LxQA, HV_BINOP_MULTIPLY, 1, m, &cBinop_yXd9LxQA_sendMessage);
}

void Heavy_Amanita::cBinop_yXd9LxQA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bN7s88ty_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_x7iIBIDg_sendMessage);
}

void Heavy_Amanita::cUnop_sWoMn0aQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_hWfg2FZM_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_5Qf3du61_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_fcAhDp2W_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_0snJylZm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_mv9gqHtD_sendMessage);
}

void Heavy_Amanita::cBinop_mv9gqHtD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yXd9LxQA, HV_BINOP_MULTIPLY, 0, m, &cBinop_yXd9LxQA_sendMessage);
}

void Heavy_Amanita::cBinop_okmagjVB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_qNR7PJiK_sendMessage);
}

void Heavy_Amanita::cBinop_qNR7PJiK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k39EIGxw_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_9lRi6WiU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AzevzGUi, 1, m, &cVar_AzevzGUi_sendMessage);
}

void Heavy_Amanita::cVar_AzevzGUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OYHXcLgg_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_CF26CMXM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n9SkOXut, HV_BINOP_MULTIPLY, 1, m, &cBinop_n9SkOXut_sendMessage);
}

void Heavy_Amanita::cBinop_lWSERO5U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_CF26CMXM_sendMessage);
}

void Heavy_Amanita::cBinop_RMH22TQc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_45RVS1fM_sendMessage);
}

void Heavy_Amanita::cBinop_45RVS1fM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_55KN7EQR, HV_BINOP_MULTIPLY, 1, m, &cBinop_55KN7EQR_sendMessage);
}

void Heavy_Amanita::cBinop_w1Fde6w2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yyuV1KKY, HV_BINOP_MULTIPLY, 1, m, &cBinop_yyuV1KKY_sendMessage);
}

void Heavy_Amanita::cBinop_UoZ6I4rz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_w1Fde6w2_sendMessage);
}

void Heavy_Amanita::cBinop_vcBWf3tE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kkUxVUYt, HV_BINOP_MULTIPLY, 1, m, &cBinop_kkUxVUYt_sendMessage);
}

void Heavy_Amanita::cMsg_pVTRrNlF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_wmQFZm3r_sendMessage);
}

void Heavy_Amanita::cBinop_wmQFZm3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uPtjrBOV, HV_BINOP_MULTIPLY, 1, m, &cBinop_uPtjrBOV_sendMessage);
}

void Heavy_Amanita::cVar_W6DOs2xA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ess9YxnL_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_0snJylZm_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SYN46gAg_sendMessage);
}

void Heavy_Amanita::cVar_Zj8HV2Us_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_okmagjVB_sendMessage);
}

void Heavy_Amanita::cCast_bN7s88ty_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_sWoMn0aQ_sendMessage);
}

void Heavy_Amanita::cCast_x7iIBIDg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_5Qf3du61_sendMessage);
}

void Heavy_Amanita::cSend_hWfg2FZM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_lFwEJ9Bi_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_fcAhDp2W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_msdOqi9B_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_UWRYnHNm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_P4ylzSz7_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_k39EIGxw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_pxKZbFje_sendMessage);
}

void Heavy_Amanita::cBinop_pxKZbFje_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bn8PEpaY, HV_BINOP_MULTIPLY, 1, m, &cBinop_bn8PEpaY_sendMessage);
}

void Heavy_Amanita::cBinop_bn8PEpaY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_5XVub0YQ_sendMessage);
}

void Heavy_Amanita::cBinop_5XVub0YQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_UWRYnHNm_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_OYHXcLgg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_awwQMnbX_sendMessage);
}

void Heavy_Amanita::cBinop_awwQMnbX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jWLIb45X_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1yGJ3HvF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wAKjMjvC_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vOrIjrMa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kDelobnF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WzvgPBtD_sendMessage);
}

void Heavy_Amanita::cBinop_n9SkOXut_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kaAXYVtH_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_55KN7EQR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_01dC48R9_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_yyuV1KKY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_7NTd5Koc_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_kkUxVUYt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hX8txmEb_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_uPtjrBOV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_r8XXmXjh_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_utAmg01B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_W6DOs2xA, 0, m, &cVar_W6DOs2xA_sendMessage);
}

void Heavy_Amanita::cCast_Wl9GmKBR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Zj8HV2Us, 1, m, &cVar_Zj8HV2Us_sendMessage);
}

void Heavy_Amanita::cCast_WzvgPBtD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_n9SkOXut, HV_BINOP_MULTIPLY, 0, m, &cBinop_n9SkOXut_sendMessage);
}

void Heavy_Amanita::cCast_wAKjMjvC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kkUxVUYt, HV_BINOP_MULTIPLY, 0, m, &cBinop_kkUxVUYt_sendMessage);
}

void Heavy_Amanita::cCast_jWLIb45X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_1yGJ3HvF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uPtjrBOV, HV_BINOP_MULTIPLY, 0, m, &cBinop_uPtjrBOV_sendMessage);
}

void Heavy_Amanita::cCast_kDelobnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_55KN7EQR, HV_BINOP_MULTIPLY, 0, m, &cBinop_55KN7EQR_sendMessage);
}

void Heavy_Amanita::cCast_vOrIjrMa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yyuV1KKY, HV_BINOP_MULTIPLY, 0, m, &cBinop_yyuV1KKY_sendMessage);
}

void Heavy_Amanita::cCast_Ess9YxnL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Zj8HV2Us, 0, m, &cVar_Zj8HV2Us_sendMessage);
}

void Heavy_Amanita::cCast_SYN46gAg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_AzevzGUi, 0, m, &cVar_AzevzGUi_sendMessage);
}

void Heavy_Amanita::cMsg_4R7am2eL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_f5dBduqC, 0, m, NULL);
}

void Heavy_Amanita::cMsg_KH2bMAzz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_k5EoDtvA, 0, m, NULL);
}

void Heavy_Amanita::cMsg_6aRYMJ4R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_57u6vY09, 0, m, NULL);
}

void Heavy_Amanita::cMsg_C3BvrCBk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_DsEmVcah, 0, m, NULL);
}

void Heavy_Amanita::cMsg_TnABzXvb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_z1D5ws9u, 0, m, NULL);
}

void Heavy_Amanita::cMsg_WiYLPsqi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BhgKrbC6_sendMessage);
}

void Heavy_Amanita::cSystem_BhgKrbC6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bfEspd2S, HV_BINOP_DIVIDE, 1, m, &cBinop_bfEspd2S_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZvsMvAgq_sendMessage);
}

void Heavy_Amanita::cUnop_hAQCspqH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_Q2e3Tcpr_sendMessage);
}

void Heavy_Amanita::cMsg_ckDf397O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_hAQCspqH_sendMessage);
}

void Heavy_Amanita::cBinop_Q2e3Tcpr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bfEspd2S, HV_BINOP_DIVIDE, 0, m, &cBinop_bfEspd2S_sendMessage);
}

void Heavy_Amanita::cCast_ZvsMvAgq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ckDf397O_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_bfEspd2S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tkDTjz9U, HV_BINOP_MULTIPLY, 1, m, &cBinop_tkDTjz9U_sendMessage);
}

void Heavy_Amanita::cBinop_tkDTjz9U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NTYpTcUa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_R5ofWP5J_sendMessage);
}

void Heavy_Amanita::cUnop_eI735fqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XALzSACx_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_Y98ESaRA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_zVSz3Svj_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_JpqXzIUn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_ciYesV3G_sendMessage);
}

void Heavy_Amanita::cBinop_ciYesV3G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_tkDTjz9U, HV_BINOP_MULTIPLY, 0, m, &cBinop_tkDTjz9U_sendMessage);
}

void Heavy_Amanita::cBinop_4jrIXRjR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_5YwUXiFw_sendMessage);
}

void Heavy_Amanita::cBinop_5YwUXiFw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kvo8ZIav_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_JZjlSuDb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y3aBSIyA, 1, m, &cVar_y3aBSIyA_sendMessage);
}

void Heavy_Amanita::cVar_y3aBSIyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T3BeksZe_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_Rha7bAF2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8aXHlsWi, HV_BINOP_MULTIPLY, 1, m, &cBinop_8aXHlsWi_sendMessage);
}

void Heavy_Amanita::cBinop_GPrMoPFA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_Rha7bAF2_sendMessage);
}

void Heavy_Amanita::cBinop_K650c3K2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_qOzFb6D1_sendMessage);
}

void Heavy_Amanita::cBinop_qOzFb6D1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yaEiXqVA, HV_BINOP_MULTIPLY, 1, m, &cBinop_yaEiXqVA_sendMessage);
}

void Heavy_Amanita::cBinop_YDykFVDb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4I9uHgKn, HV_BINOP_MULTIPLY, 1, m, &cBinop_4I9uHgKn_sendMessage);
}

void Heavy_Amanita::cBinop_g03G8Fd3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_YDykFVDb_sendMessage);
}

void Heavy_Amanita::cBinop_XalZ0rZG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VkLJJWwc, HV_BINOP_MULTIPLY, 1, m, &cBinop_VkLJJWwc_sendMessage);
}

void Heavy_Amanita::cMsg_O9havYtR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ZK0FVgMj_sendMessage);
}

void Heavy_Amanita::cBinop_ZK0FVgMj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZSQwttP0, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZSQwttP0_sendMessage);
}

void Heavy_Amanita::cVar_DJOFLLsK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0SeqVV5t_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_JpqXzIUn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iQf4snk5_sendMessage);
}

void Heavy_Amanita::cVar_EJFs5vj7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_4jrIXRjR_sendMessage);
}

void Heavy_Amanita::cCast_R5ofWP5J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_Y98ESaRA_sendMessage);
}

void Heavy_Amanita::cCast_NTYpTcUa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_eI735fqt_sendMessage);
}

void Heavy_Amanita::cSend_XALzSACx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PI73sjLT_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_zVSz3Svj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_K7RqGxIH_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_o3zT6j2v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_BatpQfm2_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_kvo8ZIav_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_BfIr6f5y_sendMessage);
}

void Heavy_Amanita::cBinop_BfIr6f5y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fWjHbOGB, HV_BINOP_MULTIPLY, 1, m, &cBinop_fWjHbOGB_sendMessage);
}

void Heavy_Amanita::cBinop_fWjHbOGB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_wtQMfsyz_sendMessage);
}

void Heavy_Amanita::cBinop_wtQMfsyz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_o3zT6j2v_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_T3BeksZe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_5jX03g66_sendMessage);
}

void Heavy_Amanita::cBinop_5jX03g66_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_emmKgz6g_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7hVvuYab_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_LbF5HAwp_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Hf0o6TBa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_P5E2nCXq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_x8Bj9WgV_sendMessage);
}

void Heavy_Amanita::cBinop_8aXHlsWi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4R7am2eL_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_yaEiXqVA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KH2bMAzz_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_4I9uHgKn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6aRYMJ4R_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_VkLJJWwc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_C3BvrCBk_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_ZSQwttP0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TnABzXvb_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_PXWe7iEO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_DJOFLLsK, 0, m, &cVar_DJOFLLsK_sendMessage);
}

void Heavy_Amanita::cCast_IJpsyiMv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EJFs5vj7, 1, m, &cVar_EJFs5vj7_sendMessage);
}

void Heavy_Amanita::cCast_7hVvuYab_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZSQwttP0, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZSQwttP0_sendMessage);
}

void Heavy_Amanita::cCast_emmKgz6g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_x8Bj9WgV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8aXHlsWi, HV_BINOP_MULTIPLY, 0, m, &cBinop_8aXHlsWi_sendMessage);
}

void Heavy_Amanita::cCast_P5E2nCXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yaEiXqVA, HV_BINOP_MULTIPLY, 0, m, &cBinop_yaEiXqVA_sendMessage);
}

void Heavy_Amanita::cCast_LbF5HAwp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VkLJJWwc, HV_BINOP_MULTIPLY, 0, m, &cBinop_VkLJJWwc_sendMessage);
}

void Heavy_Amanita::cCast_Hf0o6TBa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4I9uHgKn, HV_BINOP_MULTIPLY, 0, m, &cBinop_4I9uHgKn_sendMessage);
}

void Heavy_Amanita::cCast_iQf4snk5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y3aBSIyA, 0, m, &cVar_y3aBSIyA_sendMessage);
}

void Heavy_Amanita::cCast_0SeqVV5t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EJFs5vj7, 0, m, &cVar_EJFs5vj7_sendMessage);
}

void Heavy_Amanita::cSwitchcase_PYBCBxlj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xFFFFFFFF: { // "bang"
      cSlice_onMessage(_c, &Context(_c)->cSlice_qySqcYP9, 0, m, &cSlice_qySqcYP9_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_imuVTKQ7, 0, m, &cSlice_imuVTKQ7_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fECt9Kj7_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eRMcT6Kl_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_qySqcYP9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cVar_onMessage(_c, &Context(_c)->cVar_nXszRWNy, 0, m, &cVar_nXszRWNy_sendMessage);
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_nXszRWNy, 0, m, &cVar_nXszRWNy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cSlice_imuVTKQ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_bXwveuFM, HV_BINOP_NEQ, 1, m, &cBinop_bXwveuFM_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_nXszRWNy, 1, m, &cVar_nXszRWNy_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_bXwveuFM, HV_BINOP_NEQ, 1, m, &cBinop_bXwveuFM_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_nXszRWNy, 1, m, &cVar_nXszRWNy_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cVar_nXszRWNy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5re73h3O, 0, m, &cVar_5re73h3O_sendMessage);
}

void Heavy_Amanita::cIf_2sNu5XOL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fEeNtEll_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aRVe1PYc_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cCast_fEeNtEll_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bXwveuFM, HV_BINOP_NEQ, 1, m, &cBinop_bXwveuFM_sendMessage);
}

void Heavy_Amanita::cCast_aRVe1PYc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nXszRWNy, 0, m, &cVar_nXszRWNy_sendMessage);
}

void Heavy_Amanita::cBinop_bXwveuFM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_2sNu5XOL, 1, m, &cIf_2sNu5XOL_sendMessage);
}

void Heavy_Amanita::cCast_eRMcT6Kl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_2sNu5XOL, 0, m, &cIf_2sNu5XOL_sendMessage);
}

void Heavy_Amanita::cCast_fECt9Kj7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bXwveuFM, HV_BINOP_NEQ, 0, m, &cBinop_bXwveuFM_sendMessage);
}

void Heavy_Amanita::cVar_wn2wpJG6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_21Ijaas6_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_eledbBeP, 0, m, &cIf_eledbBeP_sendMessage);
}

void Heavy_Amanita::cUnop_YwWiVMO4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FgFDyuql_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iweGuOm9_sendMessage);
}

void Heavy_Amanita::cUnop_OeeBeOTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FgFDyuql_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iweGuOm9_sendMessage);
}

void Heavy_Amanita::cIf_eledbBeP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cUnop_onMessage(_c, HV_UNOP_CEIL, m, &cUnop_OeeBeOTZ_sendMessage);
      break;
    }
    case 1: {
      cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_YwWiVMO4_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cBinop_21Ijaas6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_eledbBeP, 1, m, &cIf_eledbBeP_sendMessage);
}

void Heavy_Amanita::cIf_4MfLNJrP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      sLine_onMessage(_c, &Context(_c)->sLine_P4oNGvyc, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cIf_mxodpnmT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      sLine_onMessage(_c, &Context(_c)->sLine_P4oNGvyc, 0, m, NULL);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cSwitchcase_4W5BxEPl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0xFFFFFFFF: { // "bang"
      cSlice_onMessage(_c, &Context(_c)->cSlice_m0tUSvW5, 0, m, &cSlice_m0tUSvW5_sendMessage);
      break;
    }
    case 0x3E004DAB: { // "set"
      cSlice_onMessage(_c, &Context(_c)->cSlice_Plpv6dg4, 0, m, &cSlice_Plpv6dg4_sendMessage);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_95Dia0Jc_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_9RYK6OHy_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cSlice_m0tUSvW5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cVar_onMessage(_c, &Context(_c)->cVar_CVNjmVFE, 0, m, &cVar_CVNjmVFE_sendMessage);
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_CVNjmVFE, 0, m, &cVar_CVNjmVFE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cSlice_Plpv6dg4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_GMMrQZ7P, HV_BINOP_NEQ, 1, m, &cBinop_GMMrQZ7P_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_CVNjmVFE, 1, m, &cVar_CVNjmVFE_sendMessage);
      break;
    }
    case 1: {
      cBinop_onMessage(_c, &Context(_c)->cBinop_GMMrQZ7P, HV_BINOP_NEQ, 1, m, &cBinop_GMMrQZ7P_sendMessage);
      cVar_onMessage(_c, &Context(_c)->cVar_CVNjmVFE, 1, m, &cVar_CVNjmVFE_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cVar_CVNjmVFE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rpDQ6F7r, 0, m, &cVar_rpDQ6F7r_sendMessage);
}

void Heavy_Amanita::cIf_s7BEGQyM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_K5fPEGMa_sendMessage);
      cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pxjNeIEK_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cCast_K5fPEGMa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GMMrQZ7P, HV_BINOP_NEQ, 1, m, &cBinop_GMMrQZ7P_sendMessage);
}

void Heavy_Amanita::cCast_pxjNeIEK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CVNjmVFE, 0, m, &cVar_CVNjmVFE_sendMessage);
}

void Heavy_Amanita::cBinop_GMMrQZ7P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_s7BEGQyM, 1, m, &cIf_s7BEGQyM_sendMessage);
}

void Heavy_Amanita::cCast_95Dia0Jc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GMMrQZ7P, HV_BINOP_NEQ, 0, m, &cBinop_GMMrQZ7P_sendMessage);
}

void Heavy_Amanita::cCast_9RYK6OHy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_s7BEGQyM, 0, m, &cIf_s7BEGQyM_sendMessage);
}

void Heavy_Amanita::cVar_VhT60U7l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_6K6ixUoP_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_hBDxkhOL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PDfGHwcE_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_rpDQ6F7r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JPArRe7e_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSwitchcase_4A3GNMu5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B1oOjvDO_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MMIrwqoT_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Amanita::cCast_B1oOjvDO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hBDxkhOL, 0, m, &cVar_hBDxkhOL_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_rpDQ6F7r, 0, m, &cVar_rpDQ6F7r_sendMessage);
}

void Heavy_Amanita::cCast_MMIrwqoT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VhT60U7l, 0, m, &cVar_VhT60U7l_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_5re73h3O, 0, m, &cVar_5re73h3O_sendMessage);
}

void Heavy_Amanita::cVar_5re73h3O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_muVxIkLM_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_IDpskVPl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JTaJeTYC_sendMessage);
}

void Heavy_Amanita::cSystem_JTaJeTYC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_dWXmBxKe_sendMessage);
}

void Heavy_Amanita::cVar_M9i3YA5k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DLTUa81n_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSystem_kvmuE6DP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_iJQtzzjp_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_dcJdKudb, m);
}

void Heavy_Amanita::cBinop_dWXmBxKe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_HMNYG0kF, m);
}

void Heavy_Amanita::cMsg_DLTUa81n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kvmuE6DP_sendMessage);
}

void Heavy_Amanita::cBinop_iJQtzzjp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_5qQUCcqn, m);
}

void Heavy_Amanita::cMsg_s9EpQIZd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8OZgiAJQ_sendMessage);
}

void Heavy_Amanita::cSystem_8OZgiAJQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_8DKE84GO_sendMessage);
}

void Heavy_Amanita::cVar_1lGTtgI6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tFr4dnkp_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSystem_IebfzUnF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_nhXoBxvA_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_9kFFLcM7, m);
}

void Heavy_Amanita::cBinop_8DKE84GO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kdlhXrC4, m);
}

void Heavy_Amanita::cMsg_tFr4dnkp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_IebfzUnF_sendMessage);
}

void Heavy_Amanita::cBinop_nhXoBxvA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0nKGuyvc, m);
}

void Heavy_Amanita::cIf_Jm6Lu2I4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_TdJkekRu_sendMessage);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 0.75f, 0, m, &cBinop_v6tVtykL_sendMessage);
      cSend_bBijY2Lz_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::sEnv_3XvdDwz3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PyDjED3V_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cIf_qgEuZVku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_TdJkekRu_sendMessage);
      cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 0.75f, 0, m, &cBinop_v6tVtykL_sendMessage);
      cSend_bBijY2Lz_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cIf_OsHl4qwB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_xAlGdWW8, 0, m, &cVar_xAlGdWW8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cIf_6a3ERt8F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_xAlGdWW8, 0, m, &cVar_xAlGdWW8_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_Amanita::cVar_hGZaytvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xAlGdWW8, 0, m, &cVar_xAlGdWW8_sendMessage);
  cSend_kkhRTxT8_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSwitchcase_zkB5lih4_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_huGsHfcN_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K3vmywG9_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_Amanita::cCast_huGsHfcN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9HEYlNvM_sendMessage(_c, 0, m);
  cMsg_pqaNUXI1_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_K3vmywG9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2zgdmwQh_sendMessage(_c, 0, m);
  cMsg_yjksi2pF_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_hGZaytvw, 0, m, &cVar_hGZaytvw_sendMessage);
}

void Heavy_Amanita::cBinop_2PmnplbD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_usGKDMoF_sendMessage);
}

void Heavy_Amanita::cBinop_usGKDMoF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 4.0f, 0, m, &cBinop_tLjOVjic_sendMessage);
}

void Heavy_Amanita::cBinop_Ip4uNYCa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_2p7tk71D_sendMessage);
}

void Heavy_Amanita::cBinop_2p7tk71D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Ee8pFdQ1_sendMessage);
}

void Heavy_Amanita::cVar_mnpkdwx2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Jm6Lu2I4, 0, m, &cIf_Jm6Lu2I4_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_2ilEKgby_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 0.75f, 0, m, &cBinop_WCYdBIDI_sendMessage);
  cSend_iyii4Vyi_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_lRZSmw0e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qgEuZVku, 0, m, &cIf_qgEuZVku_sendMessage);
}

void Heavy_Amanita::cVar_WXgRfl7E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_iGV1grWh_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_TeigDH4j_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cVar_UTdPmCbg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_hEpDVZIl_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_X4YPs4JC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::sSample_cLQJYAOq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_g1V5HLOu_sendMessage);
}

void Heavy_Amanita::cSwitchcase_unC1U6pc_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_qA4y24Zs_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_qA4y24Zs_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hrmZRPWL_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cDelay_WgCNCcnt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_WgCNCcnt, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WgCNCcnt, 0, m, &cDelay_WgCNCcnt_sendMessage);
  sSample_onMessage(_c, &Context(_c)->sSample_cLQJYAOq, 1, m);
}

void Heavy_Amanita::cCast_hrmZRPWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qA4y24Zs_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_WgCNCcnt, 0, m, &cDelay_WgCNCcnt_sendMessage);
  sSample_onMessage(_c, &Context(_c)->sSample_cLQJYAOq, 1, m);
}

void Heavy_Amanita::cMsg_qzSZVv9u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2HtKj6WI_sendMessage);
}

void Heavy_Amanita::cSystem_2HtKj6WI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_vnefQxGg_sendMessage);
}

void Heavy_Amanita::cVar_aRokHCKU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dH4jhVbg, HV_BINOP_MULTIPLY, 0, m, &cBinop_dH4jhVbg_sendMessage);
}

void Heavy_Amanita::cMsg_qA4y24Zs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_WgCNCcnt, 0, m, &cDelay_WgCNCcnt_sendMessage);
}

void Heavy_Amanita::cBinop_fzRK96EV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_WgCNCcnt, 2, m, &cDelay_WgCNCcnt_sendMessage);
}

void Heavy_Amanita::cBinop_vnefQxGg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dH4jhVbg, HV_BINOP_MULTIPLY, 1, m, &cBinop_dH4jhVbg_sendMessage);
}

void Heavy_Amanita::cBinop_dH4jhVbg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_fzRK96EV_sendMessage);
}

void Heavy_Amanita::cBinop_g1V5HLOu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 2.0f, 0, m, &cBinop_Cb32im7W_sendMessage);
}

void Heavy_Amanita::cBinop_Cb32im7W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_uGkL3Ccm_sendMessage);
}

void Heavy_Amanita::sSample_Hkc8hehr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_736RxAMM_sendMessage);
}

void Heavy_Amanita::cSwitchcase_IT8I7bqQ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  int msgIndex = 0;
  switch (msg_getHash(m, msgIndex)) {
    case 0x6D60E6E: { // "symbol"
      msgIndex = 1;
      break;
    }
  }
  switch (msg_getHash(m, msgIndex)) {
    case 0x0: { // "0.0"
      cMsg_b4ulC5h0_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_b4ulC5h0_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_JJHX7zyR_sendMessage);
      break;
    }
  }
}

void Heavy_Amanita::cDelay_7pSiMGbH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_7pSiMGbH, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_7pSiMGbH, 0, m, &cDelay_7pSiMGbH_sendMessage);
  sSample_onMessage(_c, &Context(_c)->sSample_Hkc8hehr, 1, m);
}

void Heavy_Amanita::cCast_JJHX7zyR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_b4ulC5h0_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_7pSiMGbH, 0, m, &cDelay_7pSiMGbH_sendMessage);
  sSample_onMessage(_c, &Context(_c)->sSample_Hkc8hehr, 1, m);
}

void Heavy_Amanita::cMsg_f6sfu5N1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_KkWoSlUN_sendMessage);
}

void Heavy_Amanita::cSystem_KkWoSlUN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_c35lgAWF_sendMessage);
}

void Heavy_Amanita::cVar_iUi1VxCm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SdQ98Ix4, HV_BINOP_MULTIPLY, 0, m, &cBinop_SdQ98Ix4_sendMessage);
}

void Heavy_Amanita::cMsg_b4ulC5h0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_7pSiMGbH, 0, m, &cDelay_7pSiMGbH_sendMessage);
}

void Heavy_Amanita::cBinop_nTNuzre8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_7pSiMGbH, 2, m, &cDelay_7pSiMGbH_sendMessage);
}

void Heavy_Amanita::cBinop_c35lgAWF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_SdQ98Ix4, HV_BINOP_MULTIPLY, 1, m, &cBinop_SdQ98Ix4_sendMessage);
}

void Heavy_Amanita::cBinop_SdQ98Ix4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_nTNuzre8_sendMessage);
}

void Heavy_Amanita::cBinop_736RxAMM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 2.0f, 0, m, &cBinop_sSgaSgPs_sendMessage);
}

void Heavy_Amanita::cBinop_sSgaSgPs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_cOrhvC6q_sendMessage);
}

void Heavy_Amanita::cMsg_bbgOVeei_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_sCn7wwGo, 0, m, NULL);
}

void Heavy_Amanita::cMsg_5d6zoy8O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ICTOhtuH, 0, m, NULL);
}

void Heavy_Amanita::cMsg_8N3Xziwu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LNI9sKcW, 0, m, NULL);
}

void Heavy_Amanita::cMsg_egJlkQTH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_vc7IJI3c, 0, m, NULL);
}

void Heavy_Amanita::cMsg_LxUda9ag_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LmnjvETe, 0, m, NULL);
}

void Heavy_Amanita::cMsg_MI1lnbiw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_3HatHKOu_sendMessage);
}

void Heavy_Amanita::cSystem_3HatHKOu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Tybm89QP, HV_BINOP_DIVIDE, 1, m, &cBinop_Tybm89QP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zRdeICkA_sendMessage);
}

void Heavy_Amanita::cUnop_CAXZqMYp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_Bc6YvYUL_sendMessage);
}

void Heavy_Amanita::cMsg_RoNzeiQk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_CAXZqMYp_sendMessage);
}

void Heavy_Amanita::cBinop_Bc6YvYUL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Tybm89QP, HV_BINOP_DIVIDE, 0, m, &cBinop_Tybm89QP_sendMessage);
}

void Heavy_Amanita::cCast_zRdeICkA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_RoNzeiQk_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_Tybm89QP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T1tPAa5S, HV_BINOP_MULTIPLY, 1, m, &cBinop_T1tPAa5S_sendMessage);
}

void Heavy_Amanita::cBinop_T1tPAa5S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yTmlhPSD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TsAkAHHf_sendMessage);
}

void Heavy_Amanita::cUnop_jLbGyt7C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ohPAvy3Q_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_QQfAHmso_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_zQYdFfqU_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_oxdRa9bY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_pxo5eqd2_sendMessage);
}

void Heavy_Amanita::cBinop_pxo5eqd2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_T1tPAa5S, HV_BINOP_MULTIPLY, 0, m, &cBinop_T1tPAa5S_sendMessage);
}

void Heavy_Amanita::cBinop_lcWKIMmp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_ax24ent6_sendMessage);
}

void Heavy_Amanita::cBinop_ax24ent6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_r00VWbrd_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_X62yXkFK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ef1EFDVy, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ef1EFDVy_sendMessage);
}

void Heavy_Amanita::cMsg_UQfJPeq9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_5drxGDp3_sendMessage);
}

void Heavy_Amanita::cBinop_5drxGDp3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_X62yXkFK_sendMessage);
}

void Heavy_Amanita::cMsg_uaVQel2V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9jjl2DfT_sendMessage);
}

void Heavy_Amanita::cBinop_9jjl2DfT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nvPBBBtN, HV_BINOP_MULTIPLY, 1, m, &cBinop_nvPBBBtN_sendMessage);
}

void Heavy_Amanita::cBinop_d7DyCOxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hExa6EVx, HV_BINOP_MULTIPLY, 1, m, &cBinop_hExa6EVx_sendMessage);
}

void Heavy_Amanita::cMsg_AKCpctiU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_f21ij2Qe_sendMessage);
}

void Heavy_Amanita::cBinop_f21ij2Qe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_d7DyCOxO_sendMessage);
}

void Heavy_Amanita::cBinop_B7ohOS63_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nhO2nPQe, 1, m, &cVar_nhO2nPQe_sendMessage);
}

void Heavy_Amanita::cBinop_CEA2ldbK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8Et0KoAf, HV_BINOP_MULTIPLY, 1, m, &cBinop_8Et0KoAf_sendMessage);
}

void Heavy_Amanita::cMsg_c2mzWr0T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_w7noV433_sendMessage);
}

void Heavy_Amanita::cBinop_w7noV433_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WggWFge9, HV_BINOP_MULTIPLY, 1, m, &cBinop_WggWFge9_sendMessage);
}

void Heavy_Amanita::cVar_nhO2nPQe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W7uZeRpX_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_OXIig0Zw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HsO0WQWH_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_oxdRa9bY_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_a5GJy7dI_sendMessage);
}

void Heavy_Amanita::cVar_HrfhHtZ8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_lcWKIMmp_sendMessage);
}

void Heavy_Amanita::cCast_TsAkAHHf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_QQfAHmso_sendMessage);
}

void Heavy_Amanita::cCast_yTmlhPSD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_jLbGyt7C_sendMessage);
}

void Heavy_Amanita::cSend_ohPAvy3Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Go5JYiWi_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_zQYdFfqU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HjEn5eo8_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_na9LEkN8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_lgtUU3KA_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_r00VWbrd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_CZNwOFb6_sendMessage);
}

void Heavy_Amanita::cBinop_CZNwOFb6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AcBvOwgf, HV_BINOP_MULTIPLY, 1, m, &cBinop_AcBvOwgf_sendMessage);
}

void Heavy_Amanita::cBinop_AcBvOwgf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_O26ViYJP_sendMessage);
}

void Heavy_Amanita::cBinop_O26ViYJP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_na9LEkN8_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_W7uZeRpX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_wLf8W3Ya_sendMessage);
}

void Heavy_Amanita::cBinop_wLf8W3Ya_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KcC7IIB4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_doqM5JrI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qKoNM8yt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_yUL1pYDP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vVD4amVz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_87psrsHt_sendMessage);
}

void Heavy_Amanita::cBinop_Ef1EFDVy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bbgOVeei_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_nvPBBBtN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5d6zoy8O_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_hExa6EVx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8N3Xziwu_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_8Et0KoAf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_egJlkQTH_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_WggWFge9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LxUda9ag_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_OVXC77JY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OXIig0Zw, 0, m, &cVar_OXIig0Zw_sendMessage);
}

void Heavy_Amanita::cCast_pGAw3VCe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HrfhHtZ8, 1, m, &cVar_HrfhHtZ8_sendMessage);
}

void Heavy_Amanita::cCast_doqM5JrI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WggWFge9, HV_BINOP_MULTIPLY, 0, m, &cBinop_WggWFge9_sendMessage);
}

void Heavy_Amanita::cCast_vVD4amVz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nvPBBBtN, HV_BINOP_MULTIPLY, 0, m, &cBinop_nvPBBBtN_sendMessage);
}

void Heavy_Amanita::cCast_yUL1pYDP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hExa6EVx, HV_BINOP_MULTIPLY, 0, m, &cBinop_hExa6EVx_sendMessage);
}

void Heavy_Amanita::cCast_KcC7IIB4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_qKoNM8yt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8Et0KoAf, HV_BINOP_MULTIPLY, 0, m, &cBinop_8Et0KoAf_sendMessage);
}

void Heavy_Amanita::cCast_87psrsHt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ef1EFDVy, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ef1EFDVy_sendMessage);
}

void Heavy_Amanita::cCast_a5GJy7dI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_nhO2nPQe, 0, m, &cVar_nhO2nPQe_sendMessage);
}

void Heavy_Amanita::cCast_HsO0WQWH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HrfhHtZ8, 0, m, &cVar_HrfhHtZ8_sendMessage);
}

void Heavy_Amanita::cMsg_NaHl2Wmf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_7aG7vX0h, 0, m, NULL);
}

void Heavy_Amanita::cMsg_LMyTPUlD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_CuWdOtce, 0, m, NULL);
}

void Heavy_Amanita::cMsg_URFiuKbz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JBFRYfgn, 0, m, NULL);
}

void Heavy_Amanita::cMsg_SmtcsWdU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_3PWf0Z0V, 0, m, NULL);
}

void Heavy_Amanita::cMsg_2JAXkEbr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ni7lTboZ, 0, m, NULL);
}

void Heavy_Amanita::cMsg_GbyUHLLW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2cWobS9t_sendMessage);
}

void Heavy_Amanita::cSystem_2cWobS9t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zqW73ER8, HV_BINOP_DIVIDE, 1, m, &cBinop_zqW73ER8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TZv9fsqv_sendMessage);
}

void Heavy_Amanita::cUnop_jSceC3Pr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_s6JFUS8e_sendMessage);
}

void Heavy_Amanita::cMsg_u0AdZZEb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_jSceC3Pr_sendMessage);
}

void Heavy_Amanita::cBinop_s6JFUS8e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zqW73ER8, HV_BINOP_DIVIDE, 0, m, &cBinop_zqW73ER8_sendMessage);
}

void Heavy_Amanita::cCast_TZv9fsqv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_u0AdZZEb_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_zqW73ER8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JQSOXCma, HV_BINOP_MULTIPLY, 1, m, &cBinop_JQSOXCma_sendMessage);
}

void Heavy_Amanita::cBinop_JQSOXCma_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AbwS4vJU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wzkAP8Zr_sendMessage);
}

void Heavy_Amanita::cUnop_SEHEU2Ls_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_uElJfVGT_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_yhP8hfwr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_DbXuKuNC_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_A3GjlUcr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_nMatBaR8_sendMessage);
}

void Heavy_Amanita::cBinop_nMatBaR8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JQSOXCma, HV_BINOP_MULTIPLY, 0, m, &cBinop_JQSOXCma_sendMessage);
}

void Heavy_Amanita::cBinop_r7Zl9USa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_DtlJvZ2a_sendMessage);
}

void Heavy_Amanita::cBinop_DtlJvZ2a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JH7jNa5T_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_409tjKnz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1PJ2peCF, HV_BINOP_MULTIPLY, 1, m, &cBinop_1PJ2peCF_sendMessage);
}

void Heavy_Amanita::cMsg_jceof3LP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_vuv9hQc0_sendMessage);
}

void Heavy_Amanita::cBinop_vuv9hQc0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_409tjKnz_sendMessage);
}

void Heavy_Amanita::cMsg_xGS3CjFp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_i4zIg4c9_sendMessage);
}

void Heavy_Amanita::cBinop_i4zIg4c9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oADeaXXv, HV_BINOP_MULTIPLY, 1, m, &cBinop_oADeaXXv_sendMessage);
}

void Heavy_Amanita::cBinop_tIHz4iSg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2zuyllcD, HV_BINOP_MULTIPLY, 1, m, &cBinop_2zuyllcD_sendMessage);
}

void Heavy_Amanita::cMsg_3CKdtog0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_928oCZLp_sendMessage);
}

void Heavy_Amanita::cBinop_928oCZLp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_tIHz4iSg_sendMessage);
}

void Heavy_Amanita::cBinop_DcDqhg4O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CzPhxRnj, 1, m, &cVar_CzPhxRnj_sendMessage);
}

void Heavy_Amanita::cBinop_73DxjHEg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gJYRQ4ux, HV_BINOP_MULTIPLY, 1, m, &cBinop_gJYRQ4ux_sendMessage);
}

void Heavy_Amanita::cMsg_hXlzOEux_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_OMI21xZ6_sendMessage);
}

void Heavy_Amanita::cBinop_OMI21xZ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_o8u2plgh, HV_BINOP_MULTIPLY, 1, m, &cBinop_o8u2plgh_sendMessage);
}

void Heavy_Amanita::cVar_CzPhxRnj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WxyR0xUi_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_ITUJeBKF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PZuPcjt5_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_A3GjlUcr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_HQHy3w68_sendMessage);
}

void Heavy_Amanita::cVar_PsyMVyTm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_r7Zl9USa_sendMessage);
}

void Heavy_Amanita::cCast_wzkAP8Zr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_yhP8hfwr_sendMessage);
}

void Heavy_Amanita::cCast_AbwS4vJU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_SEHEU2Ls_sendMessage);
}

void Heavy_Amanita::cSend_uElJfVGT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OSuLBsdM_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_DbXuKuNC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8MQkeTC4_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_4bfDuUsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zNCC7bGH_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_JH7jNa5T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_DI0UkRRD_sendMessage);
}

void Heavy_Amanita::cBinop_DI0UkRRD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GBUbdToO, HV_BINOP_MULTIPLY, 1, m, &cBinop_GBUbdToO_sendMessage);
}

void Heavy_Amanita::cBinop_GBUbdToO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_gRY62Lbs_sendMessage);
}

void Heavy_Amanita::cBinop_gRY62Lbs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_4bfDuUsI_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_WxyR0xUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Ec7ioOcF_sendMessage);
}

void Heavy_Amanita::cBinop_Ec7ioOcF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bzocP3o4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gawmalFJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TKNRUyF7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M6cjRYPc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sH9W6mlw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vt8Npzmf_sendMessage);
}

void Heavy_Amanita::cBinop_1PJ2peCF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NaHl2Wmf_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_oADeaXXv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LMyTPUlD_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_2zuyllcD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_URFiuKbz_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_gJYRQ4ux_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SmtcsWdU_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_o8u2plgh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2JAXkEbr_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_RSJb9lvj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ITUJeBKF, 0, m, &cVar_ITUJeBKF_sendMessage);
}

void Heavy_Amanita::cCast_GD8iDa6c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PsyMVyTm, 1, m, &cVar_PsyMVyTm_sendMessage);
}

void Heavy_Amanita::cCast_TKNRUyF7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gJYRQ4ux, HV_BINOP_MULTIPLY, 0, m, &cBinop_gJYRQ4ux_sendMessage);
}

void Heavy_Amanita::cCast_vt8Npzmf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1PJ2peCF, HV_BINOP_MULTIPLY, 0, m, &cBinop_1PJ2peCF_sendMessage);
}

void Heavy_Amanita::cCast_gawmalFJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_o8u2plgh, HV_BINOP_MULTIPLY, 0, m, &cBinop_o8u2plgh_sendMessage);
}

void Heavy_Amanita::cCast_sH9W6mlw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oADeaXXv, HV_BINOP_MULTIPLY, 0, m, &cBinop_oADeaXXv_sendMessage);
}

void Heavy_Amanita::cCast_M6cjRYPc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2zuyllcD, HV_BINOP_MULTIPLY, 0, m, &cBinop_2zuyllcD_sendMessage);
}

void Heavy_Amanita::cCast_bzocP3o4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_PZuPcjt5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_PsyMVyTm, 0, m, &cVar_PsyMVyTm_sendMessage);
}

void Heavy_Amanita::cCast_HQHy3w68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_CzPhxRnj, 0, m, &cVar_CzPhxRnj_sendMessage);
}

void Heavy_Amanita::cMsg_0QyuJbS9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_k1qvh5nX, 0, m, NULL);
}

void Heavy_Amanita::cMsg_ksfbkPq3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_7HOhK9jD, 0, m, NULL);
}

void Heavy_Amanita::cMsg_nkuZZIcz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_75RTNMZK, 0, m, NULL);
}

void Heavy_Amanita::cMsg_H0E744SU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_4njeYdu2, 0, m, NULL);
}

void Heavy_Amanita::cMsg_MqWPmbPW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_pxdcXsMi, 0, m, NULL);
}

void Heavy_Amanita::cMsg_4wQWaubf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_AOLPvDe4_sendMessage);
}

void Heavy_Amanita::cSystem_AOLPvDe4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yoirhXMg, HV_BINOP_DIVIDE, 1, m, &cBinop_yoirhXMg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fLvBiKmk_sendMessage);
}

void Heavy_Amanita::cUnop_U4f7pZpY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_K3uSO3kb_sendMessage);
}

void Heavy_Amanita::cMsg_TcQmmA5c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_U4f7pZpY_sendMessage);
}

void Heavy_Amanita::cBinop_K3uSO3kb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yoirhXMg, HV_BINOP_DIVIDE, 0, m, &cBinop_yoirhXMg_sendMessage);
}

void Heavy_Amanita::cCast_fLvBiKmk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TcQmmA5c_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_yoirhXMg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hCnzaFVI, HV_BINOP_MULTIPLY, 1, m, &cBinop_hCnzaFVI_sendMessage);
}

void Heavy_Amanita::cBinop_hCnzaFVI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5GV4E0W6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p1cGBgLS_sendMessage);
}

void Heavy_Amanita::cUnop_xFIeLFiI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ExlTCen4_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_kQKqkUXY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_7azwA6dl_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_baQsIxa7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_PlrcCD23_sendMessage);
}

void Heavy_Amanita::cBinop_PlrcCD23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hCnzaFVI, HV_BINOP_MULTIPLY, 0, m, &cBinop_hCnzaFVI_sendMessage);
}

void Heavy_Amanita::cBinop_DPOLqf6H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_08pK39di_sendMessage);
}

void Heavy_Amanita::cBinop_08pK39di_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mKDJ5wYo_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_8SF6s8G1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_74y8Fqbo, HV_BINOP_MULTIPLY, 1, m, &cBinop_74y8Fqbo_sendMessage);
}

void Heavy_Amanita::cMsg_qxchIvhj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_2SmM8BmL_sendMessage);
}

void Heavy_Amanita::cBinop_2SmM8BmL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_8SF6s8G1_sendMessage);
}

void Heavy_Amanita::cMsg_7wblJcR7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_ZlfoM3R3_sendMessage);
}

void Heavy_Amanita::cBinop_ZlfoM3R3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dDojWS2k, HV_BINOP_MULTIPLY, 1, m, &cBinop_dDojWS2k_sendMessage);
}

void Heavy_Amanita::cBinop_8hFeq56K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4rfgO4pA, HV_BINOP_MULTIPLY, 1, m, &cBinop_4rfgO4pA_sendMessage);
}

void Heavy_Amanita::cMsg_55v8xPra_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_MErB461W_sendMessage);
}

void Heavy_Amanita::cBinop_MErB461W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_8hFeq56K_sendMessage);
}

void Heavy_Amanita::cBinop_VIM9cU9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ORoXWqIf, 1, m, &cVar_ORoXWqIf_sendMessage);
}

void Heavy_Amanita::cBinop_Ytf8xCga_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8TqBi1B0, HV_BINOP_MULTIPLY, 1, m, &cBinop_8TqBi1B0_sendMessage);
}

void Heavy_Amanita::cMsg_2f9sIMHO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_SaItXNDL_sendMessage);
}

void Heavy_Amanita::cBinop_SaItXNDL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZcNzlbKY, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZcNzlbKY_sendMessage);
}

void Heavy_Amanita::cVar_ORoXWqIf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bgdlhShy_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_zGESBpHi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Uz0sma0R_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_baQsIxa7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AMqXOCyo_sendMessage);
}

void Heavy_Amanita::cVar_d2TAjDuf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_DPOLqf6H_sendMessage);
}

void Heavy_Amanita::cCast_5GV4E0W6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_xFIeLFiI_sendMessage);
}

void Heavy_Amanita::cCast_p1cGBgLS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_kQKqkUXY_sendMessage);
}

void Heavy_Amanita::cSend_ExlTCen4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Mfpme0Q5_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_7azwA6dl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_6ka01kWp_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_gZgrnbmQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QwvaQ0JJ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_mKDJ5wYo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_4Em578Oj_sendMessage);
}

void Heavy_Amanita::cBinop_4Em578Oj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2ayhOTGD, HV_BINOP_MULTIPLY, 1, m, &cBinop_2ayhOTGD_sendMessage);
}

void Heavy_Amanita::cBinop_2ayhOTGD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_0PuEsLPH_sendMessage);
}

void Heavy_Amanita::cBinop_0PuEsLPH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_gZgrnbmQ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_bgdlhShy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_o7lFArOe_sendMessage);
}

void Heavy_Amanita::cBinop_o7lFArOe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wRrPbpWG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GITUqhAv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_qgCf9bXa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3YBwp3if_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4dajbzKj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dnHmF49u_sendMessage);
}

void Heavy_Amanita::cBinop_74y8Fqbo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0QyuJbS9_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_dDojWS2k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ksfbkPq3_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_4rfgO4pA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nkuZZIcz_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_8TqBi1B0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_H0E744SU_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_ZcNzlbKY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MqWPmbPW_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_rQKUQhDb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zGESBpHi, 0, m, &cVar_zGESBpHi_sendMessage);
}

void Heavy_Amanita::cCast_pZyTDwKC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_d2TAjDuf, 1, m, &cVar_d2TAjDuf_sendMessage);
}

void Heavy_Amanita::cCast_GITUqhAv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZcNzlbKY, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZcNzlbKY_sendMessage);
}

void Heavy_Amanita::cCast_4dajbzKj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dDojWS2k, HV_BINOP_MULTIPLY, 0, m, &cBinop_dDojWS2k_sendMessage);
}

void Heavy_Amanita::cCast_3YBwp3if_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4rfgO4pA, HV_BINOP_MULTIPLY, 0, m, &cBinop_4rfgO4pA_sendMessage);
}

void Heavy_Amanita::cCast_wRrPbpWG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_qgCf9bXa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8TqBi1B0, HV_BINOP_MULTIPLY, 0, m, &cBinop_8TqBi1B0_sendMessage);
}

void Heavy_Amanita::cCast_dnHmF49u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_74y8Fqbo, HV_BINOP_MULTIPLY, 0, m, &cBinop_74y8Fqbo_sendMessage);
}

void Heavy_Amanita::cCast_AMqXOCyo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ORoXWqIf, 0, m, &cVar_ORoXWqIf_sendMessage);
}

void Heavy_Amanita::cCast_Uz0sma0R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_d2TAjDuf, 0, m, &cVar_d2TAjDuf_sendMessage);
}

void Heavy_Amanita::cMsg_3rtS0ckT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LDRPbkgm, 0, m, NULL);
}

void Heavy_Amanita::cMsg_Jt1Nafyu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_dAg6bNoa, 0, m, NULL);
}

void Heavy_Amanita::cMsg_Ir68aZOU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_nbfdffe7, 0, m, NULL);
}

void Heavy_Amanita::cMsg_YGKA9PUN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_lxY20HFe, 0, m, NULL);
}

void Heavy_Amanita::cMsg_grgEXmY9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_a77F3dXb, 0, m, NULL);
}

void Heavy_Amanita::cMsg_oFczL6Er_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_MTb42I7P_sendMessage);
}

void Heavy_Amanita::cSystem_MTb42I7P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HM1HaXeZ, HV_BINOP_DIVIDE, 1, m, &cBinop_HM1HaXeZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nYbsvqRW_sendMessage);
}

void Heavy_Amanita::cUnop_e1Y8WgKm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_uzmIiD1V_sendMessage);
}

void Heavy_Amanita::cMsg_pGyHlxpN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_e1Y8WgKm_sendMessage);
}

void Heavy_Amanita::cBinop_uzmIiD1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HM1HaXeZ, HV_BINOP_DIVIDE, 0, m, &cBinop_HM1HaXeZ_sendMessage);
}

void Heavy_Amanita::cCast_nYbsvqRW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_pGyHlxpN_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_HM1HaXeZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ESfTlTCA, HV_BINOP_MULTIPLY, 1, m, &cBinop_ESfTlTCA_sendMessage);
}

void Heavy_Amanita::cBinop_ESfTlTCA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_P5HQG08C_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Cpl51k8l_sendMessage);
}

void Heavy_Amanita::cUnop_RH1RXkgf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_QMYHsqQq_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_19OubIYu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_f50EYB3X_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_hR33hM9g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_E3o5u5ST_sendMessage);
}

void Heavy_Amanita::cBinop_E3o5u5ST_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ESfTlTCA, HV_BINOP_MULTIPLY, 0, m, &cBinop_ESfTlTCA_sendMessage);
}

void Heavy_Amanita::cBinop_XpqmjwYA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_W33O7aN7_sendMessage);
}

void Heavy_Amanita::cBinop_W33O7aN7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BTwTGiWg_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_edacjvzY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RdGcp2b0, HV_BINOP_MULTIPLY, 1, m, &cBinop_RdGcp2b0_sendMessage);
}

void Heavy_Amanita::cMsg_CThUAIZn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_U7C2rJcc_sendMessage);
}

void Heavy_Amanita::cBinop_U7C2rJcc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_edacjvzY_sendMessage);
}

void Heavy_Amanita::cMsg_qAqPqxbM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_kihC7y15_sendMessage);
}

void Heavy_Amanita::cBinop_kihC7y15_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PZTsrM77, HV_BINOP_MULTIPLY, 1, m, &cBinop_PZTsrM77_sendMessage);
}

void Heavy_Amanita::cBinop_h5jmQVVM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gznRhjpS, HV_BINOP_MULTIPLY, 1, m, &cBinop_gznRhjpS_sendMessage);
}

void Heavy_Amanita::cMsg_3tEhhdHR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_EGvhvqXc_sendMessage);
}

void Heavy_Amanita::cBinop_EGvhvqXc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_h5jmQVVM_sendMessage);
}

void Heavy_Amanita::cBinop_huBeJiJ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_78wE3QwG, 1, m, &cVar_78wE3QwG_sendMessage);
}

void Heavy_Amanita::cBinop_HkuKCUbH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g8BIep9S, HV_BINOP_MULTIPLY, 1, m, &cBinop_g8BIep9S_sendMessage);
}

void Heavy_Amanita::cMsg_FYgkvOEZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_fpkdkFBl_sendMessage);
}

void Heavy_Amanita::cBinop_fpkdkFBl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jvCEuWVg, HV_BINOP_MULTIPLY, 1, m, &cBinop_jvCEuWVg_sendMessage);
}

void Heavy_Amanita::cVar_78wE3QwG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8N3dmu6a_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_elq2jAMy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RjYBpYkG_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_hR33hM9g_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2SNiKx7N_sendMessage);
}

void Heavy_Amanita::cVar_ehXfnwgP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_XpqmjwYA_sendMessage);
}

void Heavy_Amanita::cCast_Cpl51k8l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_19OubIYu_sendMessage);
}

void Heavy_Amanita::cCast_P5HQG08C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_RH1RXkgf_sendMessage);
}

void Heavy_Amanita::cSend_QMYHsqQq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_4NxPVPAE_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_f50EYB3X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_e2C0nv9c_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_mOslDk8K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Z8lujGCX_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_BTwTGiWg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_gA3AGNA8_sendMessage);
}

void Heavy_Amanita::cBinop_gA3AGNA8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q8dnsLpc, HV_BINOP_MULTIPLY, 1, m, &cBinop_q8dnsLpc_sendMessage);
}

void Heavy_Amanita::cBinop_q8dnsLpc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_DwrGePqm_sendMessage);
}

void Heavy_Amanita::cBinop_DwrGePqm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_mOslDk8K_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_8N3dmu6a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_KFsa1pfD_sendMessage);
}

void Heavy_Amanita::cBinop_KFsa1pfD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7BO76Eqt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_h3acc2wQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_64vLuxG4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vf22EY0v_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t1guH8xS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_j8TE6Op8_sendMessage);
}

void Heavy_Amanita::cBinop_RdGcp2b0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_3rtS0ckT_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_PZTsrM77_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Jt1Nafyu_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_gznRhjpS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ir68aZOU_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_g8BIep9S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YGKA9PUN_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_jvCEuWVg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_grgEXmY9_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_llD3vvme_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_elq2jAMy, 0, m, &cVar_elq2jAMy_sendMessage);
}

void Heavy_Amanita::cCast_kXtPEEV5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ehXfnwgP, 1, m, &cVar_ehXfnwgP_sendMessage);
}

void Heavy_Amanita::cCast_j8TE6Op8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RdGcp2b0, HV_BINOP_MULTIPLY, 0, m, &cBinop_RdGcp2b0_sendMessage);
}

void Heavy_Amanita::cCast_64vLuxG4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_g8BIep9S, HV_BINOP_MULTIPLY, 0, m, &cBinop_g8BIep9S_sendMessage);
}

void Heavy_Amanita::cCast_h3acc2wQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jvCEuWVg, HV_BINOP_MULTIPLY, 0, m, &cBinop_jvCEuWVg_sendMessage);
}

void Heavy_Amanita::cCast_t1guH8xS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PZTsrM77, HV_BINOP_MULTIPLY, 0, m, &cBinop_PZTsrM77_sendMessage);
}

void Heavy_Amanita::cCast_vf22EY0v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_gznRhjpS, HV_BINOP_MULTIPLY, 0, m, &cBinop_gznRhjpS_sendMessage);
}

void Heavy_Amanita::cCast_7BO76Eqt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_2SNiKx7N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_78wE3QwG, 0, m, &cVar_78wE3QwG_sendMessage);
}

void Heavy_Amanita::cCast_RjYBpYkG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ehXfnwgP, 0, m, &cVar_ehXfnwgP_sendMessage);
}

void Heavy_Amanita::cMsg_NuIZKbYz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_lI35CX71, 0, m, NULL);
}

void Heavy_Amanita::cMsg_oB2pj8jm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Aa0DHPvl, 0, m, NULL);
}

void Heavy_Amanita::cMsg_ldk42X6m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_cFrnWnTx, 0, m, NULL);
}

void Heavy_Amanita::cMsg_JbGqS213_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Wpu6HN3J, 0, m, NULL);
}

void Heavy_Amanita::cMsg_S1p6YHi5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LQXG4bYE, 0, m, NULL);
}

void Heavy_Amanita::cMsg_BCJJUVv7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_clGAEhg9_sendMessage);
}

void Heavy_Amanita::cSystem_clGAEhg9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_h5jF4hus, HV_BINOP_DIVIDE, 1, m, &cBinop_h5jF4hus_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M0yhUedQ_sendMessage);
}

void Heavy_Amanita::cUnop_iEPvZcFN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_1ELkbB4P_sendMessage);
}

void Heavy_Amanita::cMsg_UV2RBCJx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_iEPvZcFN_sendMessage);
}

void Heavy_Amanita::cBinop_1ELkbB4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_h5jF4hus, HV_BINOP_DIVIDE, 0, m, &cBinop_h5jF4hus_sendMessage);
}

void Heavy_Amanita::cCast_M0yhUedQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UV2RBCJx_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_h5jF4hus_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fw7bKh6l, HV_BINOP_MULTIPLY, 1, m, &cBinop_Fw7bKh6l_sendMessage);
}

void Heavy_Amanita::cBinop_Fw7bKh6l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_T4UJpDHi_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YHINQBzg_sendMessage);
}

void Heavy_Amanita::cUnop_0QnlFcSU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_5UiVbXSY_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_cPgd1cnh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_pXCcRciW_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_T8yQgAWO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_BRvsL7zx_sendMessage);
}

void Heavy_Amanita::cBinop_BRvsL7zx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fw7bKh6l, HV_BINOP_MULTIPLY, 0, m, &cBinop_Fw7bKh6l_sendMessage);
}

void Heavy_Amanita::cBinop_mDK97zL6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_CyJ0QjM6_sendMessage);
}

void Heavy_Amanita::cBinop_CyJ0QjM6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_mZo66C3M_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_NZwTE67b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eloj9eSS, HV_BINOP_MULTIPLY, 1, m, &cBinop_eloj9eSS_sendMessage);
}

void Heavy_Amanita::cMsg_VoBiZMGY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_zJSU2qbp_sendMessage);
}

void Heavy_Amanita::cBinop_zJSU2qbp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_NZwTE67b_sendMessage);
}

void Heavy_Amanita::cMsg_AKDW1Zzb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_25E6iSC2_sendMessage);
}

void Heavy_Amanita::cBinop_25E6iSC2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HNMfxmx9, HV_BINOP_MULTIPLY, 1, m, &cBinop_HNMfxmx9_sendMessage);
}

void Heavy_Amanita::cBinop_JQVPCHhE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9mHUyddz, HV_BINOP_MULTIPLY, 1, m, &cBinop_9mHUyddz_sendMessage);
}

void Heavy_Amanita::cMsg_EhBONxKe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_fIbcFoss_sendMessage);
}

void Heavy_Amanita::cBinop_fIbcFoss_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_JQVPCHhE_sendMessage);
}

void Heavy_Amanita::cBinop_6IJMlTKc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zyRyIHOC, 1, m, &cVar_zyRyIHOC_sendMessage);
}

void Heavy_Amanita::cBinop_EqlXBTy6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lrAfLWdn, HV_BINOP_MULTIPLY, 1, m, &cBinop_lrAfLWdn_sendMessage);
}

void Heavy_Amanita::cMsg_bNIzxiKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_txJ3vMSz_sendMessage);
}

void Heavy_Amanita::cBinop_txJ3vMSz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QDHudPbl, HV_BINOP_MULTIPLY, 1, m, &cBinop_QDHudPbl_sendMessage);
}

void Heavy_Amanita::cVar_zyRyIHOC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VfFY5fK6_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_8XjPO2wm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uwtKTLiM_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_T8yQgAWO_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Wx4KMhSY_sendMessage);
}

void Heavy_Amanita::cVar_oJsHEXBd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_mDK97zL6_sendMessage);
}

void Heavy_Amanita::cCast_YHINQBzg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_cPgd1cnh_sendMessage);
}

void Heavy_Amanita::cCast_T4UJpDHi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_0QnlFcSU_sendMessage);
}

void Heavy_Amanita::cSend_5UiVbXSY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_kGqOslmt_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_pXCcRciW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PBAyjKEM_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_G8ZiXqMy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_vf6EaOk8_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_mZo66C3M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_31K1gonr_sendMessage);
}

void Heavy_Amanita::cBinop_31K1gonr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rCTCAyQt, HV_BINOP_MULTIPLY, 1, m, &cBinop_rCTCAyQt_sendMessage);
}

void Heavy_Amanita::cBinop_rCTCAyQt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_4OTXrgOj_sendMessage);
}

void Heavy_Amanita::cBinop_4OTXrgOj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_G8ZiXqMy_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_VfFY5fK6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_iOrLjc3P_sendMessage);
}

void Heavy_Amanita::cBinop_iOrLjc3P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oW1DEdP4_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UzIAjWaP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_M1T25eP1_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_otauDDxw_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xtpKVkFv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_J4Ej9wTr_sendMessage);
}

void Heavy_Amanita::cBinop_eloj9eSS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NuIZKbYz_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_HNMfxmx9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oB2pj8jm_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_9mHUyddz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ldk42X6m_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_lrAfLWdn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JbGqS213_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_QDHudPbl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_S1p6YHi5_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_neg0xMee_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_8XjPO2wm, 0, m, &cVar_8XjPO2wm_sendMessage);
}

void Heavy_Amanita::cCast_DHZwHUcP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oJsHEXBd, 1, m, &cVar_oJsHEXBd_sendMessage);
}

void Heavy_Amanita::cCast_xtpKVkFv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HNMfxmx9, HV_BINOP_MULTIPLY, 0, m, &cBinop_HNMfxmx9_sendMessage);
}

void Heavy_Amanita::cCast_otauDDxw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9mHUyddz, HV_BINOP_MULTIPLY, 0, m, &cBinop_9mHUyddz_sendMessage);
}

void Heavy_Amanita::cCast_oW1DEdP4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_UzIAjWaP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QDHudPbl, HV_BINOP_MULTIPLY, 0, m, &cBinop_QDHudPbl_sendMessage);
}

void Heavy_Amanita::cCast_J4Ej9wTr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_eloj9eSS, HV_BINOP_MULTIPLY, 0, m, &cBinop_eloj9eSS_sendMessage);
}

void Heavy_Amanita::cCast_M1T25eP1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lrAfLWdn, HV_BINOP_MULTIPLY, 0, m, &cBinop_lrAfLWdn_sendMessage);
}

void Heavy_Amanita::cCast_uwtKTLiM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_oJsHEXBd, 0, m, &cVar_oJsHEXBd_sendMessage);
}

void Heavy_Amanita::cCast_Wx4KMhSY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zyRyIHOC, 0, m, &cVar_zyRyIHOC_sendMessage);
}

void Heavy_Amanita::cMsg_Zhq6cqKI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_kOn9Jd5e, 0, m, NULL);
}

void Heavy_Amanita::cMsg_oYVdQvbI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_weSMl0da, 0, m, NULL);
}

void Heavy_Amanita::cMsg_bj84oXAg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_buQTGpbL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_jY3E3nxU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_qrBwj9PX, 0, m, NULL);
}

void Heavy_Amanita::cMsg_Hlk2fx6t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_YMO7oReX, 0, m, NULL);
}

void Heavy_Amanita::cMsg_aSBugnaS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_hxQqhhHz_sendMessage);
}

void Heavy_Amanita::cSystem_hxQqhhHz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vjnVeoYT, HV_BINOP_DIVIDE, 1, m, &cBinop_vjnVeoYT_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_q3qZyl4x_sendMessage);
}

void Heavy_Amanita::cUnop_3ctZ9qKs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_UVSCv7m4_sendMessage);
}

void Heavy_Amanita::cMsg_YcIuzwQo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_3ctZ9qKs_sendMessage);
}

void Heavy_Amanita::cBinop_UVSCv7m4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vjnVeoYT, HV_BINOP_DIVIDE, 0, m, &cBinop_vjnVeoYT_sendMessage);
}

void Heavy_Amanita::cCast_q3qZyl4x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YcIuzwQo_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_vjnVeoYT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oTVCqy6E, HV_BINOP_MULTIPLY, 1, m, &cBinop_oTVCqy6E_sendMessage);
}

void Heavy_Amanita::cBinop_oTVCqy6E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KUAXlCpa_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_XbzLheZM_sendMessage);
}

void Heavy_Amanita::cUnop_NRKcC2CR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_aLUxR5a8_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_7QMjkgnq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_nBYORCCU_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_hVeovxgl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_Yiks0tMP_sendMessage);
}

void Heavy_Amanita::cBinop_Yiks0tMP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oTVCqy6E, HV_BINOP_MULTIPLY, 0, m, &cBinop_oTVCqy6E_sendMessage);
}

void Heavy_Amanita::cBinop_QDbUpOgy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_CvCYJLHV_sendMessage);
}

void Heavy_Amanita::cBinop_CvCYJLHV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2mvmwBZa_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_L37nvIbU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XYLX0n3u, HV_BINOP_MULTIPLY, 1, m, &cBinop_XYLX0n3u_sendMessage);
}

void Heavy_Amanita::cMsg_Byb71Z6H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_MgAmmN0P_sendMessage);
}

void Heavy_Amanita::cBinop_MgAmmN0P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_L37nvIbU_sendMessage);
}

void Heavy_Amanita::cMsg_f3oOeFAB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_6aOcztre_sendMessage);
}

void Heavy_Amanita::cBinop_6aOcztre_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mkftSiJK, HV_BINOP_MULTIPLY, 1, m, &cBinop_mkftSiJK_sendMessage);
}

void Heavy_Amanita::cBinop_KKYNMzVT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6uQ7ZRw5, HV_BINOP_MULTIPLY, 1, m, &cBinop_6uQ7ZRw5_sendMessage);
}

void Heavy_Amanita::cMsg_1NNnSjYc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_GHn7jU9z_sendMessage);
}

void Heavy_Amanita::cBinop_GHn7jU9z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_KKYNMzVT_sendMessage);
}

void Heavy_Amanita::cBinop_3vZPa5i6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rTLTWntW, 1, m, &cVar_rTLTWntW_sendMessage);
}

void Heavy_Amanita::cBinop_9hiMLyKw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ip2NnjKN, HV_BINOP_MULTIPLY, 1, m, &cBinop_ip2NnjKN_sendMessage);
}

void Heavy_Amanita::cMsg_34oxGAXq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_MZR5MNjO_sendMessage);
}

void Heavy_Amanita::cBinop_MZR5MNjO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xxKFwFOC, HV_BINOP_MULTIPLY, 1, m, &cBinop_xxKFwFOC_sendMessage);
}

void Heavy_Amanita::cVar_rTLTWntW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Bbo2Ny6T_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cVar_FaEk7Hvo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2ugTyjRP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_hVeovxgl_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pmNefPGL_sendMessage);
}

void Heavy_Amanita::cVar_drMr3ygU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_QDbUpOgy_sendMessage);
}

void Heavy_Amanita::cCast_XbzLheZM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_7QMjkgnq_sendMessage);
}

void Heavy_Amanita::cCast_KUAXlCpa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_NRKcC2CR_sendMessage);
}

void Heavy_Amanita::cSend_aLUxR5a8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_rFiN8s2C_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_nBYORCCU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Qq89R9rT_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_yk41ENc9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_y7Kc0j30_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_2mvmwBZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Dsda69pA_sendMessage);
}

void Heavy_Amanita::cBinop_Dsda69pA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wd7zxKem, HV_BINOP_MULTIPLY, 1, m, &cBinop_wd7zxKem_sendMessage);
}

void Heavy_Amanita::cBinop_wd7zxKem_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_WQiy68fH_sendMessage);
}

void Heavy_Amanita::cBinop_WQiy68fH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_yk41ENc9_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_Bbo2Ny6T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_6juonJpL_sendMessage);
}

void Heavy_Amanita::cBinop_6juonJpL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KCsRKHrM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_cQiNImaP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IjA07opp_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UhE2pgao_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CZyKhL5g_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_0OI5C7Ny_sendMessage);
}

void Heavy_Amanita::cBinop_XYLX0n3u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Zhq6cqKI_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_mkftSiJK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oYVdQvbI_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_6uQ7ZRw5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bj84oXAg_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_ip2NnjKN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jY3E3nxU_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_xxKFwFOC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Hlk2fx6t_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_kdmx2dk7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FaEk7Hvo, 0, m, &cVar_FaEk7Hvo_sendMessage);
}

void Heavy_Amanita::cCast_ldqGnTbI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_drMr3ygU, 1, m, &cVar_drMr3ygU_sendMessage);
}

void Heavy_Amanita::cCast_UhE2pgao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6uQ7ZRw5, HV_BINOP_MULTIPLY, 0, m, &cBinop_6uQ7ZRw5_sendMessage);
}

void Heavy_Amanita::cCast_KCsRKHrM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_IjA07opp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ip2NnjKN, HV_BINOP_MULTIPLY, 0, m, &cBinop_ip2NnjKN_sendMessage);
}

void Heavy_Amanita::cCast_0OI5C7Ny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XYLX0n3u, HV_BINOP_MULTIPLY, 0, m, &cBinop_XYLX0n3u_sendMessage);
}

void Heavy_Amanita::cCast_cQiNImaP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xxKFwFOC, HV_BINOP_MULTIPLY, 0, m, &cBinop_xxKFwFOC_sendMessage);
}

void Heavy_Amanita::cCast_CZyKhL5g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mkftSiJK, HV_BINOP_MULTIPLY, 0, m, &cBinop_mkftSiJK_sendMessage);
}

void Heavy_Amanita::cCast_pmNefPGL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rTLTWntW, 0, m, &cVar_rTLTWntW_sendMessage);
}

void Heavy_Amanita::cCast_2ugTyjRP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_drMr3ygU, 0, m, &cVar_drMr3ygU_sendMessage);
}

void Heavy_Amanita::cMsg_W4kjJFlT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_htxrKQHE, 0, m, NULL);
}

void Heavy_Amanita::cMsg_f6L9En3d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_V6GoVAWY, 0, m, NULL);
}

void Heavy_Amanita::cMsg_VurIweBO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_VdIwY6rI, 0, m, NULL);
}

void Heavy_Amanita::cMsg_m2Ar8S5h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ZcSWcSb3, 0, m, NULL);
}

void Heavy_Amanita::cMsg_HFsXp3Sa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_c9VVLK7g, 0, m, NULL);
}

void Heavy_Amanita::cMsg_MCHZQCEr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_F0ckjmx2_sendMessage);
}

void Heavy_Amanita::cSystem_F0ckjmx2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hiXXktER, HV_BINOP_DIVIDE, 1, m, &cBinop_hiXXktER_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qMUBpMfr_sendMessage);
}

void Heavy_Amanita::cUnop_8BNGGGlw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_yuyOQ3Sw_sendMessage);
}

void Heavy_Amanita::cMsg_dM6LxLYD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_8BNGGGlw_sendMessage);
}

void Heavy_Amanita::cBinop_yuyOQ3Sw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hiXXktER, HV_BINOP_DIVIDE, 0, m, &cBinop_hiXXktER_sendMessage);
}

void Heavy_Amanita::cCast_qMUBpMfr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dM6LxLYD_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_hiXXktER_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BKVP3Qq1, HV_BINOP_MULTIPLY, 1, m, &cBinop_BKVP3Qq1_sendMessage);
}

void Heavy_Amanita::cBinop_BKVP3Qq1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ghCub8kF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_17g5u33b_sendMessage);
}

void Heavy_Amanita::cUnop_X0iIHVJ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Vk19XT6z_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_hxbXgsY0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_6IN5myQb_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_oS9f9Qi7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_K1BLQzDO_sendMessage);
}

void Heavy_Amanita::cBinop_K1BLQzDO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BKVP3Qq1, HV_BINOP_MULTIPLY, 0, m, &cBinop_BKVP3Qq1_sendMessage);
}

void Heavy_Amanita::cBinop_lr3Bpu45_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_TaluTymO_sendMessage);
}

void Heavy_Amanita::cBinop_TaluTymO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Zn3Q6vde_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_39johLsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ErSgDlfu, 1, m, &cVar_ErSgDlfu_sendMessage);
}

void Heavy_Amanita::cVar_ErSgDlfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ykIFYsOX_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_JBpHciwj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6a52w6Pm, HV_BINOP_MULTIPLY, 1, m, &cBinop_6a52w6Pm_sendMessage);
}

void Heavy_Amanita::cBinop_uuZ9sV0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_JBpHciwj_sendMessage);
}

void Heavy_Amanita::cBinop_s3bhhtro_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_s37xNgNg_sendMessage);
}

void Heavy_Amanita::cBinop_s37xNgNg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cxRVDCba, HV_BINOP_MULTIPLY, 1, m, &cBinop_cxRVDCba_sendMessage);
}

void Heavy_Amanita::cBinop_ZhC1kUSk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C7DEYaNv, HV_BINOP_MULTIPLY, 1, m, &cBinop_C7DEYaNv_sendMessage);
}

void Heavy_Amanita::cBinop_OwSYVAdi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ZhC1kUSk_sendMessage);
}

void Heavy_Amanita::cBinop_6nmv4RIE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pm1fhmCg, HV_BINOP_MULTIPLY, 1, m, &cBinop_pm1fhmCg_sendMessage);
}

void Heavy_Amanita::cMsg_bmmSXBBr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Hs7fxDEB_sendMessage);
}

void Heavy_Amanita::cBinop_Hs7fxDEB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C1gPWrnf, HV_BINOP_MULTIPLY, 1, m, &cBinop_C1gPWrnf_sendMessage);
}

void Heavy_Amanita::cVar_XsvpF8lA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VqupBTId_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_oS9f9Qi7_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jfzDtYqw_sendMessage);
}

void Heavy_Amanita::cVar_jvGrFkHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_lr3Bpu45_sendMessage);
}

void Heavy_Amanita::cCast_ghCub8kF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_X0iIHVJ9_sendMessage);
}

void Heavy_Amanita::cCast_17g5u33b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_hxbXgsY0_sendMessage);
}

void Heavy_Amanita::cSend_Vk19XT6z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1iIutyiy_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_6IN5myQb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ZmO8JWjZ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_5cXvk5bF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UV1eQdBU_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_Zn3Q6vde_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_OEMSbSYW_sendMessage);
}

void Heavy_Amanita::cBinop_OEMSbSYW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XxmsG2Ok, HV_BINOP_MULTIPLY, 1, m, &cBinop_XxmsG2Ok_sendMessage);
}

void Heavy_Amanita::cBinop_XxmsG2Ok_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_SKzs1jMU_sendMessage);
}

void Heavy_Amanita::cBinop_SKzs1jMU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_5cXvk5bF_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_ykIFYsOX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_xxZCZANT_sendMessage);
}

void Heavy_Amanita::cBinop_xxZCZANT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ZD66Veup_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_f9tuMY04_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TqkU1XLj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZxtJEy0M_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_quFzGsht_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_i3ySVEAj_sendMessage);
}

void Heavy_Amanita::cBinop_6a52w6Pm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W4kjJFlT_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_cxRVDCba_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f6L9En3d_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_C7DEYaNv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VurIweBO_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_pm1fhmCg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m2Ar8S5h_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_C1gPWrnf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HFsXp3Sa_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_uDBTFE8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XsvpF8lA, 0, m, &cVar_XsvpF8lA_sendMessage);
}

void Heavy_Amanita::cCast_lk9GBnD4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jvGrFkHg, 1, m, &cVar_jvGrFkHg_sendMessage);
}

void Heavy_Amanita::cCast_f9tuMY04_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C1gPWrnf, HV_BINOP_MULTIPLY, 0, m, &cBinop_C1gPWrnf_sendMessage);
}

void Heavy_Amanita::cCast_quFzGsht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cxRVDCba, HV_BINOP_MULTIPLY, 0, m, &cBinop_cxRVDCba_sendMessage);
}

void Heavy_Amanita::cCast_ZD66Veup_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_TqkU1XLj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pm1fhmCg, HV_BINOP_MULTIPLY, 0, m, &cBinop_pm1fhmCg_sendMessage);
}

void Heavy_Amanita::cCast_i3ySVEAj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6a52w6Pm, HV_BINOP_MULTIPLY, 0, m, &cBinop_6a52w6Pm_sendMessage);
}

void Heavy_Amanita::cCast_ZxtJEy0M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_C7DEYaNv, HV_BINOP_MULTIPLY, 0, m, &cBinop_C7DEYaNv_sendMessage);
}

void Heavy_Amanita::cCast_jfzDtYqw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ErSgDlfu, 0, m, &cVar_ErSgDlfu_sendMessage);
}

void Heavy_Amanita::cCast_VqupBTId_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jvGrFkHg, 0, m, &cVar_jvGrFkHg_sendMessage);
}

void Heavy_Amanita::cMsg_bYfSxtc4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_TFDosmS4, 0, m, NULL);
}

void Heavy_Amanita::cMsg_DIhZ4DR1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_zlx74e0K, 0, m, NULL);
}

void Heavy_Amanita::cMsg_d8yTWwtU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_8ExBKhmi, 0, m, NULL);
}

void Heavy_Amanita::cMsg_HIsBsMjn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_FWudTKIJ, 0, m, NULL);
}

void Heavy_Amanita::cMsg_kkgxMNvz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_3OZ2vNjZ, 0, m, NULL);
}

void Heavy_Amanita::cMsg_poCFJ7p3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ywQKSXTS_sendMessage);
}

void Heavy_Amanita::cSystem_ywQKSXTS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pFPhPqKV, HV_BINOP_DIVIDE, 1, m, &cBinop_pFPhPqKV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Hh1KSJzj_sendMessage);
}

void Heavy_Amanita::cUnop_kvD9H4Rl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_XkEhJ8Rm_sendMessage);
}

void Heavy_Amanita::cMsg_m7fqiBCf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_kvD9H4Rl_sendMessage);
}

void Heavy_Amanita::cBinop_XkEhJ8Rm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pFPhPqKV, HV_BINOP_DIVIDE, 0, m, &cBinop_pFPhPqKV_sendMessage);
}

void Heavy_Amanita::cCast_Hh1KSJzj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m7fqiBCf_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_pFPhPqKV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_S7KoV9Ta, HV_BINOP_MULTIPLY, 1, m, &cBinop_S7KoV9Ta_sendMessage);
}

void Heavy_Amanita::cBinop_S7KoV9Ta_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_wpCCq1Mt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_jTw7BPD0_sendMessage);
}

void Heavy_Amanita::cUnop_QQARDyW4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_wPun3Eed_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cUnop_jGqaBov2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_SUmx9LEo_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_OCzxjpuR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_8KJXjmLw_sendMessage);
}

void Heavy_Amanita::cBinop_8KJXjmLw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_S7KoV9Ta, HV_BINOP_MULTIPLY, 0, m, &cBinop_S7KoV9Ta_sendMessage);
}

void Heavy_Amanita::cBinop_cenAykaU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_r9VlAdqu_sendMessage);
}

void Heavy_Amanita::cBinop_r9VlAdqu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dn6NzinP_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_ZCdmmZt7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3udqUrUR, 1, m, &cVar_3udqUrUR_sendMessage);
}

void Heavy_Amanita::cVar_3udqUrUR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_oq4nki2p_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_ipmlZXso_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bnSb1tkr, HV_BINOP_MULTIPLY, 1, m, &cBinop_bnSb1tkr_sendMessage);
}

void Heavy_Amanita::cBinop_u2kHgLsh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ipmlZXso_sendMessage);
}

void Heavy_Amanita::cBinop_AjhiW0NE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_1a5IJFyY_sendMessage);
}

void Heavy_Amanita::cBinop_1a5IJFyY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_prsSk5Z9, HV_BINOP_MULTIPLY, 1, m, &cBinop_prsSk5Z9_sendMessage);
}

void Heavy_Amanita::cBinop_lkrtESDB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3uw6e2lX, HV_BINOP_MULTIPLY, 1, m, &cBinop_3uw6e2lX_sendMessage);
}

void Heavy_Amanita::cBinop_pEHKL3nv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_lkrtESDB_sendMessage);
}

void Heavy_Amanita::cBinop_K9Vi0qC0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RSpsSAM2, HV_BINOP_MULTIPLY, 1, m, &cBinop_RSpsSAM2_sendMessage);
}

void Heavy_Amanita::cMsg_iNfvTgEG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_VMDE1s4M_sendMessage);
}

void Heavy_Amanita::cBinop_VMDE1s4M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fWYUPbTI, HV_BINOP_MULTIPLY, 1, m, &cBinop_fWYUPbTI_sendMessage);
}

void Heavy_Amanita::cVar_XpXSGigW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_elAw6SWS_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_OCzxjpuR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mjDXZkuh_sendMessage);
}

void Heavy_Amanita::cVar_GXIerzKx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_cenAykaU_sendMessage);
}

void Heavy_Amanita::cCast_wpCCq1Mt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_QQARDyW4_sendMessage);
}

void Heavy_Amanita::cCast_jTw7BPD0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_jGqaBov2_sendMessage);
}

void Heavy_Amanita::cSend_wPun3Eed_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IQ7vJ75r_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_SUmx9LEo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_L7zR777k_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_MjLlhxgW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_UcoQpveB_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_dn6NzinP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_jUE351Pk_sendMessage);
}

void Heavy_Amanita::cBinop_jUE351Pk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pVP9yrNF, HV_BINOP_MULTIPLY, 1, m, &cBinop_pVP9yrNF_sendMessage);
}

void Heavy_Amanita::cBinop_pVP9yrNF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_zU5EQixh_sendMessage);
}

void Heavy_Amanita::cBinop_zU5EQixh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_MjLlhxgW_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_oq4nki2p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_wVW6VGgw_sendMessage);
}

void Heavy_Amanita::cBinop_wVW6VGgw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KUPuqOhQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dZzImikN_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_CnxXAUkj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_MWLvBNRW_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VAtnBAqx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fcNTzOYf_sendMessage);
}

void Heavy_Amanita::cBinop_bnSb1tkr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_bYfSxtc4_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_prsSk5Z9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DIhZ4DR1_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_3uw6e2lX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_d8yTWwtU_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_RSpsSAM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HIsBsMjn_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_fWYUPbTI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_kkgxMNvz_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_O1pVRJeV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GXIerzKx, 1, m, &cVar_GXIerzKx_sendMessage);
}

void Heavy_Amanita::cCast_OiMBTNOi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XpXSGigW, 0, m, &cVar_XpXSGigW_sendMessage);
}

void Heavy_Amanita::cCast_VAtnBAqx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_prsSk5Z9, HV_BINOP_MULTIPLY, 0, m, &cBinop_prsSk5Z9_sendMessage);
}

void Heavy_Amanita::cCast_KUPuqOhQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cCast_dZzImikN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fWYUPbTI, HV_BINOP_MULTIPLY, 0, m, &cBinop_fWYUPbTI_sendMessage);
}

void Heavy_Amanita::cCast_CnxXAUkj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RSpsSAM2, HV_BINOP_MULTIPLY, 0, m, &cBinop_RSpsSAM2_sendMessage);
}

void Heavy_Amanita::cCast_MWLvBNRW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_3uw6e2lX, HV_BINOP_MULTIPLY, 0, m, &cBinop_3uw6e2lX_sendMessage);
}

void Heavy_Amanita::cCast_fcNTzOYf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bnSb1tkr, HV_BINOP_MULTIPLY, 0, m, &cBinop_bnSb1tkr_sendMessage);
}

void Heavy_Amanita::cCast_elAw6SWS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_GXIerzKx, 0, m, &cVar_GXIerzKx_sendMessage);
}

void Heavy_Amanita::cCast_mjDXZkuh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3udqUrUR, 0, m, &cVar_3udqUrUR_sendMessage);
}

void Heavy_Amanita::cSend_iyii4Vyi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_n4fML03R_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_RlQBBopO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ytJue62C, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_EjSa4jXE, m);
}

void Heavy_Amanita::cMsg_UCa4ug8B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.99999f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ytJue62C, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_EjSa4jXE, m);
}

void Heavy_Amanita::cBinop_rgbYl6ek_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 10000.0f, 0, m, &cBinop_Z1PdbpSA_sendMessage);
}

void Heavy_Amanita::cBinop_B9vyuz53_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XSxbjpms_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_aUHPEl1B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.75f);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ytJue62C, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_EjSa4jXE, m);
}

void Heavy_Amanita::cMsg_MSVyCnS5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 60000.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_B9vyuz53_sendMessage);
}

void Heavy_Amanita::cCast_6KUyaOqk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rgbYl6ek, HV_BINOP_DIVIDE, 0, m, &cBinop_rgbYl6ek_sendMessage);
}

void Heavy_Amanita::cCast_eXnXoBrb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rgbYl6ek, HV_BINOP_DIVIDE, 1, m, &cBinop_rgbYl6ek_sendMessage);
}

void Heavy_Amanita::cMsg_YXsAy00L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_j0RZxogU, 1, m, &cIf_j0RZxogU_sendMessage);
}

void Heavy_Amanita::cMsg_Pn6koOBA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_j0RZxogU, 1, m, &cIf_j0RZxogU_sendMessage);
}

void Heavy_Amanita::cCast_VfKssriL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_W9k8Cr6z_onMessage(_c, NULL, 0, m, NULL);
  cIf_onMessage(_c, &Context(_c)->cIf_JjhH9bh8, 1, m, &cIf_JjhH9bh8_sendMessage);
}

void Heavy_Amanita::cCast_byiHTFay_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_WXgRfl7E, 0, m, &cVar_WXgRfl7E_sendMessage);
}

void Heavy_Amanita::cBinop_Vk3D8jrE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 10000.0f, 0, m, &cBinop_hGQOmSvX_sendMessage);
}

void Heavy_Amanita::cBinop_SziNsBJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pNyvNNbn, 0, m, &cVar_pNyvNNbn_sendMessage);
}

void Heavy_Amanita::cCast_672by7bN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Vk3D8jrE, HV_BINOP_DIVIDE, 0, m, &cBinop_Vk3D8jrE_sendMessage);
}

void Heavy_Amanita::cCast_w0lB3dSW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Vk3D8jrE, HV_BINOP_DIVIDE, 1, m, &cBinop_Vk3D8jrE_sendMessage);
}

void Heavy_Amanita::cMsg_tDdDD4UQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_gsiISpIj, 1, m, &cIf_gsiISpIj_sendMessage);
}

void Heavy_Amanita::cMsg_96dl8e4b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_gsiISpIj, 1, m, &cIf_gsiISpIj_sendMessage);
}

void Heavy_Amanita::cCast_AJKsYRXx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UTdPmCbg, 0, m, &cVar_UTdPmCbg_sendMessage);
}

void Heavy_Amanita::cCast_2Nsn6VXd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_uehUip2g_onMessage(_c, NULL, 0, m, NULL);
  cIf_onMessage(_c, &Context(_c)->cIf_qujMuSTb, 1, m, &cIf_qujMuSTb_sendMessage);
}

void Heavy_Amanita::cBinop_YnSKCBWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_WvLZ5v4h_sendMessage);
}

void Heavy_Amanita::cBinop_WvLZ5v4h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_T0zEzU4H, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_D4fXIbEM, m);
}

void Heavy_Amanita::cBinop_iAIO9rjr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XJKCNuXz_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_BzswAr1C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 12.0f, 0, m, &cBinop_iAIO9rjr_sendMessage);
}

void Heavy_Amanita::cMsg_1yjGrUbp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 1, m, &cTabwrite_HK8qDOvY_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 1, m, &cTabwrite_Y2wpYmJK_sendMessage);
}

void Heavy_Amanita::cMsg_i20Zzg8L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 1, m, &cTabwrite_HK8qDOvY_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 1, m, &cTabwrite_Y2wpYmJK_sendMessage);
}

void Heavy_Amanita::cMsg_eQXwYyLH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 1, m, &cTabwrite_HK8qDOvY_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 1, m, &cTabwrite_Y2wpYmJK_sendMessage);
}

void Heavy_Amanita::cMsg_7UVp0api_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 1, m, &cTabwrite_HK8qDOvY_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 1, m, &cTabwrite_Y2wpYmJK_sendMessage);
}

void Heavy_Amanita::cMsg_BVSykfPL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 4.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 1, m, &cTabwrite_HK8qDOvY_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 1, m, &cTabwrite_Y2wpYmJK_sendMessage);
}

void Heavy_Amanita::cMsg_504FpuJu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 1, m, &cTabwrite_HK8qDOvY_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 1, m, &cTabwrite_Y2wpYmJK_sendMessage);
}

void Heavy_Amanita::cMsg_ChD0zQFJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 1, m, &cTabwrite_HK8qDOvY_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 1, m, &cTabwrite_Y2wpYmJK_sendMessage);
}

void Heavy_Amanita::cMsg_UaVkAFG6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 7.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 1, m, &cTabwrite_HK8qDOvY_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 1, m, &cTabwrite_Y2wpYmJK_sendMessage);
}

void Heavy_Amanita::cMsg_TBO6DnEj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 16.0f);
  cSwitchcase_p9WH7d2b_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HuvpyltN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_MrPoMXu0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cSwitchcase_p9WH7d2b_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HuvpyltN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_rYLTtZbc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 4.0f);
  cSwitchcase_p9WH7d2b_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HuvpyltN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_f05UPKm1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cSwitchcase_p9WH7d2b_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HuvpyltN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_d5H1TgxN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cSwitchcase_p9WH7d2b_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HuvpyltN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_AHQN5XrX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.5f);
  cSwitchcase_p9WH7d2b_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HuvpyltN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_7j9jEVb7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  cSwitchcase_p9WH7d2b_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HuvpyltN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_4OyJlgVx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 1, m, &cTabwrite_szFPi80r_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 1, m, &cTabwrite_pjSiPWTR_sendMessage);
}

void Heavy_Amanita::cMsg_2XU8443V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 1, m, &cTabwrite_szFPi80r_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 1, m, &cTabwrite_pjSiPWTR_sendMessage);
}

void Heavy_Amanita::cMsg_AQEscWBP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 1, m, &cTabwrite_szFPi80r_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 1, m, &cTabwrite_pjSiPWTR_sendMessage);
}

void Heavy_Amanita::cMsg_4BETLxZd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 3.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 1, m, &cTabwrite_szFPi80r_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 1, m, &cTabwrite_pjSiPWTR_sendMessage);
}

void Heavy_Amanita::cMsg_PmK9EDJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 4.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 1, m, &cTabwrite_szFPi80r_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 1, m, &cTabwrite_pjSiPWTR_sendMessage);
}

void Heavy_Amanita::cMsg_4zNU5lLR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 1, m, &cTabwrite_szFPi80r_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 1, m, &cTabwrite_pjSiPWTR_sendMessage);
}

void Heavy_Amanita::cMsg_ag27757b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 6.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 1, m, &cTabwrite_szFPi80r_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 1, m, &cTabwrite_pjSiPWTR_sendMessage);
}

void Heavy_Amanita::cMsg_Gz7aH4Wi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 7.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 1, m, &cTabwrite_szFPi80r_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 1, m, &cTabwrite_pjSiPWTR_sendMessage);
}

void Heavy_Amanita::cMsg_HX0bbpFd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_HK8qDOvY, 1, m, &cTabwrite_HK8qDOvY_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_Y2wpYmJK, 1, m, &cTabwrite_Y2wpYmJK_sendMessage);
}

void Heavy_Amanita::cMsg_KlPBQ1dx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.125f);
  cSwitchcase_p9WH7d2b_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HuvpyltN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_8jlwKa7s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0625f);
  cSwitchcase_p9WH7d2b_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_HuvpyltN_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_QoqDomOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 8.0f);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_szFPi80r, 1, m, &cTabwrite_szFPi80r_sendMessage);
  cTabwrite_onMessage(_c, &Context(_c)->cTabwrite_pjSiPWTR, 1, m, &cTabwrite_pjSiPWTR_sendMessage);
}

void Heavy_Amanita::cCast_CcqKs2en_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_SdVdhSU7_sendMessage(_c, 0, m);
  cMsg_KlPBQ1dx_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_1kx8gzpL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gviNbh4b_sendMessage(_c, 0, m);
  cMsg_MrPoMXu0_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_B5i95j23_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xBxEpih9_sendMessage(_c, 0, m);
  cMsg_f05UPKm1_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_cKNFyGxq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1yjGrUbp_sendMessage(_c, 0, m);
  cMsg_4OyJlgVx_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_ctIlRSUm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4BETLxZd_sendMessage(_c, 0, m);
  cMsg_7UVp0api_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_NBuNmOjw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BVSykfPL_sendMessage(_c, 0, m);
  cMsg_PmK9EDJV_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_O8fFO6ZP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rYLTtZbc_sendMessage(_c, 0, m);
  cMsg_UqdBrnOy_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_CoDJkd31_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Gz7aH4Wi_sendMessage(_c, 0, m);
  cMsg_UaVkAFG6_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_PyPb7wrn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QoqDomOp_sendMessage(_c, 0, m);
  cMsg_HX0bbpFd_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_emcpTqi5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_i20Zzg8L_sendMessage(_c, 0, m);
  cMsg_2XU8443V_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_pBz3WxMw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_AHQN5XrX_sendMessage(_c, 0, m);
  cMsg_RqiX0U03_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_6RfmS22H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eQXwYyLH_sendMessage(_c, 0, m);
  cMsg_AQEscWBP_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_rBpm0LWs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_WWUP8Au0_sendMessage(_c, 0, m);
  cMsg_7j9jEVb7_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_aG1FA7fu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_d5H1TgxN_sendMessage(_c, 0, m);
  cMsg_p6ymFTcl_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_PdOBt8n4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_504FpuJu_sendMessage(_c, 0, m);
  cMsg_4zNU5lLR_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_gAxbMalv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TBO6DnEj_sendMessage(_c, 0, m);
  cMsg_yXLEnn0f_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_GavdTrJG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8jlwKa7s_sendMessage(_c, 0, m);
  cMsg_L9lYhoHA_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_JTGjA7oS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ag27757b_sendMessage(_c, 0, m);
  cMsg_ChD0zQFJ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::hTable_0aaO9lok_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::hTable_3RA32hD1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::hTable_lKxptWue_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::hTable_zT628TFP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cMsg_yXLEnn0f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.6667f);
  cSwitchcase_GDmq9S4d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_JH42YvgL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_gviNbh4b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 5.3333f);
  cSwitchcase_GDmq9S4d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_JH42YvgL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_UqdBrnOy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 2.6667f);
  cSwitchcase_GDmq9S4d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_JH42YvgL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_xBxEpih9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.3333f);
  cSwitchcase_GDmq9S4d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_JH42YvgL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_p6ymFTcl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.6667f);
  cSwitchcase_GDmq9S4d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_JH42YvgL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_RqiX0U03_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.3333f);
  cSwitchcase_GDmq9S4d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_JH42YvgL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_WWUP8Au0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.1667f);
  cSwitchcase_GDmq9S4d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_JH42YvgL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_SdVdhSU7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0833f);
  cSwitchcase_GDmq9S4d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_JH42YvgL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cMsg_L9lYhoHA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0417f);
  cSwitchcase_GDmq9S4d_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_JH42YvgL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cBinop_XuB69vu0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wn2wpJG6, 0, m, &cVar_wn2wpJG6_sendMessage);
}

void Heavy_Amanita::cBinop_nUxwgGXu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_DkkwOVj6_sendMessage);
}

void Heavy_Amanita::cBinop_DkkwOVj6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_pcjsmmTV, 1, m, &cIf_pcjsmmTV_sendMessage);
}

void Heavy_Amanita::cBinop_TdJkekRu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5988.0f, 0, m, &cBinop_BzswAr1C_sendMessage);
}

void Heavy_Amanita::cMsg_muVxIkLM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_pcjsmmTV, 0, m, &cIf_pcjsmmTV_sendMessage);
}

void Heavy_Amanita::cSend_XJKCNuXz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DaOOK1hm_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_bBijY2Lz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_QGBh2ino_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_f2uERcBx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_myakU18V_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_dAYiRW6g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 12.0f, 0, m, &cBinop_f2uERcBx_sendMessage);
}

void Heavy_Amanita::cBinop_2ilEKgby_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 5988.0f, 0, m, &cBinop_dAYiRW6g_sendMessage);
}

void Heavy_Amanita::cSend_myakU18V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LmxngKn6_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_iNJrGUT9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_St0ilRHj_sendMessage);
}

void Heavy_Amanita::cBinop_St0ilRHj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_4MfLNJrP, 1, m, &cIf_4MfLNJrP_sendMessage);
}

void Heavy_Amanita::cMsg_JPArRe7e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_4MfLNJrP, 0, m, &cIf_4MfLNJrP_sendMessage);
}

void Heavy_Amanita::cSend_5p8LqChe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_AGb8vbvl_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_LsbyP52R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SCekO3X5_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_RZblN9Op_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_pjPJ3AKc, 0, m, &cVar_pjPJ3AKc_sendMessage);
}

void Heavy_Amanita::cSend_XSxbjpms_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_A9uyobSE_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_WCYdBIDI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_yllxvLov_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_v6tVtykL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_GhDR3ftn_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_sKy8SuOa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_5B3erLvY_sendMessage);
}

void Heavy_Amanita::cBinop_5B3erLvY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_emc6lz7h, m);
}

void Heavy_Amanita::cSend_9zJspgeh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_zL177BF4_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_1QPPKubf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_xcFgIyHF_sendMessage);
}

void Heavy_Amanita::cBinop_xcFgIyHF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pkx9M04U_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wfn8Eg9p_sendMessage);
}

void Heavy_Amanita::cMsg_PyDjED3V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 15.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_8SkmuxFW, 0, m, NULL);
}

void Heavy_Amanita::cSend_kkhRTxT8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pfxskCAr_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cCast_8zcRzvpx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mnpkdwx2, 0, m, &cVar_mnpkdwx2_sendMessage);
}

void Heavy_Amanita::cCast_OHKRpkiu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Jm6Lu2I4, 1, m, &cIf_Jm6Lu2I4_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_1QPPKubf_sendMessage);
}

void Heavy_Amanita::cCast_pkx9M04U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qgEuZVku, 1, m, &cIf_qgEuZVku_sendMessage);
}

void Heavy_Amanita::cCast_wfn8Eg9p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lRZSmw0e, 0, m, &cVar_lRZSmw0e_sendMessage);
}

void Heavy_Amanita::cMsg_pqaNUXI1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_OsHl4qwB, 1, m, &cIf_OsHl4qwB_sendMessage);
}

void Heavy_Amanita::cMsg_9HEYlNvM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_6a3ERt8F, 1, m, &cIf_6a3ERt8F_sendMessage);
}

void Heavy_Amanita::cMsg_2zgdmwQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_6a3ERt8F, 1, m, &cIf_6a3ERt8F_sendMessage);
}

void Heavy_Amanita::cBinop_Ee8pFdQ1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_oImV6GzW_sendMessage);
}

void Heavy_Amanita::cBinop_oImV6GzW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_t5xdfemY_sendMessage);
}

void Heavy_Amanita::cBinop_t5xdfemY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 4.0f, 0, m, &cBinop_SNTFEMgb_sendMessage);
}

void Heavy_Amanita::cMsg_2nB3tCc7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 50.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_KQ4G5hKg, 0, m, NULL);
}

void Heavy_Amanita::cMsg_HLMv6DbJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 50.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_LnxXdeKH, 0, m, NULL);
}

void Heavy_Amanita::cBinop_tLjOVjic_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2nB3tCc7_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_SNTFEMgb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HLMv6DbJ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_yjksi2pF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_OsHl4qwB, 1, m, &cIf_OsHl4qwB_sendMessage);
}

void Heavy_Amanita::cSend_fHmP7euW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_TylIqAaO_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_PDfGHwcE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_8U45NROF, 0, m, &cIf_8U45NROF_sendMessage);
}

void Heavy_Amanita::cMsg_6K6ixUoP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_mxodpnmT, 0, m, &cIf_mxodpnmT_sendMessage);
}

void Heavy_Amanita::cSend_GhDR3ftn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_svCQQ16O_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cSend_yllxvLov_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s3iG8Fg5_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cMsg_Luy3yby7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_jKwJVTtk, 0, m, NULL);
}

void Heavy_Amanita::cMsg_LqzvLkwK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 45.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_glrXX9QS, 0, m, NULL);
}

void Heavy_Amanita::cBinop_FNRWNKmK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_C2vTMq6d_sendMessage);
}

void Heavy_Amanita::cBinop_C2vTMq6d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_uQQmbcTj, 1, m);
}

void Heavy_Amanita::cBinop_uGkL3Ccm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_bl5GVtSt_sendMessage);
}

void Heavy_Amanita::cBinop_bl5GVtSt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Luy3yby7_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_cOrhvC6q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_1i9Sxs42_sendMessage);
}

void Heavy_Amanita::cBinop_1i9Sxs42_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LqzvLkwK_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cBinop_U2pQhh8V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0HQunnwa, m);
}

void Heavy_Amanita::cVar_PsCF0hw6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_Amanita::cReceive_n4fML03R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 7.999f, 0, m, &cBinop_SziNsBJf_sendMessage);
}

void Heavy_Amanita::cReceive_aOQPXmzI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_achn0gjH_sendMessage(_c, 0, m);
  cMsg_Mx8gnXRW_sendMessage(_c, 0, m);
  cMsg_jQGDHvGL_sendMessage(_c, 0, m);
  cMsg_WiYLPsqi_sendMessage(_c, 0, m);
  cMsg_MI1lnbiw_sendMessage(_c, 0, m);
  cMsg_GbyUHLLW_sendMessage(_c, 0, m);
  cMsg_4wQWaubf_sendMessage(_c, 0, m);
  cMsg_oFczL6Er_sendMessage(_c, 0, m);
  cMsg_BCJJUVv7_sendMessage(_c, 0, m);
  cMsg_aSBugnaS_sendMessage(_c, 0, m);
  cMsg_MCHZQCEr_sendMessage(_c, 0, m);
  cMsg_poCFJ7p3_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_wBbDrGfD, 0, m, &cVar_wBbDrGfD_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_JXqf28TT, 0, m, &cVar_JXqf28TT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_W6DOs2xA, 0, m, &cVar_W6DOs2xA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_DJOFLLsK, 0, m, &cVar_DJOFLLsK_sendMessage);
  cMsg_qzSZVv9u_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_aRokHCKU, 0, m, &cVar_aRokHCKU_sendMessage);
  cMsg_f6sfu5N1_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_iUi1VxCm, 0, m, &cVar_iUi1VxCm_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_OXIig0Zw, 0, m, &cVar_OXIig0Zw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ITUJeBKF, 0, m, &cVar_ITUJeBKF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_zGESBpHi, 0, m, &cVar_zGESBpHi_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_elq2jAMy, 0, m, &cVar_elq2jAMy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8XjPO2wm, 0, m, &cVar_8XjPO2wm_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FaEk7Hvo, 0, m, &cVar_FaEk7Hvo_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XsvpF8lA, 0, m, &cVar_XsvpF8lA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XpXSGigW, 0, m, &cVar_XpXSGigW_sendMessage);
  cMsg_NMHotu6U_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_tGWTRVXs, 0, m, &cVar_tGWTRVXs_sendMessage);
  cSwitchcase_YC1bFw3s_onMessage(_c, NULL, 0, m, NULL);
  cMsg_IIxsofzT_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_8SSe7HhU, 0, m, &cVar_8SSe7HhU_sendMessage);
  cSwitchcase_unC1U6pc_onMessage(_c, NULL, 0, m, NULL);
  cSwitchcase_IT8I7bqQ_onMessage(_c, NULL, 0, m, NULL);
  cMsg_BXn54JXH_sendMessage(_c, 0, m);
  cMsg_m0G69kd4_sendMessage(_c, 0, m);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UpilloUV_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_M9i3YA5k, 0, m, &cVar_M9i3YA5k_sendMessage);
  cMsg_IDpskVPl_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_1lGTtgI6, 0, m, &cVar_1lGTtgI6_sendMessage);
  cMsg_s9EpQIZd_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_jfpMPBBI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_RewZ5Rzv, HV_BINOP_MULTIPLY, 0, m, &cBinop_RewZ5Rzv_sendMessage);
}

void Heavy_Amanita::cReceive_CsTjViRt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_1eZYen7B_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_fBuuBUW1_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_8FjkudNK_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_xc33Exli_sendMessage);
}

void Heavy_Amanita::cReceive_31yfbJl0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_07jQXBGT_sendMessage);
  cMsg_yxmcss4Z_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_35FFhBxp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JnIrOoPj, HV_BINOP_MULTIPLY, 0, m, &cBinop_JnIrOoPj_sendMessage);
}

void Heavy_Amanita::cReceive_KjvNFaM5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Oc3DC8jE_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_4BwJPVA5_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ALZIVxDK_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_cg8MMEkC_sendMessage);
}

void Heavy_Amanita::cReceive_Do1maH8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_mTPMFkld_sendMessage);
  cMsg_izfWHeiw_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_lFwEJ9Bi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bn8PEpaY, HV_BINOP_MULTIPLY, 0, m, &cBinop_bn8PEpaY_sendMessage);
}

void Heavy_Amanita::cReceive_msdOqi9B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_lWSERO5U_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_RMH22TQc_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_UoZ6I4rz_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_vcBWf3tE_sendMessage);
}

void Heavy_Amanita::cReceive_P4ylzSz7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_9lRi6WiU_sendMessage);
  cMsg_pVTRrNlF_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_PI73sjLT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fWjHbOGB, HV_BINOP_MULTIPLY, 0, m, &cBinop_fWjHbOGB_sendMessage);
}

void Heavy_Amanita::cReceive_K7RqGxIH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_GPrMoPFA_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_K650c3K2_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_g03G8Fd3_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_XalZ0rZG_sendMessage);
}

void Heavy_Amanita::cReceive_BatpQfm2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_JZjlSuDb_sendMessage);
  cMsg_O9havYtR_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_DaOOK1hm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_PYBCBxlj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cReceive_QGBh2ino_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 7.999f, 0, m, &cBinop_RZblN9Op_sendMessage);
}

void Heavy_Amanita::cReceive_LmxngKn6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_4W5BxEPl_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cReceive_AGb8vbvl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VhT60U7l, 0, m, &cVar_VhT60U7l_sendMessage);
}

void Heavy_Amanita::cReceive_SCekO3X5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2Nsn6VXd_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AJKsYRXx_sendMessage);
}

void Heavy_Amanita::cReceive_A9uyobSE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rgbYl6ek, HV_BINOP_DIVIDE, 0, m, &cBinop_rgbYl6ek_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Vk3D8jrE, HV_BINOP_DIVIDE, 0, m, &cBinop_Vk3D8jrE_sendMessage);
}

void Heavy_Amanita::cReceive_zL177BF4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hBDxkhOL, 0, m, &cVar_hBDxkhOL_sendMessage);
}

void Heavy_Amanita::cReceive_pfxskCAr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_VfKssriL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_byiHTFay_sendMessage);
}

void Heavy_Amanita::cReceive_thjGRNgY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_2PmnplbD_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 2.0f, 0, m, &cBinop_Ip4uNYCa_sendMessage);
}

void Heavy_Amanita::cReceive_lxZ4QlUc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_XuB69vu0_sendMessage);
}

void Heavy_Amanita::cReceive_WOCTtCYd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_YnSKCBWs_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_DpnTZQVJ, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_IN81twZO, m);
}

void Heavy_Amanita::cReceive_ZMydx86Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eioMluFz, m);
  sVarf_onMessage(_c, &Context(_c)->sVarf_1XzJXWBZ, m);
}

void Heavy_Amanita::cReceive_grajGkR8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_XsvpF8lA, 0, m, &cVar_XsvpF8lA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_JXqf28TT, 0, m, &cVar_JXqf28TT_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_W6DOs2xA, 0, m, &cVar_W6DOs2xA_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_DJOFLLsK, 0, m, &cVar_DJOFLLsK_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_wBbDrGfD, 0, m, &cVar_wBbDrGfD_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_XpXSGigW, 0, m, &cVar_XpXSGigW_sendMessage);
}

void Heavy_Amanita::cReceive_2Oj8louf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_MSVyCnS5_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_Y5Db9J1n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NQqDaLFu, 0, m, &cVar_NQqDaLFu_sendMessage);
}

void Heavy_Amanita::cReceive_e0Qx3AKL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_xAlGdWW8, 0, m, &cVar_xAlGdWW8_sendMessage);
}

void Heavy_Amanita::cReceive_aD2jSlq1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_1QPPKubf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_OHKRpkiu_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8zcRzvpx_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_Jm6Lu2I4, 1, m, &cIf_Jm6Lu2I4_sendMessage);
  cSend_fHmP7euW_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_TylIqAaO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_zkB5lih4_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cReceive_RJ4Q6DXo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_Jm6Lu2I4, 0, m, &cIf_Jm6Lu2I4_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_2ilEKgby_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_mnpkdwx2, 1, m, &cVar_mnpkdwx2_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 0.75f, 0, m, &cBinop_WCYdBIDI_sendMessage);
  cSend_iyii4Vyi_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_mm5Y14SE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lRZSmw0e, 1, m, &cVar_lRZSmw0e_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_qgEuZVku, 0, m, &cIf_qgEuZVku_sendMessage);
}

void Heavy_Amanita::cReceive_6Q4MM352_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_4A3GNMu5_onMessage(_c, NULL, 0, m, NULL);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_nUxwgGXu_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_8U45NROF, 1, m, &cIf_8U45NROF_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_mxodpnmT, 1, m, &cIf_mxodpnmT_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_iNJrGUT9_sendMessage);
}

void Heavy_Amanita::cReceive_BDxirPLs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_sKy8SuOa_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_2ki4AZqC, m);
}

void Heavy_Amanita::cReceive_w9TF6WXB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_mRsSDDLP_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_Amanita::cReceive_s3iG8Fg5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_uBiX31xp, m);
}

void Heavy_Amanita::cReceive_svCQQ16O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QfZbwEeL, m);
}

void Heavy_Amanita::cReceive_OomGiDn8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_R0rKPhyM, 0, m, &cVar_R0rKPhyM_sendMessage);
}

void Heavy_Amanita::cReceive_aiE1Bh68_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HMgSjnvj, 0, m, &cVar_HMgSjnvj_sendMessage);
}

void Heavy_Amanita::cReceive_Go5JYiWi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_AcBvOwgf, HV_BINOP_MULTIPLY, 0, m, &cBinop_AcBvOwgf_sendMessage);
}

void Heavy_Amanita::cReceive_HjEn5eo8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_UQfJPeq9_sendMessage(_c, 0, m);
  cMsg_uaVQel2V_sendMessage(_c, 0, m);
  cMsg_AKCpctiU_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_CEA2ldbK_sendMessage);
}

void Heavy_Amanita::cReceive_lgtUU3KA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_B7ohOS63_sendMessage);
  cMsg_c2mzWr0T_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_OSuLBsdM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GBUbdToO, HV_BINOP_MULTIPLY, 0, m, &cBinop_GBUbdToO_sendMessage);
}

void Heavy_Amanita::cReceive_8MQkeTC4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jceof3LP_sendMessage(_c, 0, m);
  cMsg_xGS3CjFp_sendMessage(_c, 0, m);
  cMsg_3CKdtog0_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_73DxjHEg_sendMessage);
}

void Heavy_Amanita::cReceive_zNCC7bGH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_DcDqhg4O_sendMessage);
  cMsg_hXlzOEux_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_Mfpme0Q5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_2ayhOTGD, HV_BINOP_MULTIPLY, 0, m, &cBinop_2ayhOTGD_sendMessage);
}

void Heavy_Amanita::cReceive_6ka01kWp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qxchIvhj_sendMessage(_c, 0, m);
  cMsg_7wblJcR7_sendMessage(_c, 0, m);
  cMsg_55v8xPra_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_Ytf8xCga_sendMessage);
}

void Heavy_Amanita::cReceive_QwvaQ0JJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_VIM9cU9z_sendMessage);
  cMsg_2f9sIMHO_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_4NxPVPAE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q8dnsLpc, HV_BINOP_MULTIPLY, 0, m, &cBinop_q8dnsLpc_sendMessage);
}

void Heavy_Amanita::cReceive_e2C0nv9c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CThUAIZn_sendMessage(_c, 0, m);
  cMsg_qAqPqxbM_sendMessage(_c, 0, m);
  cMsg_3tEhhdHR_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_HkuKCUbH_sendMessage);
}

void Heavy_Amanita::cReceive_Z8lujGCX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_huBeJiJ7_sendMessage);
  cMsg_FYgkvOEZ_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_IyShKw1q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_AZzJYvz0, 1, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_FNRWNKmK_sendMessage);
}

void Heavy_Amanita::cReceive_xMb0j1XO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zGESBpHi, 0, m, &cVar_zGESBpHi_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_elq2jAMy, 0, m, &cVar_elq2jAMy_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_OXIig0Zw, 0, m, &cVar_OXIig0Zw_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ITUJeBKF, 0, m, &cVar_ITUJeBKF_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_FaEk7Hvo, 0, m, &cVar_FaEk7Hvo_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_8XjPO2wm, 0, m, &cVar_8XjPO2wm_sendMessage);
}

void Heavy_Amanita::cReceive_KS2bl9cG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pZyTDwKC_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rQKUQhDb_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kXtPEEV5_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_llD3vvme_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_pGAw3VCe_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OVXC77JY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GD8iDa6c_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RSJb9lvj_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ldqGnTbI_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_kdmx2dk7_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DHZwHUcP_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_neg0xMee_sendMessage);
}

void Heavy_Amanita::cReceive_Qhh2poum_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xt5MILTq_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Ygd6rPqg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Xm1Te8dV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_azSojtRD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IJpsyiMv_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_PXWe7iEO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Wl9GmKBR_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_utAmg01B_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lk9GBnD4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uDBTFE8R_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_O1pVRJeV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_OiMBTNOi_sendMessage);
}

void Heavy_Amanita::cReceive_kGqOslmt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rCTCAyQt, HV_BINOP_MULTIPLY, 0, m, &cBinop_rCTCAyQt_sendMessage);
}

void Heavy_Amanita::cReceive_PBAyjKEM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VoBiZMGY_sendMessage(_c, 0, m);
  cMsg_AKDW1Zzb_sendMessage(_c, 0, m);
  cMsg_EhBONxKe_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_EqlXBTy6_sendMessage);
}

void Heavy_Amanita::cReceive_vf6EaOk8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_6IJMlTKc_sendMessage);
  cMsg_bNIzxiKv_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_rFiN8s2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wd7zxKem, HV_BINOP_MULTIPLY, 0, m, &cBinop_wd7zxKem_sendMessage);
}

void Heavy_Amanita::cReceive_Qq89R9rT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Byb71Z6H_sendMessage(_c, 0, m);
  cMsg_f3oOeFAB_sendMessage(_c, 0, m);
  cMsg_1NNnSjYc_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_9hiMLyKw_sendMessage);
}

void Heavy_Amanita::cReceive_y7Kc0j30_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_3vZPa5i6_sendMessage);
  cMsg_34oxGAXq_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_1iIutyiy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XxmsG2Ok, HV_BINOP_MULTIPLY, 0, m, &cBinop_XxmsG2Ok_sendMessage);
}

void Heavy_Amanita::cReceive_ZmO8JWjZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_uuZ9sV0N_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_s3bhhtro_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_OwSYVAdi_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_6nmv4RIE_sendMessage);
}

void Heavy_Amanita::cReceive_UV1eQdBU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_39johLsI_sendMessage);
  cMsg_bmmSXBBr_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_IQ7vJ75r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_pVP9yrNF, HV_BINOP_MULTIPLY, 0, m, &cBinop_pVP9yrNF_sendMessage);
}

void Heavy_Amanita::cReceive_L7zR777k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_u2kHgLsh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_AjhiW0NE_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_pEHKL3nv_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_K9Vi0qC0_sendMessage);
}

void Heavy_Amanita::cReceive_UcoQpveB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_ZCdmmZt7_sendMessage);
  cMsg_iNfvTgEG_sendMessage(_c, 0, m);
}

void Heavy_Amanita::cReceive_QMsCKLam_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_AZzJYvz0, 0, m);
  sPhasor_k_onMessage(_c, &Context(_c)->sPhasor_uQQmbcTj, 0, m);
}

void Heavy_Amanita::cReceive_qo0yXjR5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xUuQyr4a, m);
}

void Heavy_Amanita::cReceive_iSTDNOvZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_POW, 2.0f, 0, m, &cBinop_U2pQhh8V_sendMessage);
}



/*
 * Code for expr~ implementation
 * Write out the generic implementation code
 */

 // per class code

 // per object code


/*
 * Context Process Implementation
 */

int Heavy_Amanita::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8;
  hv_bufferi_t Bi0, Bi1;

  // input and output vars
  hv_bufferf_t O0, O1;
  hv_bufferf_t I0, I1;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));
    __hv_load_f(inputBuffers[1]+n, VOf(I1));

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_varread_f(&sVarf_C6k2tkIc, VOf(Bf0));
    __hv_varread_f(&sVarf_ATHWBYLi, VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf0));
    __hv_varread_f(&sVarf_GPGprw0j, VOf(Bf2));
    __hv_add_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_JpXaIh25, VOf(Bf0));
    __hv_del1_f(&sDel1_44Oosibt, VIf(Bf0), VOf(Bf3));
    __hv_lt_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_samphold_f(&sSamphold_pQpkqIPv, VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_sCn7wwGo, VOf(Bf2));
    __hv_line_f(&sLine_ICTOhtuH, VOf(Bf0));
    __hv_line_f(&sLine_LNI9sKcW, VOf(Bf4));
    __hv_line_f(&sLine_vc7IJI3c, VOf(Bf5));
    __hv_line_f(&sLine_LmnjvETe, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_9TTsvvpT, VIf(Bf3), VIf(Bf2), VIf(Bf0), VIf(Bf4), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_7aG7vX0h, VOf(Bf5));
    __hv_line_f(&sLine_CuWdOtce, VOf(Bf4));
    __hv_line_f(&sLine_JBFRYfgn, VOf(Bf0));
    __hv_line_f(&sLine_3PWf0Z0V, VOf(Bf2));
    __hv_line_f(&sLine_ni7lTboZ, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_aJ1shnrl, VIf(Bf6), VIf(Bf5), VIf(Bf4), VIf(Bf0), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_lI35CX71, VOf(Bf2));
    __hv_line_f(&sLine_Aa0DHPvl, VOf(Bf0));
    __hv_line_f(&sLine_cFrnWnTx, VOf(Bf4));
    __hv_line_f(&sLine_Wpu6HN3J, VOf(Bf5));
    __hv_line_f(&sLine_LQXG4bYE, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_czz3Kh8j, VIf(Bf3), VIf(Bf2), VIf(Bf0), VIf(Bf4), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_f5dBduqC, VOf(Bf5));
    __hv_line_f(&sLine_k5EoDtvA, VOf(Bf4));
    __hv_line_f(&sLine_57u6vY09, VOf(Bf0));
    __hv_line_f(&sLine_DsEmVcah, VOf(Bf2));
    __hv_line_f(&sLine_z1D5ws9u, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_is1DpPbj, VIf(Bf6), VIf(Bf5), VIf(Bf4), VIf(Bf0), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_VDzyY5eR, VOf(Bf2));
    __hv_line_f(&sLine_XWbngO9y, VOf(Bf0));
    __hv_line_f(&sLine_YFesRRxe, VOf(Bf4));
    __hv_line_f(&sLine_5H2bhEe5, VOf(Bf5));
    __hv_line_f(&sLine_Ske3tXS3, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_U0Ieoqah, VIf(Bf3), VIf(Bf2), VIf(Bf0), VIf(Bf4), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_htxrKQHE, VOf(Bf5));
    __hv_line_f(&sLine_V6GoVAWY, VOf(Bf4));
    __hv_line_f(&sLine_VdIwY6rI, VOf(Bf0));
    __hv_line_f(&sLine_ZcSWcSb3, VOf(Bf2));
    __hv_line_f(&sLine_c9VVLK7g, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_yQ2eGTHt, VIf(Bf6), VIf(Bf5), VIf(Bf4), VIf(Bf0), VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf3), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf2), VIf(Bf0), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf2), VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_div_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_Taof386C, VIf(Bf0));
    __hv_varread_f(&sVarf_bUxu90fr, VOf(Bf0));
    __hv_varread_f(&sVarf_CuKx6Hte, VOf(Bf3));
    __hv_add_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_phjhaAs5, VOf(Bf3));
    __hv_del1_f(&sDel1_1CJ42huo, VIf(Bf3), VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_samphold_f(&sSamphold_TsY66JXK, VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_k1qvh5nX, VOf(Bf1));
    __hv_line_f(&sLine_7HOhK9jD, VOf(Bf3));
    __hv_line_f(&sLine_75RTNMZK, VOf(Bf4));
    __hv_line_f(&sLine_4njeYdu2, VOf(Bf5));
    __hv_line_f(&sLine_pxdcXsMi, VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_gYRJLuLq, VIf(Bf0), VIf(Bf1), VIf(Bf3), VIf(Bf4), VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_LDRPbkgm, VOf(Bf5));
    __hv_line_f(&sLine_dAg6bNoa, VOf(Bf4));
    __hv_line_f(&sLine_nbfdffe7, VOf(Bf3));
    __hv_line_f(&sLine_lxY20HFe, VOf(Bf1));
    __hv_line_f(&sLine_a77F3dXb, VOf(Bf0));
    __hv_biquad_f(&sBiquad_s_DXoqW9XK, VIf(Bf2), VIf(Bf5), VIf(Bf4), VIf(Bf3), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_kOn9Jd5e, VOf(Bf1));
    __hv_line_f(&sLine_weSMl0da, VOf(Bf3));
    __hv_line_f(&sLine_buQTGpbL, VOf(Bf4));
    __hv_line_f(&sLine_qrBwj9PX, VOf(Bf5));
    __hv_line_f(&sLine_YMO7oReX, VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_oTQDrDqQ, VIf(Bf0), VIf(Bf1), VIf(Bf3), VIf(Bf4), VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_1s4SIsuo, VOf(Bf5));
    __hv_line_f(&sLine_6xol9E3D, VOf(Bf4));
    __hv_line_f(&sLine_j9Wfp4Jq, VOf(Bf3));
    __hv_line_f(&sLine_JARUuXAX, VOf(Bf1));
    __hv_line_f(&sLine_N0eUP7Kv, VOf(Bf0));
    __hv_biquad_f(&sBiquad_s_BzAmNHNx, VIf(Bf2), VIf(Bf5), VIf(Bf4), VIf(Bf3), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_9tdj5VC5, VOf(Bf1));
    __hv_line_f(&sLine_Bqws0nol, VOf(Bf3));
    __hv_line_f(&sLine_7vWHiHpj, VOf(Bf4));
    __hv_line_f(&sLine_yV7aGCRQ, VOf(Bf5));
    __hv_line_f(&sLine_MjJMW72Q, VOf(Bf2));
    __hv_biquad_f(&sBiquad_s_cxk0dR9T, VIf(Bf0), VIf(Bf1), VIf(Bf3), VIf(Bf4), VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_TFDosmS4, VOf(Bf5));
    __hv_line_f(&sLine_zlx74e0K, VOf(Bf4));
    __hv_line_f(&sLine_8ExBKhmi, VOf(Bf3));
    __hv_line_f(&sLine_FWudTKIJ, VOf(Bf1));
    __hv_line_f(&sLine_3OZ2vNjZ, VOf(Bf0));
    __hv_biquad_f(&sBiquad_s_xxarhA6q, VIf(Bf2), VIf(Bf5), VIf(Bf4), VIf(Bf3), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf1), VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_div_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_tabwrite_f(&sTabwrite_AcsJGhQk, VIf(Bf3));
    __hv_varread_f(&sVarf_8dQ5hfqD, VOf(Bf3));
    __hv_varread_f(&sVarf_n3jyRvK0, VOf(Bf0));
    __hv_varread_f(&sVarf_eioMluFz, VOf(Bf4));
    __hv_neg_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_1XzJXWBZ, VOf(Bf4));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf1));
    __hv_fma_f(VIf(Bf3), VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_xUuQyr4a, VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf0), VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_varwrite_f(&sVarf_bUxu90fr, VIf(Bf1));
    __hv_varread_f(&sVarf_2ki4AZqC, VOf(Bf4));
    __hv_add_f(VIf(I0), VIf(I1), VOf(Bf5));
    __hv_varread_f(&sVarf_emc6lz7h, VOf(Bf0));
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(I0), VIf(Bf4), VIf(Bf0), VOf(Bf5));
    __hv_varwrite_f(&sVarf_CuKx6Hte, VIf(Bf5));
    __hv_fma_f(VIf(I1), VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varwrite_f(&sVarf_C6k2tkIc, VIf(Bf0));
    __hv_line_f(&sLine_P4oNGvyc, VOf(Bf0));
    __hv_varread_f(&sVarf_0HQunnwa, VOf(Bf4));
    __hv_phasor_k_f(&sPhasor_AZzJYvz0, VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf6));
    __hv_mul_f(VIf(Bf6), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf7), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf8), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf6), VIf(Bf8), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_sample_f(this, &sSample_cLQJYAOq, VIf(Bf3), &sSample_cLQJYAOq_sendMessage);
    __hv_line_f(&sLine_jKwJVTtk, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_tabhead_f(&sTabhead_cBecGB6h, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf7), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_HMNYG0kF, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_5qQUCcqn, VOf(Bf3));
    __hv_min_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf7));
    __hv_varread_f(&sVarf_dcJdKudb, VOf(Bf3));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf7), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_4JKy3ob3, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_V3SEgazt, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf5));
    __hv_sub_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf5), VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_8dQ5hfqD, VIf(Bf3));
    __hv_phasor_k_f(&sPhasor_uQQmbcTj, VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_abs_f(VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf7), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f, 6.283185307179586f);
    __hv_mul_f(VIf(Bf3), VIf(Bf7), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf7), VOf(Bf3));
    __hv_mul_f(VIf(Bf7), VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f, 0.007833333333333f);
    __hv_var_k_f(VOf(Bf8), -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f, -0.166666666666667f);
    __hv_fma_f(VIf(Bf5), VIf(Bf8), VIf(Bf7), VOf(Bf7));
    __hv_fma_f(VIf(Bf3), VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_sample_f(this, &sSample_Hkc8hehr, VIf(Bf7), &sSample_Hkc8hehr_sendMessage);
    __hv_line_f(&sLine_glrXX9QS, VOf(Bf7));
    __hv_line_f(&sLine_3yqV2aEB, VOf(Bf0));
    __hv_fma_f(VIf(Bf4), VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_tabhead_f(&sTabhead_KnicyihY, VOf(Bf7));
    __hv_var_k_f_r(VOf(Bf4), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_kdlhXrC4, VOf(Bf7));
    __hv_mul_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_0nKGuyvc, VOf(Bf0));
    __hv_min_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf7));
    __hv_max_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_sub_f(VIf(Bf4), VIf(Bf7), VOf(Bf7));
    __hv_floor_f(VIf(Bf7), VOf(Bf4));
    __hv_varread_f(&sVarf_9kFFLcM7, VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_1Z93TM8l, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_RVWSH3TK, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf3));
    __hv_sub_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varwrite_f(&sVarf_n3jyRvK0, VIf(Bf0));
    __hv_varread_f(&sVarf_82ZpOux6, VOf(Bf0));
    __hv_mul_f(VIf(I0), VIf(Bf0), VOf(Bf0));
    sEnv_process(this, &sEnv_3XvdDwz3, VIf(Bf0), &sEnv_3XvdDwz3_sendMessage);
    __hv_line_f(&sLine_8SkmuxFW, VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_div_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_varwrite_f(&sVarf_JhGgKkF5, VIf(Bf0));
    __hv_varread_f(&sVarf_uBiX31xp, VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f);
    __hv_var_k_f(VOf(Bf3), 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f);
    __hv_fms_f(VIf(Bf0), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_neg_f(VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_EjSa4jXE, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_phasor_f(&sPhasor_taphGNUW, VIf(Bf4), VOf(Bf4));
    __hv_varwrite_f(&sVarf_phjhaAs5, VIf(Bf4));
    __hv_varread_f(&sVarf_QfZbwEeL, VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f, 19904.0f);
    __hv_var_k_f(VOf(Bf0), 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f, 24000.0f);
    __hv_fms_f(VIf(Bf4), VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_neg_f(VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_ytJue62C, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_phasor_f(&sPhasor_mFhZN00O, VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_JpXaIh25, VIf(Bf3));
    __hv_varread_f(&sVarf_MTYIeRyy, VOf(Bf3));
    __hv_varread_i(&sVari_u0nawTPi, VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 16807, 16807, 16807, 16807, 16807, 16807, 16807, 16807);
    __hv_mul_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_cast_if(VIi(Bi1), VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f, 4.65661e-10f);
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_varwrite_i(&sVari_u0nawTPi, VIi(Bi1));
    __hv_varread_f(&sVarf_C3NYtRTj, VOf(Bf0));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_8WiuNwbG, VOf(Bf4));
    __hv_rpole_f(&sRPole_hKGk2cT6, VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_FlmQY1N1, VOf(Bf0));
    __hv_rpole_f(&sRPole_KlVlSdWP, VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_k9YyaNjt, VIf(Bf0), VOf(Bf7));
    __hv_mul_f(VIf(Bf7), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_vhj9yZ8r, VOf(Bf0));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_onqgPEQj, VOf(Bf4));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 0.75f, 0.75f, 0.75f, 0.75f, 0.75f, 0.75f, 0.75f, 0.75f);
    __hv_min_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), -0.75f, -0.75f, -0.75f, -0.75f, -0.75f, -0.75f, -0.75f, -0.75f);
    __hv_max_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_yVdcT1bN, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_ATHWBYLi, VIf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf2), VOf(Bf1));
    __hv_varwrite_f(&sVarf_MTYIeRyy, VIf(Bf1));
    __hv_varwrite_f(&sVarf_GPGprw0j, VIf(Bf2));
    __hv_varread_f(&sVarf_n3jyRvK0, VOf(Bf2));
    __hv_varread_f(&sVarf_IN81twZO, VOf(Bf1));
    __hv_mul_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_JhGgKkF5, VOf(Bf2));
    __hv_mul_f(VIf(Bf2), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf1));
    __hv_line_f(&sLine_KQ4G5hKg, VOf(Bf3));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_log2_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f);
    __hv_var_k_f(VOf(Bf0), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_div_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_C6k2tkIc, VOf(Bf3));
    __hv_varread_f(&sVarf_D4fXIbEM, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf1), VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf3));
    __hv_var_k_f(VOf(Bf7), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf0), VIf(Bf7), VIf(Bf1), VOf(Bf1));
    __hv_div_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f);
    __hv_min_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f);
    __hv_max_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf1), VIf(O1), VOf(O1));
    __hv_varread_f(&sVarf_8dQ5hfqD, VOf(Bf1));
    __hv_varread_f(&sVarf_DpnTZQVJ, VOf(Bf4));
    __hv_mul_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_LnxXdeKH, VOf(Bf4));
    __hv_zero_f(VOf(Bf1));
    __hv_max_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_log2_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f, 6.020599913279624f);
    __hv_var_k_f(VOf(Bf3), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_fma_f(VIf(Bf1), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f, 100.0f);
    __hv_div_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_CuKx6Hte, VOf(Bf4));
    __hv_varread_f(&sVarf_T0zEzU4H, VOf(Bf1));
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf2), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf3));
    __hv_var_k_f(VOf(Bf2), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf2), VOf(Bf4));
    __hv_var_k_f(VOf(Bf7), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf3), VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_div_f(VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf1), 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f, 0.49f);
    __hv_min_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf2), -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f, -0.49f);
    __hv_max_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_add_f(VIf(Bf2), VIf(O0), VOf(O0));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_Amanita::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s)
  float **const bIn = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bIn[0] = inputBuffers+(0*n4);
  bIn[1] = inputBuffers+(1*n4);

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_Amanita::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 2 channel(s), uninterleave
  float *const bIn = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));
  #if HV_SIMD_SSE || HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 a = _mm_load_ps(inputBuffers+i);                // LRLR
    __m128 b = _mm_load_ps(inputBuffers+4+i);              // LRLR
    __m128 x = _mm_shuffle_ps(a, b, _MM_SHUFFLE(2,0,2,0)); // LLLL
    __m128 y = _mm_shuffle_ps(a, b, _MM_SHUFFLE(3,1,3,1)); // RRRR
    _mm_store_ps(bIn+j, x);
    _mm_store_ps(bIn+n4+j, y);
  }
  #elif HV_SIMD_NEON
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4x2_t a = vld2q_f32(inputBuffers+i); // load and uninterleave
    vst1q_f32(bIn+j, a.val[0]);
    vst1q_f32(bIn+n4+j, a.val[1]);
  }
  #else // HV_SIMD_NONE
  for (int j = 0; j < n4; ++j) {
    bIn[0*n4+j] = inputBuffers[0+2*j];
    bIn[1*n4+j] = inputBuffers[1+2*j];
  }
  #endif

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
