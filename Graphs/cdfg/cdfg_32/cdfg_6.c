#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 471045997
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned long long p_13,
                       unsigned char p_17[1][2][5], unsigned char p_19)
{
  double v_23;
  float v_21;
  long v_15;
  unsigned char v_11;
  short v_9;
  long v_7;
  int v_4;
  long long v;
  unsigned long long result;
  v_23 = 374.920638381;
  v_21 = (float)p;
  v_15 = 87498653L;
  v_11 = (unsigned char)p;
  v_9 = (short)10361;
  v_4 = (int)p_13;
  v = (long long)p;
  result = (unsigned long long)p_19;
  if ((double)((float)(v_4 + v_4) * v_21) + (v_23 * (double)v_21) * (
                                            (double)v_21 / -1.38672216171e+38) != (double)(
      13860UL / (unsigned long)(~ v_4 * ((int)p_19 % 15716) + 780))) {
    v_4 = (int)v_9;
    v_7 = -782935964L;
    v_9 = (short)((v * (long long)v_7) % 267LL);
  }
  else {
    v_7 = (long)((unsigned long long)(- (~ p_17[0][1][1])) % (~ (308104404ULL * (unsigned long long)p_19) + 337ULL));
    v_9 = (short)3373;
    v_15 = (long)((unsigned long long)(-21602LL % (((long long)p_17[0][0][3] - v) + 856LL)) + (
                  (57806ULL - (unsigned long long)p_17[0][1][4]) + 255ULL));
  }
  while ((unsigned long long)(- (~ v) / (long long)(! (v_4 % ((int)p + 157)) + 925)) > 
         (unsigned long long)((unsigned long)(! v_7) * 3782136706UL) - (
         (unsigned long long)(- v_9) - ((unsigned long long)v_11 + p_13))) {
    v_4 = v_15 << 21;
    v = (long long)p_17[0][1][1];
    result = (unsigned long long)(~ (-4135842745U));
    v_11 = (unsigned char)v;
  }
  while_0_break: ;
  return result;
}


