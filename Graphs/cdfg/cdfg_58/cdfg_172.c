#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 344453234
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p, int p_4, float p_6, char p_8[4], char p_11[1][2][2])
{
  unsigned long v_31;
  unsigned int v_29;
  unsigned int v_27;
  char v_25;
  unsigned long long v_23;
  unsigned short v_21;
  unsigned char v_19;
  short v_17;
  float v_15;
  double v_13;
  long v;
  double result;
  v_31 = (unsigned long)p_11[0][0][0];
  v_29 = (unsigned int)p;
  v_27 = 951486878U;
  v_25 = (char)p;
  v_19 = (unsigned char)p_8[0];
  v_15 = (float)p_11[0][0][1];
  if ((double)(18446744073153482514ULL % (unsigned long long)((unsigned int)-31654632.f / (
                                                              ((unsigned int)p_4 | v_27) + 542U) + 451U)) < -2.28645126593e+38) {
    v_23 = 18446744073199649824ULL;
    v_21 = (unsigned short)35579;
    v_17 = (short)((unsigned long long)((int)(- p_11[0][0][0]) - (int)v_19) | (
                   (unsigned long long)v_21 % (v_23 + 205ULL) << 57));
  }
  else {
    v_17 = (short)((unsigned long)((long)(! p_4) % (- p + 445L)) / ((unsigned long)(
                                                                    v_27 | v_29) / (
                                                                    (
                                                                    v_31 + (unsigned long)v_29) + 780UL) + 470UL));
    v = (long)(- p_8[0]);
    v_15 = - ((p_6 + (float)v) - (float)(-96 + (int)v_25));
  }
  if ((unsigned long long)(~ ((long)p_6 / (p + 951L))) >= 18446744072886704912ULL + (unsigned long long)(
                                                          (105 * (int)((unsigned char)v_15)) * (int)v_17)) 
    result = (double)(- (~ p) + (long)((p_4 / 60) / 83));
  else {
    v_13 = (double)(- -9965430784.f);
    v = (long)((double)(~ (! p_11[0][1][0])) + v_13);
    result = (double)(138L - (long)(p_6 * 5531.f) % ((long)p_8[0] / (
                                                     v + 998L) + 867L));
  }
  return result;
}


