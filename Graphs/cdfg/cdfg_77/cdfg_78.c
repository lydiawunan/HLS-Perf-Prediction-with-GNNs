#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 273796955
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned short p_9, int p_25)
{
  long v_23;
  unsigned long long v_21;
  int v_19;
  short v_17;
  float v_15;
  unsigned int v_13;
  signed char v_11;
  double v_6;
  short v_4;
  signed char v;
  signed char result;
  v_23 = -52261L;
  v_21 = 213508818ULL;
  v_19 = (int)p_9;
  v_17 = (short)p_25;
  v_15 = 3.12477637526e+38f;
  v_13 = 484964609U;
  v_11 = (signed char)37;
  v = (signed char)p_9;
  result = (signed char)98;
  if ((long)((int)(7974660.92356 + (double)((unsigned int)p % (v_13 + 589U))) + 
             (p_25 % ((int)result + 669)) * -6972) < -8839L / (long)(
                                                     (6866 - (int)v) + 355) - (long)v_11) {
    v_4 = (short)((unsigned long long)(- v) / (((unsigned long long)p_9 - 18446744073709511997ULL) + 969ULL) + (unsigned long long)v_19);
    v_15 = (float)v;
    v_11 = (signed char)(- (-912.607748887 * (double)((int)p + (int)v_17)));
  }
  else {
    v_4 = (short)((unsigned long long)(! p) + ((v_21 >> (v_23 & 63L)) << (
                                               p_25 / ((int)result + 183) & 63)));
    v_21 = (unsigned long long)(- v_15);
    v_15 = (float)(~ (18446744073709510877ULL - v_21) % 986ULL);
  }
  if ((float)(~ (v_13 / 860908803U) + (unsigned int)(~ ((int)p * (int)p_9))) != v_15) {
    v_6 = (double)p_9;
    result = (signed char)(((int)(~ v) | (int)((signed char)(738282216. + v_6))) - 
                           (int)((unsigned char)(v_6 + (double)p)) % 215);
    result = (signed char)(- ((int)v + (int)result) / ((int)v_4 + 581));
  }
  else {
    v_13 = 473767789U;
    v_4 = (short)((36220UL + (unsigned long)(4874 * (int)v_11)) + (unsigned long)v_13);
    result = (signed char)(886557689UL - (unsigned long)v_4);
  }
  return result;
}


