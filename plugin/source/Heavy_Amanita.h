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

#ifndef _HEAVY_AMANITA_H_
#define _HEAVY_AMANITA_H_

#include "HvHeavy.h"

#ifdef __cplusplus
extern "C" {
#endif

#if HV_APPLE
#pragma mark - Heavy Context
#endif

typedef enum {
  HV_AMANITA_PARAM_IN_BITRATE = 0x6CA32231, // Bitrate
  HV_AMANITA_PARAM_IN_DEL_LEFT = 0x50848907, // Del_Left
  HV_AMANITA_PARAM_IN_DEL_RIGHT = 0x6EB8DB6, // Del_Right
  HV_AMANITA_PARAM_IN_FEEDBACK = 0x57157946, // Feedback
  HV_AMANITA_PARAM_IN_FEEL_LEFT = 0xBCF6D724, // Feel_Left
  HV_AMANITA_PARAM_IN_FEEL_RIGHT = 0xB9290266, // Feel_Right
  HV_AMANITA_PARAM_IN_HIPASS_FREQ = 0x31E34622, // Hipass_Freq
  HV_AMANITA_PARAM_IN_HIPASS_RES = 0x415BC573, // Hipass_Res
  HV_AMANITA_PARAM_IN_LFO_AMOUNT = 0xD5F085A8, // Lfo_Amount
  HV_AMANITA_PARAM_IN_LFO_PHAZE = 0x268762D2, // Lfo_Phaze
  HV_AMANITA_PARAM_IN_LFO_RATE = 0xCE9CDD82, // Lfo_Rate
  HV_AMANITA_PARAM_IN_LOWPASS_FREQ = 0x4123BB7, // Lowpass_Freq
  HV_AMANITA_PARAM_IN_LOWPASS_RES = 0x6A5226EA, // Lowpass_Res
  HV_AMANITA_PARAM_IN_MONO_STERO_IN = 0x4519E135, // Mono_Stero_In
  HV_AMANITA_PARAM_IN_NOISE_AGGRO = 0x7B3C1830, // Noise_Aggro
  HV_AMANITA_PARAM_IN_NOISE_LVL = 0x80BB8803, // Noise_Lvl
  HV_AMANITA_PARAM_IN_PAN = 0x3779CB25, // Pan
  HV_AMANITA_PARAM_IN_SIDECHAIN = 0xCA91F83B, // Sidechain
  HV_AMANITA_PARAM_IN_STEREO_PINGPONG = 0x821BE185, // Stereo_PingPong
  HV_AMANITA_PARAM_IN_SYNC_DELAYS = 0xB8FDF5C9, // Sync_Delays
  HV_AMANITA_PARAM_IN_TEMPO_SYNC = 0xAD9B5744, // Tempo_Sync
  HV_AMANITA_PARAM_IN_WET_MIX = 0xF245D837, // Wet_Mix
} Hv_Amanita_ParameterIn;


/**
 * Creates a new patch instance.
 * Sample rate should be positive and in Hertz, e.g. 44100.0.
 */
HeavyContextInterface *hv_Amanita_new(double sampleRate);

/**
 * Creates a new patch instance.
 * @param sampleRate  Sample rate should be positive (> 0) and in Hertz, e.g. 48000.0.
 * @param poolKb  Pool size is in kilobytes, and determines the maximum amount of memory
 *   allocated to messages at any time. By default this is 10 KB.
 * @param inQueueKb  The size of the input message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages between calls to
 *   process(). Default is 2 KB.
 * @param outQueueKb  The size of the output message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages to the default sendHook.
 *   See getNextSentMessage() for info on accessing these messages. Default is 0 KB.
 */
HeavyContextInterface *hv_Amanita_new_with_options(double sampleRate, int poolKb, int inQueueKb, int outQueueKb);

/**
 * Free the patch instance.
 */
void hv_Amanita_free(HeavyContextInterface *instance);


#ifdef __cplusplus
} // extern "C"
#endif

#endif // _HEAVY_AMANITA_H_
