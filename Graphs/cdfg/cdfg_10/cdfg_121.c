#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 371520083
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(float p, char p_9[4][3][3], long p_11, unsigned long long p_15,
         short p_17)
{
  unsigned char v_21;
  char v_19;
  float v_13;
  unsigned long long v_7;
  unsigned long v_4;
  signed char v;
  char result;
  v_21 = (unsigned char)p_15;
  v_19 = (char)30;
  v_13 = (float)p_17;
  v_7 = 18446744073709541245ULL;
  if (- p_15 <= (unsigned long long)(- ((float)v_21 * (v_13 / ((float)p_17 + 641.f))))) {
    v_4 = (unsigned long)v_13;
    v_7 = (unsigned long long)(- (p_11 - p_11));
    v = (signed char)(4294929057ULL % (v_7 + 682ULL) + (unsigned long long)p_9[1][0][0]);
  }
  else {
    v_7 = - v_7 / 18446744073709551492ULL;
    v_4 = (unsigned long)(- ((unsigned long long)((int)p_17 + (int)v_19) - (
                             (unsigned long long)p_17 - v_7)));
    v = (signed char)(p_15 % 693981043ULL);
  }
  result = (char)((long long)((unsigned long)(! v) - v_4 * 38445UL) / (
                  ! ((long long)p + -237833970LL) + 947LL));
  return result;
}


