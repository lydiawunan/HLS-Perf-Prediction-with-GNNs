#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 167319553
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, signed char p_11, char p_15, short p_17[4][5][5],
        double p_19[2])
{
  unsigned long long v_31;
  float v_29;
  long long v_27;
  unsigned long v_25;
  float v_23;
  int v_21;
  unsigned char v_13;
  float v_9;
  unsigned short v_6;
  unsigned char v_4;
  long long v;
  int result;
  v_31 = 3643ULL;
  v_29 = -1.75646174228e+38f;
  v_25 = (unsigned long)p_11;
  v_23 = (float)p_17[1][1][3];
  v_21 = 2958;
  v_9 = (float)p_17[1][2][1];
  v_6 = (unsigned short)p_17[3][0][3];
  if (! v_31 <= 57143ULL) {
    result = (int)v_29;
    v_27 = (long long)(2.8487143292e+76 - (double)((int)(~ p_11) + (int)((signed char)(
                                                   (double)p_17[3][3][1] / (
                                                   p_19[1] + 748.)))));
    v_23 = (float)(((double)p_15 / (p_19[1] + 250.) + 1.57320449243e+38) * (double)(
                   24384 % ((int)p + 133) - result));
  }
  else {
    v_25 = 31718UL;
    v_27 = (long long)((unsigned long)((unsigned int)v_23 * 3995328911U) % 3476427414UL);
    v_6 = (unsigned short)((long long)(- ((int)p * (int)((unsigned short)v_29))) ^ -32945LL);
  }
  if (- (- v_21) % ((int)(- v_23 / -21579.f) + 633) > (int)(v_9 * (float)(
                                                            26650UL % (
                                                            v_25 + 740UL)) + (float)v_27)) {
    v = (long long)(- (-319080878L | (long)((int)v_6 + (int)p)));
    v_4 = (unsigned char)189;
    result = (int)(- ((float)(v - (long long)v_4) / -3223392000.f));
  }
  else {
    v_13 = (unsigned char)p_15;
    v_9 = (float)(! (- ((int)v_13 % 29)));
    result = (int)((signed char)(- (- v_9))) / ((int)p_11 + 854);
  }
  return result;
}


