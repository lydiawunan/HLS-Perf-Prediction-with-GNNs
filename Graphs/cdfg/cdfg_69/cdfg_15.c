#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 647859884
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, short p_5, unsigned short p_15[4][5], float p_17,
           signed char p_23)
{
  unsigned int v_31;
  unsigned int v_29;
  int v_27;
  short v_25;
  unsigned long v_21;
  unsigned long long v_19;
  signed char v_13;
  unsigned short v_11;
  int v_9;
  unsigned long long v_7;
  unsigned long v;
  double result;
  v_31 = (unsigned int)p_15[3][0];
  v_29 = 2186U;
  v_27 = 54768051;
  v_25 = (short)8925;
  v_21 = (unsigned long)p_17;
  v_11 = (unsigned short)16726;
  v_9 = (int)p_17;
  v_7 = 63020ULL;
  v = (unsigned long)p_5;
  if ((unsigned long)(~ (~ v_29 & (unsigned int)6432172032.f)) < - ((
                                                                    v_21 / (unsigned long)(
                                                                    v_29 + 534U)) * (unsigned long)(~ v_9))) {
    result = (double)((unsigned int)((int)p_23 / (~ v_27 + 778)) - v_29);
    v_7 = (unsigned long long)(477619202UL * v) - 18446744073709547280ULL;
    v_19 = (unsigned long long)((unsigned long)(-2586L * ((long)p_5 + 59348L)) % (
                                (4606228UL + (unsigned long)v_25 % (v_21 + 882UL)) + 275UL));
  }
  else {
    v_13 = (signed char)((float)((unsigned int)(~ v_11) % ((unsigned int)p_5 / (
                                                           v_31 + 212U) + 411U)) + - (
                         (float)p + p_17));
    result = (double)(- p_15[3][2]);
    v_19 = (unsigned long long)((int)(! (- p_15[0][0])) + (int)v_13);
  }
  if ((int)((signed char)((float)(37ULL & (v_7 | (unsigned long long)-7324992000.f)) - - (- p_17))) != (int)p_23) {
    v_7 = 18446744073546302187ULL;
    v = (unsigned long)v_7;
    result = (double)((unsigned long)(- p) | v * (unsigned long)(2435 + (int)p_5));
  }
  else {
    v_13 = (signed char)(- (((int)((unsigned short)9171793295.71) + 54375) * (
                            (int)v_25 + 141)));
    v_11 = (unsigned short)(((unsigned long long)p_5 / (v_19 + 305ULL)) / (
                            (unsigned long long)((double)v_21 + result) + 70ULL) ^ (unsigned long long)(
                            (int)(- p_15[1][0]) - (int)p_23));
    result = (double)((int)((unsigned short)(1.60453249658e+38 / ((double)v_9 + 425.))) % (
                      (int)v_11 + 161) | ((int)v_13 / ((int)v_13 + 352) + 
                                          (int)p_15[2][4] * (int)((unsigned short)p_17)));
  }
  return result;
}


