#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 764758037
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, int p_5, int p_9[3][5], signed char p_19, double p_21)
{
  double v_17;
  char v_15;
  short v_13;
  double v_11;
  unsigned short v_7;
  char v;
  int result;
  v_17 = (double)p_5;
  v_15 = (char)103;
  v_13 = (short)p;
  v_11 = (double)p_19;
  v = (char)p_21;
  result = 34547;
  if (~ (- p_5) <= (int)(- (-20. / (v_17 + 384.)) * (double)((int)((char)(
                                                             (double)v_13 + v_11)) % (
                                                             (int)(! v) + 662)))) {
    v_11 = (double)32536LL;
    v_15 = (char)(- v_17);
    v_17 = p_21;
  }
  else {
    result = (int)(76. * (- v_17 - -46.));
    v_11 = (double)((((unsigned long)p_19 * 51153UL) * (unsigned long)(- p_21)) * (unsigned long)(
                    (long)((int)v_13 % ((int)p_19 + 244)) * (972692525L % (long)(
                                                             (int)p_19 + 902))));
    v_17 = (double)p_19;
  }
  if ((unsigned long)(- ((float)p_5 / 1.51294991563e+38f)) * (((unsigned long)v / 4294938703UL) % (unsigned long)(
                                                              ~ result + 547)) <= (unsigned long)(
      - (- v_11) - (double)(~ ((unsigned long long)p_19 + 18446744072887885881ULL)))) {
    v = (char)((int)((double)p_9[2][2] - v_11) & (int)v_13 / ((int)v_15 / (
                                                              (int)((char)v_17) + 177) + 842));
    v_7 = (unsigned short)p;
    result = (int)(((unsigned long)((int)v | 28443) / 15847242UL) / (unsigned long)(
                   ((int)(~ p) + (p_5 - (int)v_7)) + 988));
  }
  else {
    v_13 = (short)(~ 29329746U);
    v_11 = - (-298.37105518 * v_17);
    result = (int)(((21842L & (long)v_13) - (long)(~ p_19)) + (long)(
                   (double)((int)p_21 + result) / (v_11 + 309.)));
  }
  return result;
}


