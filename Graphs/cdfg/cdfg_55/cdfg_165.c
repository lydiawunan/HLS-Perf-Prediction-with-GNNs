#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 537032567
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, unsigned char p_5[3][5], char p_11,
                  unsigned int p_13, unsigned int p_15[4])
{
  int v_31;
  char v_29;
  unsigned char v_27;
  unsigned long long v_25;
  unsigned long long v_23;
  double v_21;
  double v_19;
  float v_17;
  signed char v_9;
  double v_7;
  unsigned long v;
  unsigned long result;
  v_31 = 11569997;
  v_29 = (char)p_13;
  v_27 = p_5[1][1];
  v_25 = 295949806ULL;
  v_21 = (double)p_11;
  v_19 = -517.273150552;
  v_9 = (signed char)-44;
  result = (unsigned long)p_13;
  if ((long long)v_27 == (long long)p / 211594363LL) {
    v_27 = (unsigned char)(~ (((int)((char)v_21) - (int)v_29) % ((int)p_5[2][4] / (
                                                                 (int)((unsigned char)6302395392.f) + 235) + 542)));
    v_23 = (unsigned long long)(11194LL % (long long)((17659U + p_15[0] % 76U) + 134U));
    v_7 = (double)(((unsigned long long)(19335U / (p_15[1] + 192U)) - 
                    (unsigned long long)v_9 * 269786869ULL) / (unsigned long long)(
                   (int)v_27 + 683));
  }
  else {
    v_7 = (double)(! p_13);
    v_19 = (double)(-708938133ULL);
    v_23 = (unsigned long long)(- (result + (unsigned long)p_11) / ((unsigned long)(
                                                                    p_15[2] + (unsigned int)v_31) / 22270UL + 192UL));
  }
  if (18446744073709521213ULL - v_23 > v_25) {
    v_7 = v_7;
    v = (unsigned long)((int)p * ((int)p % ((int)p_5[2][3] + 765)) - (int)v_7);
    result = ~ v;
  }
  else {
    v_17 = (float)(~ (! p_15[0]));
    v_9 = (signed char)(- ((double)v_17 * v_19) / ((v_21 - (double)(~ p_15[3])) + 537.));
    result = (unsigned long)(! ((unsigned int)((int)v_9 | (int)p_11) * (
                                p_13 * p_15[3])));
  }
  return result;
}


