#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 510871720
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(int p, unsigned char p_9[5][1], unsigned long long p_11[3],
           unsigned int p_15, char p_19)
{
  signed char v_29;
  unsigned long long v_27;
  float v_25;
  int v_23;
  unsigned char v_21;
  long v_17;
  unsigned char v_13;
  long v_6;
  double v_4;
  signed char v;
  double result;
  v_29 = (signed char)p_19;
  v_27 = (unsigned long long)p_15;
  v_23 = (int)p_11[0];
  v_13 = p_9[3][0];
  v_4 = 2980836366.23;
  v = (signed char)38;
  if ((unsigned long long)(~ v) < (unsigned long long)(-32804L % (long)(
                                                       (int)v_29 + 675) - -128L) % (
                                  ((unsigned long long)((int)p_19 * 930863167) + p_11[0]) + 300ULL)) {
    v_25 = (float)(~ (p_15 * 4294935927U) | p_15);
    v_6 = (long)p;
    v_23 = -778695734;
  }
  else {
    v_25 = (float)(! v_27);
    v_6 = (long)p;
    v = (signed char)(! (- (- p_9[3][0])));
  }
  if ((double)((int)(7453545472.f * (float)((int)((unsigned char)v_25) - (int)v_13)) + ! (
               (int)p_19 * 33763)) != - ((double)p_11[2] - v_4 * (double)v_27)) {
    v_4 = (double)((unsigned long long)(9679 / ((int)p_9[2][0] + 596)) % (
                   p_11[1] % (unsigned long long)((int)v_13 + 174) + 950ULL) + 4112886962ULL);
    v_6 = (long)(~ (p - (int)v)) - (v_6 - (long)p);
    result = (double)(~ ((long)((int)((signed char)-5678689494.11) / (
                                (int)v + 206)) - (long)v_4 / (v_6 + 897L)));
  }
  else {
    v_21 = (unsigned char)((long)(! p + 19043) * ((long)((int)p_9[0][0] & v_23) - 1056189748L));
    v_17 = (long)((float)((int)(~ p_19) - ((int)p_9[3][0] - p)) + ((float)v_21 - -1.31303528055e+37f));
    result = (double)(~ (! ((unsigned long)p_15 * (unsigned long)v_17)));
  }
  return result;
}


